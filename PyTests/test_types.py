import pydia3
from common import AdHocBinaryDataSource
from pydia3 import SymTag


def test_pointer_type():
    source_code = R"""
struct PointerContainer
{
    int* IntPointer;
    int& IntReference;
};

int global_val = 123;
int main()
{
    PointerContainer c = { &global_val, global_val };
    return *c.IntPointer;
}
"""
    with AdHocBinaryDataSource(source_code) as data_source:
        struct = data_source.get_struct("PointerContainer")
        members = list(struct.enumerate_members())
        assert len(members) == 2

        ptr_member = members[0]
        assert ptr_member.get_name() == "IntPointer"
        ptr_type = ptr_member.get_type()
        assert isinstance(ptr_type, pydia3.Pointer)
        assert ptr_type.get_sym_tag() == SymTag.PointerType
        assert not ptr_type.is_reference()
        assert isinstance(ptr_type.get_type(), pydia3.BaseType)

        ref_member = members[1]
        assert ref_member.get_name() == "IntReference"
        ref_type = ref_member.get_type()
        assert isinstance(ref_type, pydia3.Pointer)
        assert ref_type.is_reference()


def test_array_type():
    source_code = R"""
struct ArrayContainer
{
    int IntArray[16];
    char ByteArray[32];
};

int main()
{
    ArrayContainer c = {};
    return c.IntArray[0] + c.ByteArray[0];
}
"""
    with AdHocBinaryDataSource(source_code) as data_source:
        struct = data_source.get_struct("ArrayContainer")
        members = list(struct.enumerate_members())
        assert len(members) == 2

        int_arr_member = members[0]
        assert int_arr_member.get_name() == "IntArray"
        int_arr = int_arr_member.get_type()
        assert isinstance(int_arr, pydia3.Array)
        assert int_arr.get_count() == 16
        assert int_arr.get_length() == 16 * 4
        assert isinstance(int_arr.get_type(), pydia3.BaseType)

        byte_arr_member = members[1]
        assert byte_arr_member.get_name() == "ByteArray"
        byte_arr = byte_arr_member.get_type()
        assert isinstance(byte_arr, pydia3.Array)
        assert byte_arr.get_count() == 32
        assert byte_arr.get_length() == 32


def test_typedef_type():
    source_code = R"""
typedef unsigned long MyCustomDword;

int main()
{
    MyCustomDword custom_var = 42;
    return static_cast<int>(custom_var);
}
"""
    with AdHocBinaryDataSource(source_code) as data_source:
        td = data_source.get_typedef("MyCustomDword")
        assert isinstance(td, pydia3.Typedef)
        assert td.get_name() == "MyCustomDword"
        underlying = td.get_type()
        assert isinstance(underlying, pydia3.BaseType)
        assert underlying.get_base_type() == pydia3.BasicType.ULong
