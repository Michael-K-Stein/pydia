#include "pydia_wrapping_types.h"
#include <DiaSymbolFuncs.h>
#include <DiaTypeResolution.h>
#include <cvconst.h>
#include <pydia_exceptions.h>

PyObject* g_diaSymTagEnumWrappings            = NULL;
PyObject* g_diaBasicTypeEnumWrappings         = NULL;
PyObject* g_diaLocationTypeEnumWrappings      = NULL;
PyObject* g_diaStorageModifierEnumWrappings   = NULL;
PyObject* g_diaDataKindEnumWrappings          = NULL;
PyObject* g_diaUdtKindEnumWrappings           = NULL;
PyObject* g_diaAccessModifierEnumWrappings    = NULL;
PyObject* g_diaCallingConventionEnumWrappings = NULL;


using EnumWrapperGetterFunction               = PyObject* (*)();

template <typename EnumT>
static PyObject* PyDiaEnumObject_FromEnumValue(EnumWrapperGetterFunction getterFunction, const EnumT& enumValue)
{
    auto safeExecution = [&]() -> PyObject*
    {
        // PyObject_CallFunction already returns a new reference (or NULL with an exception set)
        return PyObject_CallFunction(getterFunction(), "(i)", static_cast<int>(enumValue));
    };

    PYDIA_SAFE_TRY({ return safeExecution(); });
    Py_UNREACHABLE();
}

static PyObject* getDiaSymTagEnumWrappings() { return g_diaSymTagEnumWrappings; }

PyObject* PyDiaSymTag_FromSymTag(enum SymTagEnum symTag) { return PyDiaEnumObject_FromEnumValue(getDiaSymTagEnumWrappings, symTag); }

static PyObject* getDiaBasicTypeEnumWrappings() { return g_diaBasicTypeEnumWrappings; }

PyObject* PyDiaBasicType_FromBasicType(enum BasicType basicType) { return PyDiaEnumObject_FromEnumValue(getDiaBasicTypeEnumWrappings, basicType); }

static PyObject* getDiaLocationTypeEnumWrappings() { return g_diaLocationTypeEnumWrappings; }

PyObject* PyDiaLocationType_FromLocationType(enum LocationType v) { return PyDiaEnumObject_FromEnumValue(getDiaLocationTypeEnumWrappings, v); }

static PyObject* getDiaStorageModifierEnumWrappings() { return g_diaStorageModifierEnumWrappings; }

PyObject* PyDiaStorageModifier_FromStorageModifier(dia::StorageModifier v)
{
    return PyDiaEnumObject_FromEnumValue(getDiaStorageModifierEnumWrappings, v);
}

static PyObject* getDiaDataKindEnumWrappings() { return g_diaDataKindEnumWrappings; }

PyObject* PyDiaDataKind_FromDataKind(enum DataKind v) { return PyDiaEnumObject_FromEnumValue(getDiaDataKindEnumWrappings, v); }

static PyObject* getDiaUdtKindEnumWrappings() { return g_diaUdtKindEnumWrappings; }

PyObject* PyDiaUdtKind_FromUdtKind(enum UdtKind v) { return PyDiaEnumObject_FromEnumValue(getDiaUdtKindEnumWrappings, v); }

static PyObject* getDiaAccessModifierEnumWrappings() { return g_diaAccessModifierEnumWrappings; }

PyObject* PyDiaAccessModifier_FromAccessModifier(dia::AccessModifier v)
{
    return PyDiaEnumObject_FromEnumValue(getDiaAccessModifierEnumWrappings, v);
}

static PyObject* getDiaCallingConventionEnumWrappings() { return g_diaCallingConventionEnumWrappings; }

PyObject* PyDiaCallingConvention_FromCallingConvention(dia::CvCall callingConvention)
{
    return PyDiaEnumObject_FromEnumValue(getDiaCallingConventionEnumWrappings, callingConvention);
}

static PyObject* createEnumObject(PyObject* module, const char* name, std::initializer_list<std::pair<const char*, int>> items)
{
    PyObject* pyEnumDict = PyDict_New();
    if (!pyEnumDict)
    {
        return NULL;
    }

    for (auto& item : items)
    {
        PyObject* pyValue = PyLong_FromLong(item.second);
        if (!pyValue)
        {
            Py_DECREF(pyEnumDict);
            return NULL;
        }

        // PyDict_SetItemString does not steal the reference to the value
        const int setResult = PyDict_SetItemString(pyEnumDict, item.first, pyValue);
        Py_DECREF(pyValue);
        if (0 > setResult)
        {
            Py_DECREF(pyEnumDict);
            return NULL;
        }
    }

    PyObject* pyEnumModule = PyImport_ImportModule("enum");
    if (pyEnumModule == NULL)
    {
        Py_DECREF(pyEnumDict);
        return NULL;
    }

    PyObject* pyEnumType = PyObject_CallMethod(pyEnumModule, "IntEnum", "sO", name, pyEnumDict);

    Py_DECREF(pyEnumDict);
    Py_DECREF(pyEnumModule);
    if (!pyEnumType)
    {
        return NULL;
    }

    // PyModule_AddObject steals the reference only on success
    Py_INCREF(pyEnumType);
    if (0 > PyModule_AddObject(module, name, pyEnumType))
    {
        Py_DECREF(pyEnumType);  // The reference which was not stolen
        Py_DECREF(pyEnumType);  // The reference we own
        return NULL;
    }
    // The caller keeps a reference of its own in the global enum wrapper pointer
    return pyEnumType;
}

PyObject* pydia_createDiaEnumWrappings(PyObject* module)
{
    if (NULL == (g_diaSymTagEnumWrappings = createEnumObject(module, "SymTag",
                                                             {{"Null", SymTagNull},
                                                              {"Exe", SymTagExe},
                                                              {"Compiland", SymTagCompiland},
                                                              {"CompilandDetails", SymTagCompilandDetails},
                                                              {"CompilandEnv", SymTagCompilandEnv},
                                                              {"Function", SymTagFunction},
                                                              {"Block", SymTagBlock},
                                                              {"Data", SymTagData},
                                                              {"Annotation", SymTagAnnotation},
                                                              {"Label", SymTagLabel},
                                                              {"PublicSymbol", SymTagPublicSymbol},
                                                              {"UDT", SymTagUDT},
                                                              {"Enum", SymTagEnum},
                                                              {"FunctionType", SymTagFunctionType},
                                                              {"PointerType", SymTagPointerType},
                                                              {"ArrayType", SymTagArrayType},
                                                              {"BaseType", SymTagBaseType},
                                                              {"Typedef", SymTagTypedef},
                                                              {"BaseClass", SymTagBaseClass},
                                                              {"Friend", SymTagFriend},
                                                              {"FunctionArgType", SymTagFunctionArgType},
                                                              {"FuncDebugStart", SymTagFuncDebugStart},
                                                              {"FuncDebugEnd", SymTagFuncDebugEnd},
                                                              {"UsingNamespace", SymTagUsingNamespace},
                                                              {"VTableShape", SymTagVTableShape},
                                                              {"VTable", SymTagVTable},
                                                              {"Custom", SymTagCustom},
                                                              {"Thunk", SymTagThunk},
                                                              {"CustomType", SymTagCustomType},
                                                              {"ManagedType", SymTagManagedType},
                                                              {"Dimension", SymTagDimension},
                                                              {"CallSite", SymTagCallSite},
                                                              {"InlineSite", SymTagInlineSite},
                                                              {"BaseInterface", SymTagBaseInterface},
                                                              {"VectorType", SymTagVectorType},
                                                              {"MatrixType", SymTagMatrixType},
                                                              {"HLSLType", SymTagHLSLType},
                                                              {"Caller", SymTagCaller},
                                                              {"Callee", SymTagCallee},
                                                              {"Export", SymTagExport},
                                                              {"HeapAllocationSite", SymTagHeapAllocationSite},
                                                              {"CoffGroup", SymTagCoffGroup},
                                                              {"Inlinee", SymTagInlinee},
                                                              {"TaggedUnionCase", SymTagTaggedUnionCase},
                                                              {"Max", SymTagMax}})))
    {
        return NULL;
    }

    if (NULL ==
        (g_diaBasicTypeEnumWrappings = createEnumObject(
             module, "BasicType",
             {{"NoType", btNoType}, {"Void", btVoid},       {"Char", btChar},       {"WChar", btWChar}, {"Int", btInt},     {"UInt", btUInt},
              {"Float", btFloat},   {"BCD", btBCD},         {"Bool", btBool},       {"Long", btLong},   {"ULong", btULong}, {"Currency", btCurrency},
              {"Date", btDate},     {"Variant", btVariant}, {"Complex", btComplex}, {"Bit", btBit},     {"BSTR", btBSTR},   {"Hresult", btHresult},
              {"Char16", btChar16}, {"Char32", btChar32},   {"Char8", btChar8}})))
    {
        return NULL;
    }

    if (NULL == (g_diaLocationTypeEnumWrappings = createEnumObject(module, "LocationType",
                                                                   {{"Null", LocIsNull},
                                                                    {"Static", LocIsStatic},
                                                                    {"TLS", LocIsTLS},
                                                                    {"RegRel", LocIsRegRel},
                                                                    {"ThisRel", LocIsThisRel},
                                                                    {"Enregistered", LocIsEnregistered},
                                                                    {"BitField", LocIsBitField},
                                                                    {"Slot", LocIsSlot},
                                                                    {"IlRel", LocIsIlRel},
                                                                    {"MetaData", LocInMetaData},
                                                                    {"Constant", LocIsConstant},
                                                                    {"RegRelAliasIndir", LocIsRegRelAliasIndir},
                                                                    {"Max", LocTypeMax}})))
    {
        return NULL;
    }

    if (NULL == (g_diaStorageModifierEnumWrappings =
                     createEnumObject(module, "StorageModifier",
                                      {{"Invalid", static_cast<int>(dia::StorageModifier::Invalid)},
                                       {"Const", static_cast<int>(dia::StorageModifier::Const)},
                                       {"Volatile", static_cast<int>(dia::StorageModifier::Volatile)},
                                       {"Unaligned", static_cast<int>(dia::StorageModifier::Unaligned)},
                                       {"HlslUniform", static_cast<int>(dia::StorageModifier::HlslUniform)},
                                       {"HlslLine", static_cast<int>(dia::StorageModifier::HlslLine)},
                                       {"HlslTriangle", static_cast<int>(dia::StorageModifier::HlslTriangle)},
                                       {"HlslLineAdj", static_cast<int>(dia::StorageModifier::HlslLineAdj)},
                                       {"HlslTriangleAdj", static_cast<int>(dia::StorageModifier::HlslTriangleAdj)},
                                       {"HlslLinear", static_cast<int>(dia::StorageModifier::HlslLinear)},
                                       {"HlslCentroid", static_cast<int>(dia::StorageModifier::HlslCentroid)},
                                       {"HlslConstInterp", static_cast<int>(dia::StorageModifier::HlslConstInterp)},
                                       {"HlslNoPerspective", static_cast<int>(dia::StorageModifier::HlslNoPerspective)},
                                       {"HlslSample", static_cast<int>(dia::StorageModifier::HlslSample)},
                                       {"HlslCenter", static_cast<int>(dia::StorageModifier::HlslCenter)},
                                       {"HlslSnorm", static_cast<int>(dia::StorageModifier::HlslSnorm)},
                                       {"HlslUnorm", static_cast<int>(dia::StorageModifier::HlslUnorm)},
                                       {"HlslPrecise", static_cast<int>(dia::StorageModifier::HlslPrecise)},
                                       {"HlslUavGloballyCoherent", static_cast<int>(dia::StorageModifier::HlslUavGloballyCoherent)}})))
    {
        return NULL;
    }


    if (NULL == (g_diaDataKindEnumWrappings = createEnumObject(module, "DataKind",
                                                               {{"Unknown", DataIsUnknown},
                                                                {"Local", DataIsLocal},
                                                                {"StaticLocal", DataIsStaticLocal},
                                                                {"Param", DataIsParam},
                                                                {"ObjectPtr", DataIsObjectPtr},
                                                                {"FileStatic", DataIsFileStatic},
                                                                {"Global", DataIsGlobal},
                                                                {"Member", DataIsMember},
                                                                {"StaticMember", DataIsStaticMember},
                                                                {"Constant", DataIsConstant}})))
    {
        return NULL;
    }

    if (NULL ==
        (g_diaUdtKindEnumWrappings = createEnumObject(
             module, "UdtKind",
             {{"Struct", UdtStruct}, {"Class", UdtClass}, {"Union", UdtUnion}, {"Interface", UdtInterface}, {"TaggedUnion", UdtTaggedUnion}})))
    {
        return NULL;
    }

    if (NULL == (g_diaAccessModifierEnumWrappings = createEnumObject(module, "AccessModifier",
                                                                     {{"Private", static_cast<int>(dia::AccessModifier::Private)},
                                                                      {"Public", static_cast<int>(dia::AccessModifier::Public)},
                                                                      {"Protected", static_cast<int>(dia::AccessModifier::Protected)}})))
    {
        return NULL;
    }

    // Without this enum, get_calling_convention() would call a NULL wrapper
    if (NULL == (g_diaCallingConventionEnumWrappings = createEnumObject(
                     module, "CallingConvention",
                     {{"NearC", static_cast<int>(dia::CvCall::NearC)},           {"FarC", static_cast<int>(dia::CvCall::FarC)},
                      {"NearPascal", static_cast<int>(dia::CvCall::NearPascal)}, {"FarPascal", static_cast<int>(dia::CvCall::FarPascal)},
                      {"NearFast", static_cast<int>(dia::CvCall::NearFast)},     {"FarFast", static_cast<int>(dia::CvCall::FarFast)},
                      {"Skipped", static_cast<int>(dia::CvCall::Skipped)},       {"NearStd", static_cast<int>(dia::CvCall::NearStd)},
                      {"FarStd", static_cast<int>(dia::CvCall::FarStd)},         {"NearSys", static_cast<int>(dia::CvCall::NearSys)},
                      {"FarSys", static_cast<int>(dia::CvCall::FarSys)},         {"ThisCall", static_cast<int>(dia::CvCall::ThisCall)},
                      {"MipsCall", static_cast<int>(dia::CvCall::MipsCall)},     {"Generic", static_cast<int>(dia::CvCall::Generic)},
                      {"AlphaCall", static_cast<int>(dia::CvCall::AlphaCall)},   {"PpcCall", static_cast<int>(dia::CvCall::PpcCall)},
                      {"ShCall", static_cast<int>(dia::CvCall::ShCall)},         {"ArmCall", static_cast<int>(dia::CvCall::ArmCall)},
                      {"Am33Call", static_cast<int>(dia::CvCall::Am33Call)},     {"TriCall", static_cast<int>(dia::CvCall::TriCall)},
                      {"Sh5Call", static_cast<int>(dia::CvCall::Sh5Call)},       {"M32rCall", static_cast<int>(dia::CvCall::M32rCall)},
                      {"ClrCall", static_cast<int>(dia::CvCall::ClrCall)},       {"Inline", static_cast<int>(dia::CvCall::Inline)},
                      {"NearVector", static_cast<int>(dia::CvCall::NearVector)}, {"Swift", static_cast<int>(dia::CvCall::Swift)},
                      {"Reserved", static_cast<int>(dia::CvCall::Reserved)}})))
    {
        return NULL;
    }

    return module;
}
