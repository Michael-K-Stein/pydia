#include "pch.h"
//
#include "BstrWrapper.h"
#include "DiaDataSource.h"
#include "DiaSymbolEnumerator.h"
#include "DiaUserDefinedTypeWrapper.h"
#include "Exceptions.h"
#include "SymbolPathHelper.h"
#include "SymbolTypes/DiaEnum.h"
#include "SymbolTypes/DiaTypedef.h"
#include <codecvt>
#include <fstream>
#include <iostream>
#include <locale>
#include <memory>
#include <string>

namespace dia
{
unsigned char PDB_FILE_MAGIC[29] = {  // Microsft C/C++ MSF 7.00...DS
    0x4D, 0x69, 0x63, 0x72, 0x6F, 0x73, 0x6F, 0x66, 0x74, 0x20, 0x43, 0x2F, 0x43, 0x2B, 0x2B,
    0x20, 0x4D, 0x53, 0x46, 0x20, 0x37, 0x2E, 0x30, 0x30, 0x0D, 0x0A, 0x1A, 0x44, 0x53};

unsigned char PE_FILE_MAGIC[2]   = {0x4D, 0x5A};  // MZ

DataSource::DataSource()
{
    const auto result = CoCreateInstance(CLSID_DiaSource, NULL, CLSCTX_INPROC_SERVER, __uuidof(IDiaDataSource), reinterpret_cast<void**>(&m_comPtr));
    CHECK_DIACOM_EXCEPTION("DiaSource creation failed!", result);
}

DataSource::DataSource(const AnyString& filePath)
    : DataSource{}
{
    loadDataFromArbitraryFile(filePath);
}

DataSource::DataSource(const AnyString& filePath, const AnyString& symstoreDirectory)
{

    addSymtoreDirectory(symstoreDirectory);
    loadDataFromArbitraryFile(filePath);
}

DataSource::~DataSource() {}

void DataSource::addSymtoreDirectory(const AnyString& symstoreDirectory) { m_additionalSymstoreDirectories.push_back(symstoreDirectory); }

void DataSource::loadDataFromPdb(const AnyString& pdbFilePath)
{
    if (sessionOpened())
    {
        throw InvalidUsageException{"Session already openned!"};
    }
    const auto result = m_comPtr->loadDataFromPdb(pdbFilePath.c_str());
    CHECK_DIACOM_EXCEPTION("Failed to load data from PDB!", result);
    openSession();
}

void DataSource::loadDataForExe(const AnyString& exePath)
{
    if (sessionOpened())
    {
        throw InvalidUsageException{"Session already openned!"};
    }

    const auto& symbolSearchPath = buildSymbolSearchPath(exePath);
    const auto result            = m_comPtr->loadDataForExe(exePath.c_str(), symbolSearchPath.c_str(), nullptr);
    CHECK_DIACOM_EXCEPTION("Failed to load data from executable!", result);
    openSession();
}

const std::wstring DataSource::getLoadedPdbFile() const { return getGlobalScope().getSymbolsFileName(); }

Symbol DataSource::getSymbolByHash(size_t symbolHash) const
{
    auto allSymbols = getSymbols(SymTagNull);
    for (const auto& symbol : allSymbols)
    {
        if (symbol.calcHash() == symbolHash)
        {
            return symbol;
        }
    }
    throw dia::SymbolNotFoundException("No symbol was found matching the given hash!");
}

DiaSymbolEnumerator<Symbol> DataSource::getExports() const { return m_session.getExports(); }

template <typename T>
DiaSymbolEnumerator<T> DataSource::getSymbols(enum SymTagEnum symTag) const
{
    if (SymTagExport == symTag)
    {
        throw InvalidUsageException("You probably meant to use DataSource::getExports()");
    }
    return enumerate<T>(getGlobalScope(), symTag);
}

DiaSymbolEnumerator<Symbol> DataSource::getSymbols(enum SymTagEnum symTag) const { return getSymbols<Symbol>(symTag); }

DiaSymbolEnumerator<Symbol> DataSource::getSymbols(enum SymTagEnum symTag, LPCOLESTR symbolName) const
{
    if (SymTagExport == symTag)
    {
        throw InvalidUsageException("You probably meant to use DataSource::getExports()");
    }
    return enumerate<Symbol>(getGlobalScope(), symTag, symbolName);
}

DiaSymbolEnumerator<Symbol> DataSource::getSymbols(enum SymTagEnum symTag, LPCOLESTR symbolName, DWORD nameComparisonFlags) const
{
    if (SymTagExport == symTag)
    {
        throw InvalidUsageException("You probably meant to use DataSource::getExports()");
    }
    return enumerate<Symbol>(getGlobalScope(), symTag, symbolName, nameComparisonFlags);
}

Enum DataSource::getEnum(const AnyString& enumName) const
{
    const auto rawEnumSymbols = std::vector<Symbol>{getSymbols(SymTagEnum, enumName.c_str())};
    if (rawEnumSymbols.size() < 1)
    {
        throw SymbolNotFoundException("Enum by name not found!");
    }
    if (rawEnumSymbols.size() > 1)
    {
        throw std::runtime_error("Too many enums found matching name!");
    }
    return static_cast<const Enum&>(rawEnumSymbols.at(0));
}

DiaSymbolEnumerator<Enum> DataSource::getEnums() const { return getSymbols<Enum>(SymTagEnum); }

DiaSymbolEnumerator<Symbol> DataSource::getUntypedSymbols() const { return getSymbols(SymTagNull); }

DiaSymbolEnumerator<Symbol> DataSource::getCompilands() const { return getSymbols(SymTagCompiland); }

DiaSymbolEnumerator<Symbol> DataSource::getCompilandDetails() const { return getSymbols(SymTagCompilandDetails); }

DiaSymbolEnumerator<Symbol> DataSource::getCompilandEnvs() const { return getSymbols(SymTagCompilandEnv); }

Function DataSource::getFunction(const AnyString& name) const
{
    const auto rawSymbol = std::vector<Symbol>{getSymbols(SymTagFunction, name.c_str())};
    if (rawSymbol.size() < 1)
    {
        throw SymbolNotFoundException("Function by name not found!");
    }
    if (rawSymbol.size() > 1)
    {
        throw std::runtime_error("Too many functions found matching name!");
    }
    return static_cast<const Function&>(rawSymbol.at(0));
}

DiaSymbolEnumerator<Function> DataSource::getFunctions() const { return getSymbols<Function>(SymTagFunction); }

DiaSymbolEnumerator<UserDefinedType> DataSource::getUserDefinedTypes() const { return getSymbols<UserDefinedType>(SymTagUDT); }

UserDefinedType DataSource::getStruct(const AnyString& structName) const
{
    std::vector<Symbol> items{};
    auto exports = enumerate<Symbol>(getGlobalScope(), SymTagUDT, structName.c_str());
    for (const auto& item : exports)
    {
        if (UdtStruct != item.getUdtKind())
        {
            continue;
        }
        items.push_back(item);
    }
    if (items.size() < 1)
    {
        throw SymbolNotFoundException("Struct by name not found!");
    }
    if (items.size() > 1)
    {
        throw std::runtime_error("Too many structs found matching name!");
    }
    return static_cast<const UserDefinedType&>(items.at(0));
}

std::vector<Struct> DataSource::getStructs() const { return convertSymbolVector<Struct>(getUserDefinedTypes(UdtStruct)); }

std::vector<Class> DataSource::getClasses() const { return convertSymbolVector<Class>(getUserDefinedTypes(UdtClass)); }

std::vector<Interface> DataSource::getInterfaces() const { return convertSymbolVector<Interface>(getUserDefinedTypes(UdtInterface)); }

std::vector<Union> DataSource::getUnions() const { return convertSymbolVector<Union>(getUserDefinedTypes(UdtUnion)); }

std::vector<TaggedUnion> DataSource::getTaggedUnions() const { return convertSymbolVector<TaggedUnion>(getUserDefinedTypes(UdtTaggedUnion)); }

Typedef DataSource::getTypedef(const AnyString& name) const
{
    const auto rawSymbol = std::vector<Symbol>{getSymbols(SymTagTypedef, name.c_str())};
    if (rawSymbol.size() < 1)
    {
        throw SymbolNotFoundException("Typedef by name not found!");
    }
    if (rawSymbol.size() > 1)
    {
        throw std::runtime_error("Too many typedefs found matching name!");
    }
    return static_cast<const Typedef&>(rawSymbol.at(0));
}

DiaSymbolEnumerator<Typedef> DataSource::getTypedefs() const { return getSymbols<Typedef>(SymTagTypedef); }

std::vector<Symbol> DataSource::getUserDefinedTypes(enum UdtKind kind) const
{
    std::vector<Symbol> items{};
    auto userDefinedTypes = getUserDefinedTypes();
    for (const auto& type : userDefinedTypes)
    {
        if (type.getUdtKind() != kind)
        {
            continue;
        }
        items.push_back(type);
    }
    return items;
}

const Symbol& DataSource::getGlobalScope() const { return m_session.getGlobalScope(); }

void DataSource::openSession()
{
    const auto result = m_comPtr->openSession(&m_session.makeFromRaw());
    CHECK_DIACOM_EXCEPTION("Failed to open IDiaSession!", result);
}

void DataSource::loadDataFromArbitraryFile(const std::wstring& filePath)
{
    const auto fileExtension = filePath.substr(filePath.find_last_of(L".") + 1);
    if (0 == lstrcmpiW(L"pdb", fileExtension.c_str()))
    {
        loadDataFromPdb(filePath);
        return;
    }
    else
    {
        for (const auto& executableExtension :
             // List taken from
             // https://en.wikipedia.org/wiki/Portable_Executable
             {L"acm", L"ax", L"cpl", L"drv", L"efi", L"mui", L"ocx", L"scr", L"tsp", L"mun", L"exe", L"dll", L"sys"})
        {
            if (0 != lstrcmpiW(executableExtension, fileExtension.c_str()))
            {
                continue;
            }
            loadDataForExe(filePath);
            return;
        }
    }

    // File did not have a known extension, try deducing it using file
    // signature magics

    std::ifstream unknownFile{filePath};
    char magicBuffer[max(sizeof(PDB_FILE_MAGIC), sizeof(PE_FILE_MAGIC))] = {};
    // If the file is too small to read a magic, it is most definitely
    // corrup anyway.
    unknownFile.read(magicBuffer, sizeof(magicBuffer));

    if (0 == memcmp(magicBuffer, PDB_FILE_MAGIC, sizeof(PDB_FILE_MAGIC)))
    {
        loadDataFromPdb(filePath);
        return;
    }
    else if (0 == memcmp(magicBuffer, PE_FILE_MAGIC, sizeof(PE_FILE_MAGIC)))
    {
        loadDataForExe(filePath);
        return;
    }

    throw InvalidFileFormatException("Failed to deduce file format!");
}

std::wstring DataSource::buildSymbolSearchPath(const std::wstring& exePath) const
{
    std::wstring searchPath = L"srv*";
    for (const auto& dir : m_additionalSymstoreDirectories)
    {
        searchPath += dir + L"*";
    }
    searchPath += getSymbolSearchPathForExecutable(exePath, false);
    return searchPath;
}

}  // namespace dia
