#pragma once
#define PY_SSIZE_T_CLEAN
#include <Python.h>
// Python.h must be included before anything else
#include <objbase.h>

// C pydia imports
#include "pydia_basetype.h"
#include "pydia_exceptions.h"
#include "pydia_helper_routines.h"
#include "pydia_symbol_private.h"
#include "pydia_trivial_init.h"
#include "pydia_wrapping_types.h"

// C++ DiaSymbolMaster imports
#include <SymbolTypes/DiaBaseType.h>

TRIVIAL_INIT_DEINIT(BaseType);

static PyMethodDef PyDiaBaseType_methods[] = {

    PyDiaSymbolMethodEntry_isConst,
    PyDiaSymbolMethodEntry_isUnaligned,
    PyDiaSymbolMethodEntry_isVolatile,
    PyDiaSymbolMethodEntry_getBaseType,
    PyDiaSymbolMethodEntry_getLength,
    PyDiaSymbolMethodEntry_getLexicalParent,
    PyDiaSymbolMethodEntry_getLexicalParentId,
    PyDiaSymbolMethodEntry_getSymIndexId,
    PyDiaSymbolMethodEntry_getSymTag,
    {NULL, NULL, 0, NULL}  // Sentinel
};

// Define the Python DiaEnum type object

PYDIA_SYMBOL_TYPE_DEFINITION(BaseType, PyDiaBaseType_methods);
TRIVIAL_C_TO_PYTHON_SYMBOL_CONVERSION(BaseType);
