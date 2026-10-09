import pytest
from common import get_ntdll_datasource
from pydia3 import DataSource, Error


def test_nonexistent_pdb_throws_error():
    with pytest.raises(Error):
        DataSource("C:\\Path\\That\\Does\\Not\\Exist_999999.pdb")


def test_missing_symbols_throw_value_error():
    data_source = get_ntdll_datasource()
    with pytest.raises(ValueError):
        data_source.get_struct("__NonExistentStruct_xyz_999__")

    with pytest.raises(ValueError):
        data_source.get_enum("__NonExistentEnum_xyz_999__")

    with pytest.raises(ValueError):
        data_source.get_function("__NonExistentFunction_xyz_999__")


def test_invalid_argument_types():
    data_source = get_ntdll_datasource()
    with pytest.raises(TypeError):
        data_source.get_struct(12345)

    with pytest.raises(TypeError):
        data_source.get_enum(None)

    with pytest.raises(TypeError):
        data_source.get_function(3.14159)


def test_bytes_argument_accepted():
    data_source = get_ntdll_datasource()
    struct_str = data_source.get_struct("_UNICODE_STRING")
    struct_bytes = data_source.get_struct(b"_UNICODE_STRING")
    assert struct_str.get_name() == struct_bytes.get_name()
