#include "pch.h"
//
#include "BstrWrapper.h"

BstrWrapper::BstrWrapper(const BstrWrapper& other)
{
    // SysAllocString(nullptr) returns nullptr, which is not an allocation failure here.
    if (nullptr != other.m_data)
    {
        m_data = SysAllocStringLen(other.m_data, SysStringLen(other.m_data));
        if (nullptr == m_data)
        {
            throw std::bad_alloc();
        }
    }
}

BstrWrapper& BstrWrapper::operator=(const BstrWrapper& other)
{
    if (this != &other)
    {
        BstrWrapper copy(other);
        *this = std::move(copy);
    }
    return *this;
}

BstrWrapper::BstrWrapper(BstrWrapper&& other) noexcept { move(std::move(other)); }

BstrWrapper& BstrWrapper::operator=(BstrWrapper&& other) noexcept
{
    if (this != &other)
    {
        SysFreeString(m_data);
        move(std::move(other));
    }
    return *this;
}

BstrWrapper::BstrWrapper(const BSTR& data)
{
    // A null BSTR is a valid empty string, and SysAllocStringLen(nullptr, 0) would not preserve it.
    if (nullptr == data)
    {
        return;
    }
    m_data = SysAllocStringLen(data, SysStringLen(data));
    if (nullptr == m_data)
    {
        throw std::bad_alloc();
    }
}

BstrWrapper::BstrWrapper(BSTR&& data)
    : m_data{std::move(data)}
{
}

BstrWrapper::~BstrWrapper() noexcept
{
    if (nullptr != m_data)
    {
        SysFreeString(m_data);
    }
}

BSTR& BstrWrapper::get()
{
    if (nullptr == m_data)
    {
        throw std::runtime_error("BstrWrapper used before initialization!");
    }
    return m_data;
}

const BSTR& BstrWrapper::get() const
{
    if (nullptr == m_data)
    {
        throw std::runtime_error("BstrWrapper used before initialization!");
    }
    return m_data;
}

BSTR* BstrWrapper::makeFromRaw()
{
    if (nullptr != m_data)
    {
        throw std::exception("Cannot re-makeFromRaw BstrWrapper!");
    }
    return &m_data;
}

size_t BstrWrapper::length() const
{
    _ASSERT(nullptr != m_data);
    return SysStringLen(m_data);
}

BstrWrapper::operator std::wstring() const
{
    // A null BSTR is a valid empty string.
    if (nullptr == m_data)
    {
        return std::wstring{};
    }
    return std::wstring(m_data, SysStringLen(m_data));
}

std::wstring BstrWrapper::operator+(const std::wstring& s) const { return std::wstring(*this) + s; }

std::wstring BstrWrapper::operator+(const wchar_t* s) const { return std::wstring{*this} + std::wstring{s, wcslen(s)}; }

void BstrWrapper::move(BstrWrapper&& other) noexcept
{
    m_data       = std::move(other.m_data);
    other.m_data = nullptr;
}

std::wostream& operator<<(std::wostream& os, const BstrWrapper& bstr)
{
    os << std::wstring(bstr);
    return os;
}
