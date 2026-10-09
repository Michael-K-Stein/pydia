#pragma once
#define PY_SSIZE_T_CLEAN
#include <Python.h>
// Python.h must be included before anything else
#include <objbase.h>
#include <optional>

// C pydia imports
#include "pydia_data.h"
#include "pydia_enum.h"
#include "pydia_exceptions.h"
#include "pydia_generators.h"
#include "pydia_helper_routines.h"
#include "pydia_symbol_private.h"
#include "pydia_trivial_init.h"
#include "pydia_udts.h"
#include "pydia_wrapping_types.h"

// C++ DiaSymbolMaster imports
#include <DiaUserDefinedTypeWrapper.h>


static PyObject* PyDiaUdt_Abstract_enumerateMembers(PyDiaUdt_Abstract* self);
static PyObject* PyDiaUdt_Abstract_getDependencies(PyDiaUdt_Abstract* self);


#define __INIT_DEINIT_UDT(udtName) TRIVIAL_INIT_DEINIT_CUSTOM_FIELD(udtName, UserDefinedType)

XFOR_EACH_UDT_KIND(__INIT_DEINIT_UDT);

static PyMethodDef PyDiaUdt_Abstract_methods[] = {
    PyDiaSymbolMethodEntry_getClassParent,
    PyDiaSymbolMethodEntry_getClassParentId,
    PyDiaSymbolMethodEntry_hasConstructor,
    PyDiaSymbolMethodEntry_isConst,
    PyDiaSymbolMethodEntry_hasAssignmentOperator,
    PyDiaSymbolMethodEntry_hasCastOperator,
    PyDiaSymbolMethodEntry_hasNestedTypes,
    PyDiaSymbolMethodEntry_getLength,
    PyDiaSymbolMethodEntry_getLexicalParent,
    PyDiaSymbolMethodEntry_getLexicalParentId,
    PyDiaSymbolMethodEntry_getName,
    PyDiaSymbolMethodEntry_isNested,
    PyDiaSymbolMethodEntry_hasOverloadedOperator,
    PyDiaSymbolMethodEntry_isPacked,
    PyDiaSymbolMethodEntry_isScoped,
    PyDiaSymbolMethodEntry_getSymIndexId,
    PyDiaSymbolMethodEntry_getSymTag,
    PyDiaSymbolMethodEntry_getUdtKind,
    PyDiaSymbolMethodEntry_isUnaligned,
    PyDiaSymbolMethodEntry_getVirtualTableShape,
    PyDiaSymbolMethodEntry_getVirtualTableShapeId,
    PyDiaSymbolMethodEntry_isVolatile,

    {"enumerate_members", (PyCFunction)PyDiaUdt_Abstract_enumerateMembers, METH_NOARGS, "Iterate over all members (fields) of the UDT."},
    {"get_dependencies", (PyCFunction)PyDiaUdt_Abstract_getDependencies, METH_NOARGS,
     "Return the other user defined types that this UDT depends on. Pointer dependecies (forward declerations) are not included."},
    {NULL, NULL, 0, NULL}  // Sentinel
};

// Define the Python DiaEnum type object

#define __DEFINE_UDT_TYPE(udtName)                                                                                                                   \
    PYDIA_SYMBOL_TYPE_DEFINITION_WITH_ITER(udtName, PyDiaUdt_Abstract_methods, (getiterfunc)PyDiaUdt_Abstract_enumerateMembers);
XFOR_EACH_UDT_KIND(__DEFINE_UDT_TYPE);

static PyObject* PyDiaUdt_Abstract_enumerateMembers(PyDiaUdt_Abstract* self)
{
    _ASSERT(NULL != self);
    _ASSERT(NULL != self->diaUserDefinedType);

    auto safeExecution = [&]() -> PyObject*
    {
        auto rawEnumerator = self->diaUserDefinedType->enumerateMembers();
        PyDiaDataGenerator* generator =
            (PyDiaDataGenerator*)PyDiaSymbolGenerator_create<PyDiaUdt_Abstract, dia::Data>(self, std::move(rawEnumerator));
        if (!generator)
        {
            PyErr_SetString(PyExc_RuntimeError, "Failed to create generator.");
            return NULL;  // Failed to allocate generator
        }

        return (PyObject*)generator;
    };

    PYDIA_SAFE_TRY({ return safeExecution(); });
    Py_UNREACHABLE();
}

static PyObject* PyDiaUdt_Abstract_getDependencies(PyDiaUdt_Abstract* self)
{
    _ASSERT(NULL != self);
    _ASSERT(NULL != self->diaUserDefinedType);

    // Lambda to handle execution
    auto safeExecution = [&]() -> PyObject*
    {
        // If param is provided, call queryDependencies with the parameter
        auto rawEnumerator = self->diaUserDefinedType->queryDependencies();
        return PyObject_FromSymbolSet(rawEnumerator, self->dataSource);
    };

#if 0
    // Parse arguments: 0 or 1 argument
    if (PyTuple_Size(args) == 0)
    {
        // No arguments passed, call with no parameters
        PYDIA_SAFE_TRY({ return safeExecution(); });
    }
    else if (PyTuple_Size(args) == 1)
    {
        // 1 argument passed, check if it's an integer
        PyObject* arg = PyTuple_GetItem(args, 0);
        if (!PyLong_Check(arg))
        {
            return PyErr_Format(PyExc_TypeError, "Expected an integer argument, got %s", Py_TYPE(arg)->tp_name);
        }
        int param = PyLong_AsLong(arg);
        PYDIA_SAFE_TRY({ return safeExecution(param); });
    }
    else
    {
        // More than 1 argument is not allowed
        return PyErr_Format(PyExc_TypeError, "Expected 0 or 1 arguments, got %d", PyTuple_Size(args));
    }
#endif

    PYDIA_SAFE_TRY({ return safeExecution(); });
    Py_UNREACHABLE();
}

PyObject* registerUdtPyClasses(PyObject* module)
{
    if (!module)
    {
        return NULL;
    }
    XFOR_EACH_UDT_KIND(__REGISTER_PYDIA_CLASS);
    return module;
}

// Wraps the symbol in a new Python object of the given UDT type, which owns the returned reference
template <typename DiaUdtT>
static PyObject* createUdtObject(PyTypeObject* pyType, dia::Symbol& symbol, PyDiaDataSource* dataSource)
{
    auto pyUdt = PyObject_New(PyDiaUdt_Abstract, pyType);
    if (!pyUdt)
    {
        PyErr_Format(PyExc_MemoryError, "Failed to create %s object.", pyType->tp_name);
        return NULL;
    }

    // PyObject_New does not initialize the members, and the deallocator inspects them
    pyUdt->diaUserDefinedType = nullptr;
    pyUdt->dataSource         = nullptr;

    pyUdt->diaUserDefinedType = new (std::nothrow) DiaUdtT(static_cast<DiaUdtT&>(symbol));
    if (!pyUdt->diaUserDefinedType)
    {
        Py_DECREF(pyUdt);
        PyErr_Format(PyExc_MemoryError, "Failed to create %s's internal state.", pyType->tp_name);
        return NULL;
    }

    Py_INCREF(dataSource);
    pyUdt->dataSource = dataSource;

    return reinterpret_cast<PyObject*>(pyUdt);
}

PyObject* PyDiaUdt_FromSymbol(dia::Symbol&& symbol, PyDiaDataSource* dataSource)
{
    // Reading the UDT kind queries the underlying COM object, which may throw
    enum UdtKind udtKind = UdtStruct;
    PYDIA_SAFE_TRY({ udtKind = symbol.getUdtKind(); });

    switch (udtKind)
    {
    case UdtStruct:
        return createUdtObject<dia::Struct>(&PyDiaStruct_Type, symbol, dataSource);
    case UdtClass:
        return createUdtObject<dia::Class>(&PyDiaClass_Type, symbol, dataSource);
    case UdtUnion:
        return createUdtObject<dia::Union>(&PyDiaUnion_Type, symbol, dataSource);
    case UdtInterface:
        return createUdtObject<dia::Interface>(&PyDiaInterface_Type, symbol, dataSource);
    case UdtTaggedUnion:
        return createUdtObject<dia::TaggedUnion>(&PyDiaTaggedUnion_Type, symbol, dataSource);
    default:
        return PyErr_Format(PyExc_ValueError, "Unrecognized UdtKind \"%d\".", static_cast<int>(udtKind));
    }
}

PyObject* PyDiaUserDefinedType_FromUserDefinedTypeSymbol(dia::UserDefinedType&& symbol, PyDiaDataSource* dataSource)
{
    return PyDiaUdt_FromSymbol(std::move(symbol), dataSource);
}
