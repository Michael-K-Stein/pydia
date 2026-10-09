#pragma once
#include "ComWrapper.h"
#include "DiaSymbol.h"
#include <dia2.h>

namespace dia
{
class Session : public ComWrapper<IDiaSession>
{
public:
    Session() = default;

    using ComWrapper<IDiaSession>::makeFromRaw;

    bool operator!() const;

    Symbol& getGlobalScope() const;
    DiaSymbolEnumerator<Symbol> getExports() const;
    Symbol getSymbolById(DWORD symbolId) const;
    Symbol findSymbolByRVA(const RVA& rva, enum SymTagEnum symTag) const;

    bool areSymbolsEquivalent(const Symbol& symbolA, const Symbol& symbolB) const;

protected:
    using ComWrapper<IDiaSession>::get;

private:
    // Use `getGlobalScope`
    mutable Symbol m_globalScope{};
};
}  // namespace dia
