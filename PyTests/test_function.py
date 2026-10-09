import pydia3
from common import AdHocBinaryDataSource, get_ntdll_datasource
from pydia3 import CallingConvention, SymTag


def test_calling_convention_enum():
    assert hasattr(CallingConvention, "NearC")
    assert hasattr(CallingConvention, "NearPascal")
    assert hasattr(CallingConvention, "NearFast")
    assert hasattr(CallingConvention, "NearStd")
    assert hasattr(CallingConvention, "NearSys")
    assert hasattr(CallingConvention, "ThisCall")
    assert hasattr(CallingConvention, "Generic")
    assert hasattr(CallingConvention, "Inline")
    assert int(CallingConvention.NearC) == 0


def test_function_enumeration_and_lookup():
    data_source = get_ntdll_datasource()
    functions = list(data_source.get_functions())
    assert len(functions) > 0
    first_func = functions[0]
    assert isinstance(first_func, pydia3.Function)
    assert len(first_func.get_name()) > 0
    assert first_func.get_sym_tag() == SymTag.Function


def test_adhoc_function_type_and_calling_convention():
    source_code = R"""
int __cdecl test_cdecl_func(int a, char b)
{
    return a + static_cast<int>(b);
}

int main()
{
    return test_cdecl_func(10, 'A');
}
"""
    with AdHocBinaryDataSource(source_code) as data_source:
        functions = [
            f
            for f in data_source.get_symbols(SymTag.Function)
            if f.get_name() == "test_cdecl_func"
        ]
        assert len(functions) == 1
        func = functions[0]
        assert func.get_name() == "test_cdecl_func"

        func_type = func.get_type()
        assert isinstance(func_type, pydia3.FunctionType)
        assert func_type.get_calling_convention() == CallingConvention.NearC

        ret_type = func_type.get_type()
        assert isinstance(ret_type, pydia3.BaseType)
        assert ret_type.get_base_type() == pydia3.BasicType.Int

        params = list(func_type.enumerate_parameters())
        assert len(params) == 2
        for param in params:
            assert isinstance(param, pydia3.FunctionArgType)
            assert param.get_sym_tag() == SymTag.FunctionArgType
            assert param.get_type() is not None
