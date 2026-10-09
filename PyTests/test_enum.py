import os
import pytest
from common import AdHocBinaryDataSource, get_ntdll_datasource, get_test_resources_dir
from pydia import DataSource


def test_find_enum():
    data_source = get_ntdll_datasource()
    pool_type_enum = data_source.get_enum("_POOL_TYPE")
    assert pool_type_enum
    assert pool_type_enum.get_name() == "_POOL_TYPE"


def test_list_enum_value_names():
    data_source = get_ntdll_datasource()
    pool_type_enum = data_source.get_enum("_POOL_TYPE")
    EXPECTED_VALUE_NAMES = [
        "NonPagedPool",
        "NonPagedPoolExecute",
        "PagedPool",
        "NonPagedPoolMustSucceed",
        "DontUseThisType",
        "NonPagedPoolCacheAligned",
        "PagedPoolCacheAligned",
        "NonPagedPoolCacheAlignedMustS",
        "MaxPoolType",
        "NonPagedPoolBase",
        "NonPagedPoolBaseMustSucceed",
        "NonPagedPoolBaseCacheAligned",
        "NonPagedPoolBaseCacheAlignedMustS",
        "NonPagedPoolSession",
        "PagedPoolSession",
        "NonPagedPoolMustSucceedSession",
        "DontUseThisTypeSession",
        "NonPagedPoolCacheAlignedSession",
        "PagedPoolCacheAlignedSession",
        "NonPagedPoolCacheAlignedMustSSession",
        "NonPagedPoolNx",
        "NonPagedPoolNxCacheAligned",
        "NonPagedPoolSessionNx",
    ]

    assert EXPECTED_VALUE_NAMES == list(
        value.get_name() for value in pool_type_enum.get_values()
    )


def test_list_enum_value_values():
    data_source = get_ntdll_datasource()
    pool_type_enum = data_source.get_enum("_POOL_TYPE")
    EXPECTED_VALUE_VALUES = [
        0x0,
        0x0,
        0x1,
        0x2,
        0x3,
        0x4,
        0x5,
        0x6,
        0x7,
        0x0,
        0x2,
        0x4,
        0x6,
        0x20,
        0x21,
        0x22,
        0x23,
        0x24,
        0x25,
        0x26,
        0x200,
        0x204,
        0x220,
    ]

    assert EXPECTED_VALUE_VALUES == list(
        value.get_value() for value in pool_type_enum.get_values()
    )


def test_custom_size_modifier():
    with AdHocBinaryDataSource(
        R"""
#include <cstdint>
enum MyCool8BitEnum : std::uint8_t
{
    MyCool8BitEnum_Val0,
    MyCool8BitEnum_Val1,
    MyCool8BitEnum_Val2,
    MyCool8BitEnum_Val3,
};
enum MyCool16BitEnum : std::uint16_t
{
    MyCool16BitEnum_Val0,
    MyCool16BitEnum_Val1,
    MyCool16BitEnum_Val2,
    MyCool16BitEnum_Val3,
};
enum MyCool32BitEnum : std::uint32_t
{
    MyCool32BitEnum_Val0,
    MyCool32BitEnum_Val1,
    MyCool32BitEnum_Val2,
    MyCool32BitEnum_Val3,
};
enum MyCool64BitEnum : std::uint64_t
{
    MyCool64BitEnum_Val0,
    MyCool64BitEnum_Val1,
    MyCool64BitEnum_Val2,
    MyCool64BitEnum_Val3,
};
// Must use the values to avoid the enums being optimized out
int main() { return (MyCool8BitEnum_Val1 == MyCool64BitEnum_Val3) ? MyCool32BitEnum_Val2 : MyCool16BitEnum_Val0; }
    """
    ) as data_source:
        for bit_size in (8, 16, 32, 64):
            enum_name = f"MyCool{str(bit_size)}BitEnum"
            enum = data_source.get_enum(enum_name)
            assert enum.get_length() * 8 == bit_size
