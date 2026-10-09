#pragma once
#include <atlbase.h>
#include <dia2.h>
#include <iostream>
#include <memory>
#include <string>

class BstrWrapper final
{
public:
    BstrWrapper() = default;

    BstrWrapper(const BstrWrapper& other);
    BstrWrapper& operator=(const BstrWrapper& other);
    BstrWrapper(BstrWrapper&& other) noexcept;
    BstrWrapper& operator=(BstrWrapper&& other) noexcept;

    BstrWrapper(const BSTR& data);
    BstrWrapper(BSTR&& data);
    ~BstrWrapper() noexcept;

    BSTR& get();
    const BSTR& get() const;

    BSTR* makeFromRaw();

    operator std::wstring() const;

    wchar_t* c_str() { return m_data; }

    const wchar_t* c_str() const { return m_data; }

    size_t length() const;

    std::wstring operator+(const std::wstring& s) const;

    template <size_t N>
    std::wstring operator+(const wchar_t (&s)[N]) const;
    std::wstring operator+(const wchar_t* s) const;

private:
    void move(BstrWrapper&& other) noexcept;

    BSTR m_data{nullptr};
};

std::wostream& operator<<(std::wostream& os, const BstrWrapper& bstr);

template <size_t N>
inline std::wstring BstrWrapper::operator+(const wchar_t (&s)[N]) const
{
    // N includes the terminating null character, which must not become part of the string.
    return std::wstring{*this} + std::wstring{s, N - 1};
}

namespace std
{
template <>
struct hash<BstrWrapper>
{
    size_t operator()(const BstrWrapper& str) const
    {
        // Hashing BSTR should be identical to std::wstring since BSTR is an
        // implementation consideration.
        return hash<std::wstring>()(str);
    }
};
}  // namespace std
