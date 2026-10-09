from common import get_ntdll_datasource
from pydia3 import SymTag


def test_symbol_hash_and_equality():
    data_source = get_ntdll_datasource()
    struct_a = data_source.get_struct("_UNICODE_STRING")
    struct_b = data_source.get_struct("_KUSER_SHARED_DATA")

    assert hash(struct_a) != -1
    assert hash(struct_b) != -1
    assert hash(struct_a) == hash(struct_a)

    assert struct_a == struct_a
    assert struct_b == struct_b
    assert struct_a != struct_b

    symbol_set = {struct_a, struct_b}
    assert len(symbol_set) == 2
    assert struct_a in symbol_set
    assert struct_b in symbol_set

    symbol_map = {struct_a: "unicode", struct_b: "kuser"}
    assert symbol_map[struct_a] == "unicode"
    assert symbol_map[struct_b] == "kuser"


def test_symbol_attributes():
    data_source = get_ntdll_datasource()
    struct = data_source.get_struct("_UNICODE_STRING")

    assert struct.get_name() == "_UNICODE_STRING"
    assert struct.get_sym_tag() == SymTag.UDT
    assert isinstance(struct.get_sym_index_id(), int)
    assert struct.get_sym_index_id() >= 0
    assert repr(struct).startswith("<pydia3.")


def test_symtag_enum_values():
    assert SymTag.Null == 0
    assert SymTag.Compiland == 2
    assert SymTag.CompilandDetails == 3
    assert SymTag.CompilandEnv == 4
    assert SymTag.Function == 5
    assert SymTag.Data == 7
    assert SymTag.PublicSymbol == 10
    assert SymTag.UDT == 11
    assert SymTag.Enum == 12
    assert SymTag.FunctionType == 13
    assert SymTag.PointerType == 14
    assert SymTag.ArrayType == 15
    assert SymTag.BaseType == 16
    assert SymTag.Typedef == 17
    assert SymTag.BaseClass == 18
