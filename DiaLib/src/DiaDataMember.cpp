#include "pch.h"
//
#include "DiaDataMember.h"
#include "Exceptions.h"
#include "SymbolTypes/DiaArray.h"

namespace dia
{
DataMember::DataMember(const Data& other)
    : Data{other}
{
    assertDataKind();
}

DataMember& DataMember::operator=(const Data& other)
{
    Data::Symbol::operator=(other);
    assertDataKind();
    return *this;
}

DataMember::DataMember(Data&& other)
    : Data{std::move(other)}
{
    assertDataKind();
}

DataMember& DataMember::operator=(Data&& other)
{
    Data::Symbol::operator=(std::move(other));
    assertDataKind();
    return *this;
}

std::wstring DataMember::getFieldName() const { return getName(); }

const Symbol DataMember::getFieldCType() const { return getType(); }

void DataMember::assertDataKind() const
{
    const auto myDataKind = getDataKind();
    if (DataIsMember != myDataKind && DataIsStaticMember != myDataKind)
    {
        throw DataMemberDataKindMismatchException("DataMembers must be of kind DataIsMember or DataIsStaticMember !");
    }
}
}  // namespace dia

std::wostream& operator<<(std::wostream& os, const dia::DataMember& member)
{
    const auto& fieldName = member.getFieldName();
    const auto& ctype     = member.getFieldCType();

    os << L"/* 0x" << std::hex << member.getOffset();
    if (member.getLocationType() == LocIsBitField)
    {
        os << L":" << std::hex << member.getBitPosition();
    }
    os << L" */ ";

    if (ctype.isArray())
    {
        const dia::Array ctypeAsArray{ctype};
        const auto elementType = ctypeAsArray.getType();
        os << elementType.getTypeName() << L" " << fieldName << L"[0x" << std::hex << ctypeAsArray.getCount() << L"];";
    }
    else
    {
        os << ctype.getTypeName() << L" " << fieldName;
        if (member.getLocationType() == LocIsBitField)
        {
            os << L" : " << std::dec << member.getLength();
        }
        os << L";";
    }
    return os;
}
