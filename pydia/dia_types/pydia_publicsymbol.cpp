#pragma once
#define PY_SSIZE_T_CLEAN
#include <Python.h>
// Python.h must be included before anything else
#include <objbase.h>

// C pydia imports
#include "pydia_exceptions.h"
#include "pydia_helper_routines.h"
#include "pydia_publicsymbol.h"
#include "pydia_symbol_private.h"
#include "pydia_trivial_init.h"
#include "pydia_wrapping_types.h"

// C++ DiaSymbolMaster imports
#include <SymbolTypes/DiaPublicSymbol.h>

TRIVIAL_INIT_DEINIT(PublicSymbol);

static PyObject* PyDiaPublicSymbol_getUnderlying(PyDiaPublicSymbol* self);
static PyMethodDef PyDiaPublicSymbolMethodEntry_getUnderlying = {"get_underlying", (PyCFunction)PyDiaPublicSymbol_getUnderlying, METH_NOARGS,
                                                                 "Get the symbol this export refers to."};

static PyMethodDef PyDiaPublicSymbol_methods[]                = {
    PyDiaSymbolMethodEntry_getAddressOffset,
    PyDiaSymbolMethodEntry_getAddressSection,
    PyDiaSymbolMethodEntry_isCode,
    PyDiaSymbolMethodEntry_isFunction,
    PyDiaSymbolMethodEntry_getLength,
    PyDiaSymbolMethodEntry_getLexicalParent,
    PyDiaSymbolMethodEntry_getLexicalParentId,
    PyDiaSymbolMethodEntry_getLocationType,
    PyDiaSymbolMethodEntry_isManaged,
    PyDiaSymbolMethodEntry_isMsil,
    PyDiaSymbolMethodEntry_getName,
    PyDiaSymbolMethodEntry_getRelativeVirtualAddress,
    PyDiaSymbolMethodEntry_getSymIndexId,
    PyDiaSymbolMethodEntry_getSymTag,
    PyDiaSymbolMethodEntry_getUndecoratedName,
    PyDiaSymbolMethodEntry_getUndecoratedNameEx,

    PyDiaPublicSymbolMethodEntry_getUnderlying,

    {NULL, NULL, 0, NULL},  // Sentinel
};

PYDIA_SYMBOL_TYPE_DEFINITION(PublicSymbol, PyDiaPublicSymbol_methods);
TRIVIAL_C_TO_PYTHON_SYMBOL_CONVERSION(PublicSymbol);

static PyObject* PyDiaPublicSymbol_getUnderlying(PyDiaPublicSymbol* self)
{
    const auto unsafeCode = [](PyDiaPublicSymbol* self) -> PyObject*
    {
        const auto rva = self->diaPublicSymbol->getRelativeVirtualAddress();
        PYDIA_SAFE_TRY_EXCEPT_NOT_AVAILABLE(
            {
                auto underlying = self->dataSource->diaDataSource->getSession().findSymbolByRVA(rva, SymTagNull);
                return PyDiaSymbol_FromSymbol(std::move(underlying), self->dataSource);
            },
            { Py_RETURN_NONE; }, PYDIA_SAFE_TRIVIAL_ERROR_HANDLER());
    };
    PYDIA_SAFE_TRY({ return unsafeCode(self); });
    Py_UNREACHABLE();
}
