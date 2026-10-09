from common import AdHocBinaryDataSource, get_ntdll_datasource
from pydia3 import AccessModifier, DataKind, LocationType


def test_struct_dependencies():
    data_source = get_ntdll_datasource()
    struct = data_source.get_struct("_LDR_DDAG_NODE")
    deps = list(struct.get_dependencies())
    assert len(deps) > 0
    dep_names = {d.get_name() for d in deps}
    assert "_LIST_ENTRY" in dep_names
    assert "_LDR_DDAG_STATE" in dep_names


def test_member_attributes_and_multiple_iterations():
    data_source = get_ntdll_datasource()
    struct = data_source.get_struct("_UNICODE_STRING")

    # First pass
    members_first = list(struct.enumerate_members())
    assert len(members_first) == 3

    # Second pass
    members_second = list(struct.enumerate_members())
    assert len(members_second) == 3

    for m1, m2 in zip(members_first, members_second, strict=True):
        assert m1.get_name() == m2.get_name()
        assert m1.get_offset() == m2.get_offset()

    length_member = members_first[0]
    assert length_member.get_name() == "Length"
    assert length_member.get_offset() == 0
    assert length_member.get_access() == AccessModifier.Public
    assert length_member.get_location_type() == LocationType.ThisRel
    assert length_member.get_data_kind() == DataKind.Member
    assert not length_member.is_const()
    assert not length_member.is_volatile()


def test_member_access_modifiers():
    source_code = R"""
struct AccessControlTest
{
public:
    int PublicMember;
protected:
    int ProtectedMember;
private:
    int PrivateMember;

public:
    int GetSum() const { return PublicMember + ProtectedMember + PrivateMember; }
};

int main()
{
    AccessControlTest t = {};
    return t.GetSum();
}
"""
    with AdHocBinaryDataSource(source_code) as data_source:
        cls = data_source.get_struct("AccessControlTest")
        members = list(cls.enumerate_members())
        assert len(members) == 3

        access_by_name = {m.get_name(): m.get_access() for m in members}
        assert access_by_name["PublicMember"] == AccessModifier.Public
        assert access_by_name["ProtectedMember"] == AccessModifier.Protected
        assert access_by_name["PrivateMember"] == AccessModifier.Private
