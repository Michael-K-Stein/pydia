#include "pch.h"
// pch.h MUST be before CppUnitTest.h
#include "Common.h"
#include "CppUnitTest.h"

#include "DiaDataSource.h"
#include "Exceptions.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#define STRUCTURED_FILE_TREE_NTDLL_DIR CTESTS_RESOURCES_DIR L"_NTDLL\\"
#define STRUCTURED_FILE_TREE_NTDLL_DLL_FILE_PATH STRUCTURED_FILE_TREE_NTDLL_DIR L"ntdll.dll"
#define STRUCTURED_FILE_TREE_NTDLL_PDB_FILE_PATH STRUCTURED_FILE_TREE_NTDLL_DIR L"ntdll.pdb\\FB228B943D718A0426415A200E27CB761\\ntdll.pdb"

namespace DataSource
{
TEST_CLASS(CtorAndLoad)
{
public:
    TEST_METHOD(PdbLoadedIsPdbLoaded)
    {
        const std::wstring pdbFilePath = std::filesystem::absolute(LOCAL_NTDLL_PDB_FILE_PATH);
        dia::DataSource dataSource{pdbFilePath};
        Assert::AreEqual(dataSource.getLoadedPdbFile(), pdbFilePath);
    }

    TEST_METHOD(PdbLoadedIsPdbLoaded_RelPath)
    {
        const std::wstring pdbFilePath = LOCAL_NTDLL_PDB_FILE_PATH;
        dia::DataSource dataSource{pdbFilePath};
        Assert::AreEqual(dataSource.getLoadedPdbFile(), std::filesystem::absolute(pdbFilePath).wstring());
    }

    TEST_METHOD(ExeLoadFindsNeighborPdb)
    {
        const std::wstring dllFilePath = LOCAL_NTDLL_DLL_FILE_PATH;
        dia::DataSource dataSource{dllFilePath};
        Assert::AreEqual(dataSource.getLoadedPdbFile(), std::filesystem::absolute(LOCAL_NTDLL_PDB_FILE_PATH).wstring());
    }

    TEST_METHOD(SessionOpenedIsTrueAfterLoad)
    {
        const std::wstring pdbFilePath = std::filesystem::absolute(LOCAL_NTDLL_PDB_FILE_PATH);
        dia::DataSource dataSource{pdbFilePath};
        Assert::IsTrue(dataSource.sessionOpened());
    }

    TEST_METHOD(TwoArgConstructorWithSymstore)
    {
        const std::wstring pdbFilePath = std::filesystem::absolute(LOCAL_NTDLL_PDB_FILE_PATH);
        dia::DataSource dataSource{pdbFilePath, L"C:\\Symbols"};
        Assert::IsTrue(dataSource.sessionOpened());
        Assert::AreEqual(dataSource.getLoadedPdbFile(), pdbFilePath);
    }

    TEST_METHOD(DoubleLoadThrowsInvalidUsage)
    {
        const std::wstring pdbFilePath = std::filesystem::absolute(LOCAL_NTDLL_PDB_FILE_PATH);
        dia::DataSource dataSource{pdbFilePath};
        Assert::ExpectException<dia::InvalidUsageException>([&] { dataSource.loadDataFromPdb(pdbFilePath); });
    }

#if 0
    // Not yet properly implemented
    TEST_METHOD(ExeLoadFindsPdbInStructuredSymstore)
    {
        const std::wstring dllFilePath = STRUCTURED_FILE_TREE_NTDLL_DLL_FILE_PATH;
        dia::DataSource dataSource{};
        dataSource.addSymtoreDirectory(STRUCTURED_FILE_TREE_NTDLL_DIR);
        dataSource.loadDataForExe(dllFilePath);
        Assert::AreEqual(dataSource.getLoadedPdbFile(), std::filesystem::absolute(STRUCTURED_FILE_TREE_NTDLL_PDB_FILE_PATH).wstring());
    }
#endif
};

TEST_CLASS(Queries)
{
public:
    TEST_METHOD(GetFunctionsEnumerator)
    {
        const std::wstring pdbFilePath = std::filesystem::absolute(LOCAL_NTDLL_PDB_FILE_PATH);
        dia::DataSource dataSource{pdbFilePath};
        auto functions = dataSource.getFunctions();
        size_t count   = 0;
        for (const auto& func : functions)
        {
            Assert::IsTrue(func.getName().length() > 0);
            ++count;
            if (count >= 10)
            {
                break;
            }
        }
        Assert::IsTrue(count >= 10);
    }

    TEST_METHOD(GetNonexistentFunctionThrows)
    {
        const std::wstring pdbFilePath = std::filesystem::absolute(LOCAL_NTDLL_PDB_FILE_PATH);
        dia::DataSource dataSource{pdbFilePath};
        Assert::ExpectException<dia::SymbolNotFoundException>([&] { dataSource.getFunction(L"__NonExistentFunction_XYZ_987654__"); });
    }

    TEST_METHOD(GetUserDefinedTypesEnumerator)
    {
        const std::wstring pdbFilePath = std::filesystem::absolute(LOCAL_NTDLL_PDB_FILE_PATH);
        dia::DataSource dataSource{pdbFilePath};
        auto udts    = dataSource.getUserDefinedTypes();
        size_t count = 0;
        for (const auto& udt : udts)
        {
            Assert::IsTrue(udt.getName().length() > 0);
            ++count;
            if (count >= 10)
            {
                break;
            }
        }
        Assert::IsTrue(count >= 10);
    }
};
}  // namespace DataSource
