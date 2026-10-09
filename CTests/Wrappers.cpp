#include "pch.h"
// pch.h MUST be before CppUnitTest.h
#include "Common.h"
#include "CppUnitTest.h"

#include "..\DiaLib\DiaHashing.h"
#include <BstrWrapper.h>
#include <ComWrapper.h>
#include <DiaDataSource.h>
#include <DiaSymbol.h>
#include <DiaSymbolEnumerator.h>
#include <DiaUserDefinedTypeWrapper.h>
#include <Exceptions.h>
#include <VariantWrapper.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Wrappers
{
TEST_CLASS(BstrWrapperTests)
{
public:
    TEST_METHOD(DefaultConstructorIsEmpty)
    {
        BstrWrapper bstr{};
        Assert::AreEqual(static_cast<size_t>(0), bstr.length());
        Assert::IsTrue(std::wstring{bstr}.empty());
    }

    TEST_METHOD(ConstructFromBstrAndLength)
    {
        BSTR raw = SysAllocString(L"Hello World");
        BstrWrapper bstr{raw};
        Assert::AreEqual(static_cast<size_t>(11), bstr.length());
        Assert::AreEqual(std::wstring{L"Hello World"}, std::wstring{bstr});
        Assert::AreEqual(L"Hello World", bstr.c_str());
    }

    TEST_METHOD(CopyConstructorAndAssignment)
    {
        BSTR raw = SysAllocString(L"Original");
        BstrWrapper first{raw};
        BstrWrapper copyConstructed{first};
        Assert::AreEqual(std::wstring{L"Original"}, std::wstring{copyConstructed});

        BstrWrapper copyAssigned{};
        copyAssigned = first;
        Assert::AreEqual(std::wstring{L"Original"}, std::wstring{copyAssigned});
    }

    TEST_METHOD(MoveConstructorAndAssignment)
    {
        BSTR raw = SysAllocString(L"MoveMe");
        BstrWrapper first{raw};
        BstrWrapper moved{std::move(first)};
        Assert::AreEqual(std::wstring{L"MoveMe"}, std::wstring{moved});
        Assert::AreEqual(static_cast<size_t>(0), first.length());

        BstrWrapper moveAssigned{};
        moveAssigned = std::move(moved);
        Assert::AreEqual(std::wstring{L"MoveMe"}, std::wstring{moveAssigned});
    }

    TEST_METHOD(ConcatenationOperators)
    {
        BSTR raw = SysAllocString(L"Prefix");
        BstrWrapper bstr{raw};

        std::wstring withLiteral = bstr + L"Suffix";
        Assert::AreEqual(std::wstring{L"PrefixSuffix"}, withLiteral);

        std::wstring s           = L"_More";
        std::wstring withWstring = bstr + s;
        Assert::AreEqual(std::wstring{L"Prefix_More"}, withWstring);
    }

    TEST_METHOD(NullBstrHandling)
    {
        BstrWrapper nullBstr{};
        std::wstring ws = nullBstr;
        Assert::AreEqual(std::wstring{L""}, ws);

        BstrWrapper copyOfNull{nullBstr};
        Assert::AreEqual(static_cast<size_t>(0), copyOfNull.length());
    }
};

TEST_CLASS(SymbolEnumeratorTests)
{
public:
    TEST_METHOD(MultipleIterationProducesIdenticalResults)
    {
        const std::wstring pdbFilePath = std::filesystem::absolute(LOCAL_NTDLL_PDB_FILE_PATH);
        dia::DataSource dataSource{pdbFilePath};
        const auto structSymbol = dataSource.getStruct(L"_UNICODE_STRING");

        auto membersEnum        = structSymbol.enumerateMembers();
        std::vector<std::wstring> firstPass;
        for (const auto& member : membersEnum)
        {
            firstPass.push_back(member.getName().c_str());
        }

        std::vector<std::wstring> secondPass;
        for (const auto& member : membersEnum)
        {
            secondPass.push_back(member.getName().c_str());
        }

        Assert::AreEqual(firstPass.size(), secondPass.size());
        Assert::IsTrue(firstPass.size() > 0);
        for (size_t i = 0; i < firstPass.size(); ++i)
        {
            Assert::AreEqual(firstPass[i], secondPass[i]);
        }
    }
};

TEST_CLASS(GuidFormattingTests)
{
public:
    TEST_METHOD(Canonical844412Format)
    {
        GUID guid{};
        guid.Data1            = 0x12345678;
        guid.Data2            = 0xABCD;
        guid.Data3            = 0xEF01;
        guid.Data4[0]         = 0x23;
        guid.Data4[1]         = 0x45;
        guid.Data4[2]         = 0x67;
        guid.Data4[3]         = 0x89;
        guid.Data4[4]         = 0xAB;
        guid.Data4[5]         = 0xCD;
        guid.Data4[6]         = 0xEF;
        guid.Data4[7]         = 0x01;

        std::string formatted = dia::convertGuidToString(guid);
        Assert::AreEqual(std::string{"12345678-ABCD-EF01-2345-6789ABCDEF01"}, formatted);
    }
};

TEST_CLASS(VariantWrapperTests)
{
public:
    TEST_METHOD(VariantHashingTypes)
    {
        dia::Variant vI1{};
        vI1.vt   = VT_I1;
        vI1.cVal = 42;
        Assert::AreNotEqual(static_cast<size_t>(0), std::hash<dia::Variant>{}(vI1));

        dia::Variant vUI2{};
        vUI2.vt    = VT_UI2;
        vUI2.uiVal = 1337;
        Assert::AreNotEqual(static_cast<size_t>(0), std::hash<dia::Variant>{}(vUI2));

        dia::Variant vI4{};
        vI4.vt   = VT_I4;
        vI4.lVal = -99999;
        Assert::AreNotEqual(static_cast<size_t>(0), std::hash<dia::Variant>{}(vI4));
    }
};
}  // namespace Wrappers
