import pydia3
from common import get_ntdll_datasource
from pydia3 import SymTag


def test_basic_type_enum():
    data_source = get_ntdll_datasource()
    base_types = data_source.get_symbols(SymTag.BaseType)
    assert base_types
    for export in base_types:
        assert isinstance(export, pydia3.BaseType)
        assert isinstance(export.get_base_type(), pydia3.BasicType)
