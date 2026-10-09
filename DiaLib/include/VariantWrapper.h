#pragma once
#include <oleauto.h>
#include <utility>

namespace dia
{
/// @brief Owning wrapper for a VARIANT. Releases any resources it holds (e.g. a BSTR) on destruction.
/// Converts implicitly to `const VARIANT&` for use with APIs which only read the value.
class Variant final : public VARIANT
{
public:
    Variant() { VariantInit(this); }

    Variant(const Variant& other)
    {
        VariantInit(this);
        if (FAILED(VariantCopy(this, const_cast<VARIANT*>(static_cast<const VARIANT*>(&other)))))
        {
            throw std::bad_alloc();
        }
    }

    Variant(Variant&& other) noexcept
    {
        static_cast<VARIANT&>(*this) = static_cast<VARIANT&>(other);
        VariantInit(&other);
    }

    Variant& operator=(const Variant& other)
    {
        if (this != &other)
        {
            Variant copy{other};
            *this = std::move(copy);
        }
        return *this;
    }

    Variant& operator=(Variant&& other) noexcept
    {
        if (this != &other)
        {
            VariantClear(this);
            static_cast<VARIANT&>(*this) = static_cast<VARIANT&>(other);
            VariantInit(&other);
        }
        return *this;
    }

    ~Variant() noexcept { VariantClear(this); }

    /// @brief Pointer to fill using a COM out-parameter. Must only be used on an empty instance.
    VARIANT* put() { return this; }
};
}  // namespace dia
