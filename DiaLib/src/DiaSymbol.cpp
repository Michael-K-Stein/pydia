#include "pch.h"
//
#include "BstrWrapper.h"
#include "DiaPrint.h"
#include "DiaSymbol.h"
#include "DiaTypeResolution.h"
#include "DiaUserDefinedTypeWrapper.h"
#include "Exceptions.h"
#include "SymbolTypes/DiaArray.h"
#include "SymbolTypes/DiaBaseType.h"
#include "SymbolTypes/DiaData.h"
#include "SymbolTypes/DiaExe.h"
#include "SymbolTypes/DiaFunction.h"
#include "SymbolTypes/DiaFunctionArgType.h"
#include "SymbolTypes/DiaFunctionType.h"
#include "SymbolTypes/DiaNull.h"
#include "SymbolTypes/DiaPointer.h"
#include "SymbolTypes/DiaUdt.h"

namespace dia
{
Symbol::Symbol(const Symbol& other)
    : ComWrapper{other}
{
}

Symbol Symbol::operator=(const Symbol& other)
{
    ComWrapper::operator=(other);
    return *this;
}

Symbol::Symbol(Symbol&& other) noexcept
    : ComWrapper{std::move(other)}
{
}

Symbol Symbol::operator=(Symbol&& other) noexcept
{
    ComWrapper::operator=(std::move(other));
    return *this;
}

bool Symbol::isVolatile() const { return getVolatileType(); }

bool Symbol::isArray() const { return SymTagArrayType == getSymTag(); }

bool Symbol::isPointer() const { return SymTagPointerType == getSymTag(); }

bool Symbol::isUserDefinedType() const { return SymTagUDT == getSymTag() || SymTagEnum == getSymTag() || SymTagTypedef == getSymTag(); }

size_t Symbol::calcHash() const
{
    _ASSERT(nullptr != this);
    if (!!!*this)
    {
        // Uninitialized instance :(
        return 0;
    }
#define __RETURN_HASH_SYMBOL(x) return std::hash<T>()(x);
    XBY_SYMBOL_TYPE_T((*this), T, __RETURN_HASH_SYMBOL);
}

bool Symbol::operator==(const Symbol& other) const { return getUid() == other.getUid(); }

bool Symbol::operator!=(const Symbol& other) const { return !(*this == other); }

bool Symbol::operator<(const Symbol& other) const { return getUid() < other.getUid(); }

bool Symbol::operator<=(const Symbol& other) const { return !(*this > other); }

bool Symbol::operator>(const Symbol& other) const { return getUid() > other.getUid(); }

bool Symbol::operator>=(const Symbol& other) const { return !(*this < other); }

// Explicit specialization for Symbol
template <>
std::wostream& streamSymbolTypeModifiers(std::wostream& os, const Symbol& v)
{
    if (v.getVolatileType())
    {
        os << L"volatile ";
    }
    if (v.getConstType())
    {
        os << L"const ";
    }
    return os;
}

template <>
std::wostream& streamSymbolTypeModifiers(std::wostream& os, const Array& v)
{
    return streamSymbolTypeModifiers<Symbol>(os, *reinterpret_cast<const Symbol*>(reinterpret_cast<const void*>(&v)));
}

}  // namespace dia

std::wostream& operator<<(std::wostream& os, const dia::Symbol& v)
{
#define __OS_STREAM_SYMBOL(x) os << x;
    XBY_SYMBOL_TYPE_T((v), T, __OS_STREAM_SYMBOL);
    return os;
}
