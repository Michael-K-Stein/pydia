#include "pch.h"
//
#include "SymbolTypes/DiaArray.h"
#include "SymbolTypes/DiaFunction.h"
#include "SymbolTypes/DiaFunctionType.h"
#include "SymbolTypes/DiaPointer.h"
#include "SymbolTypes/DiaSymbolPrint.h"
#include "SymbolTypes/DiaSymbolTypes.h"
#include <ostream>

std::wstring dia::callingConventionToString(const dia::CvCall& callingConvention)
{
    switch (callingConvention)
    {
    case dia::CvCall::NearC:
        return L"__cdecl";
    case dia::CvCall::FarC:
        return L"__far";
    case dia::CvCall::NearPascal:
        return L"__pascal";
    case dia::CvCall::FarPascal:
        return L"__far __pascal";
    case dia::CvCall::NearFast:
        return L"__fastcall";
    case dia::CvCall::FarFast:
        return L"__far __fastcall";
    case dia::CvCall::Skipped:
        return L"Skipped";
    case dia::CvCall::NearStd:
        return L"__stdcall";
    case dia::CvCall::FarStd:
        return L"__far __stdcall";
    case dia::CvCall::NearSys:
        return L"__syscall";
    case dia::CvCall::FarSys:
        return L"__far __syscall";
    case dia::CvCall::ThisCall:
        return L"__thiscall";
    case dia::CvCall::MipsCall:
        return L"Mips";
    case dia::CvCall::Generic:
        return L"Generic";
    case dia::CvCall::AlphaCall:
        return L"Alpha";
    case dia::CvCall::PpcCall:
        return L"PPC";
    case dia::CvCall::ShCall:
        return L"SH";
    case dia::CvCall::ArmCall:
        return L"ARM";
    case dia::CvCall::Am33Call:
        return L"AM33";
    case dia::CvCall::TriCall:
        return L"TriCore";
    case dia::CvCall::Sh5Call:
        return L"SH-5";
    case dia::CvCall::M32rCall:
        return L"M32R";
    case dia::CvCall::ClrCall:
        return L"CLR";
    case dia::CvCall::Inline:
        return L"inline";
    case dia::CvCall::NearVector:
        return L"Vectorcall";
    case dia::CvCall::Swift:
        return L"Swift";
    case dia::CvCall::Reserved:
        return L"Reserved";
    default:
        throw std::runtime_error("Unrecognized calling convention!");
    }
}

std::wostream& operator<<(std::wostream& os, const dia::CvCall& callingConvention)
{
    os << callingConventionToString(callingConvention);
    return os;
}

std::wostream& operator<<(std::wostream& os, const dia::Function& func)
{
    os << func.getName();
    return os;
}

std::wostream& operator<<(std::wostream& os, const dia::FunctionType& funcType)
{
    os << funcType.getCallingConvention();
    return os;
}

std::wostream& operator<<(std::wostream& os, const dia::FunctionArgType& param)
{
    os << param.getType();
    return os;
}

std::wostream& operator<<(std::wostream& os, const dia::Pointer& pointer)
{
    os << pointer.getType() << "*";
    return os;
}

std::wostream& operator<<(std::wostream& os, const dia::Array& arr)
{
    dia::streamSymbolTypeModifiers(os, arr);
    os << arr.getType() << L"[" << arr.getCount() << L"]";
    return os;
}

std::wostream& operator<<(std::wostream& os, const dia::Null& v) { throw std::runtime_error("Cannot stream dia::Null !"); }

std::wostream& operator<<(std::wostream& os, const dia::Data& v) { throw std::runtime_error("Stream of dia::Data has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::Udt& v) { throw std::runtime_error("Stream of dia::Udt has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::Enum& v) { throw std::runtime_error("Stream of dia::Enum has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::BaseType& v)
{
    throw std::runtime_error("Stream of dia::BaseType has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::Annotation& v)
{
    throw std::runtime_error("Stream of dia::Annotation has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::BaseClass& v)
{
    throw std::runtime_error("Stream of dia::BaseClass has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::BaseInterface& v)
{
    throw std::runtime_error("Stream of dia::BaseInterface has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::Callee& v) { throw std::runtime_error("Stream of dia::Callee has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::Caller& v) { throw std::runtime_error("Stream of dia::Caller has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::CallSite& v)
{
    throw std::runtime_error("Stream of dia::CallSite has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::CoffGroup& v)
{
    throw std::runtime_error("Stream of dia::CoffGroup has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::Compiland& v)
{
    throw std::runtime_error("Stream of dia::Compiland has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::CompilandDetails& v)
{
    throw std::runtime_error("Stream of dia::CompilandDetails has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::CompilandEnv& v)
{
    throw std::runtime_error("Stream of dia::CompilandEnv has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::Custom& v) { throw std::runtime_error("Stream of dia::Custom has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::CustomType& v)
{
    throw std::runtime_error("Stream of dia::CustomType has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::Dimension& v)
{
    throw std::runtime_error("Stream of dia::Dimension has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::Exe& v) { throw std::runtime_error("Stream of dia::Exe has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::Export& v) { throw std::runtime_error("Stream of dia::Export has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::Friend& v) { throw std::runtime_error("Stream of dia::Friend has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::HeapAllocationSite& v)
{
    throw std::runtime_error("Stream of dia::HeapAllocationSite has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::HLSLType& v)
{
    throw std::runtime_error("Stream of dia::HLSLType has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::Inlinee& v) { throw std::runtime_error("Stream of dia::Inlinee has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::InlineSite& v)
{
    throw std::runtime_error("Stream of dia::InlineSite has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::Label& v) { throw std::runtime_error("Stream of dia::Label has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::ManagedType& v)
{
    throw std::runtime_error("Stream of dia::ManagedType has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::MatrixType& v)
{
    throw std::runtime_error("Stream of dia::MatrixType has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::PublicSymbol& v)
{
    throw std::runtime_error("Stream of dia::PublicSymbol has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::TaggedUnionCase& v)
{
    throw std::runtime_error("Stream of dia::TaggedUnionCase has not been implemented!");
}

std::wostream& operator<<(std::wostream& os, const dia::Thunk& v) { throw std::runtime_error("Stream of dia::Thunk has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::Typedef& v) { throw std::runtime_error("Stream of dia::Typedef has not been implemented!"); }

std::wostream& operator<<(std::wostream& os, const dia::VectorType& v)
{
    throw std::runtime_error("Stream of dia::VectorType has not been implemented!");
}
