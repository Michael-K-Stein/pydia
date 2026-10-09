#define PY_SSIZE_T_CLEAN
#include <Python.h>
// Python.h must be included before anything else
#include <objbase.h>  // For CoInitialize
// Further PyDia headers
#include "pydia.h"
#include "pydia_exceptions.h"
#include "pydia_module_methods.h"
#include "pydia_register_classes.h"
#include "pydia_wrapping_types.h"

typedef struct
{
    BOOLEAN Initialized;
} PyDiaModuleState;

static void pydia_cleanup(PyObject* module);
static PyDiaModuleState* pydia_getModuleState(PyObject* module);

static PyMethodDef PyDiaMethods[] = {
    PyDiaModuleMethodEntry_resolveTypeName,

    {NULL, NULL, 0, NULL} /* Sentinel */
};

static struct PyModuleDef pydiamodule = {
    PyModuleDef_HEAD_INIT,
    "pydia3",                 /* name of module */
    NULL,                     /* module documentation, may be NULL */
    sizeof(PyDiaModuleState), /* size of per-interpreter state of the module, or -1 if the module keeps state in global variables. */
    PyDiaMethods,
    NULL,
    NULL,
    NULL,
    (freefunc)pydia_cleanup,
};

static void pydia_cleanup(PyObject* module)
{
    const auto moduleState = pydia_getModuleState(module);
    if (0 == moduleState->Initialized)
    {
        return;
    }

    CoUninitialize();
}

static PyDiaModuleState* pydia_getModuleState(PyObject* module) { return (PyDiaModuleState*)PyModule_GetState(module); }

PyMODINIT_FUNC PyInit_pydia3(void)
{
    PyObject* module              = NULL;
    PyDiaModuleState* moduleState = NULL;
    HRESULT hresult               = S_OK;

    // Avoid multiple initializations
    static volatile short passed = 0;
    if (TRUE == InterlockedCompareExchange16(&passed, TRUE, FALSE))
    {
        Py_RETURN_NONE;
    }

    // Allow a later import attempt to retry if initialization fails midway
    const auto fail = [&]() -> PyObject*
    {
        InterlockedExchange16(&passed, FALSE);
        Py_XDECREF(module);  // The module's cleanup callback balances CoInitialize if it was called
        return NULL;
    };

    // Create the Python module
    module = PyModule_Create(&pydiamodule);
    if (NULL == module)
    {
        return fail();
    }

    moduleState = pydia_getModuleState(module);
    if (NULL == moduleState)
    {
        PyErr_SetString(PyExc_RuntimeError, "Failed to allocate module state.");
        return fail();
    }

    // Set the initialized state to false
    moduleState->Initialized = FALSE;

    // Initialize COM library
    hresult = CoInitialize(NULL);
    if (FAILED(hresult))
    {
        // Propagate HRESULT error to the Python caller
        PyErr_Format(PyExc_OSError, "Failed to initialize COM library! HRESULT: 0x%08lX", hresult);
        return fail();
    }

    // COM is initialized from here on, so the module cleanup must call CoUninitialize
    moduleState->Initialized = TRUE;

    if (NULL == pydia_initializeErrors(module))
    {
        return fail();
    }

    if (NULL == pydia_createDiaEnumWrappings(module))
    {
        return fail();
    }

    if (NULL == pydia_registerClasses(module))
    {
        return fail();
    }

    return module;
}
