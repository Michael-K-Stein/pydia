#pragma once
#include <atlbase.h>
#include <cstdio>
#include <iostream>
#include <stdexcept>
#include <string>

class DiaSymbolMasterException : public std::exception
{
public:
    using std::exception::exception;
};

class DiaComException : public DiaSymbolMasterException
{
public:
    DiaComException(const char* message, HRESULT result)
        : DiaSymbolMasterException{message}
        , m_result{result}
        , m_fullDescription{describe(message, result)}
    {
    }

    HRESULT getResult() const { return m_result; }

    // "<message> [HRESULT 0x80040154: Class not registered]"
    const char* what() const override { return m_fullDescription.c_str(); }

private:
    static std::string describe(const char* message, HRESULT result)
    {
        char code[16];
        std::snprintf(code, sizeof(code), "0x%08lX", static_cast<unsigned long>(result));

        std::string text;
        char* buffer = nullptr;
        const DWORD size =
            FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS, NULL,
                           static_cast<DWORD>(result), MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), reinterpret_cast<LPSTR>(&buffer), 0, NULL);
        if (0 != size && nullptr != buffer)
        {
            text.assign(buffer, size);
            while (!text.empty() && (text.back() == '\r' || text.back() == '\n' || text.back() == ' ' || text.back() == '.'))
            {
                text.pop_back();
            }
        }
        if (nullptr != buffer)
        {
            LocalFree(buffer);
        }

        std::string full = std::string{message} + " [HRESULT " + code;
        if (!text.empty())
        {
            full += ": " + text;
        }
        return full + "]";
    }

    HRESULT m_result{S_OK};
    std::string m_fullDescription;
};

class WinApiException : public std::exception
{
public:
    WinApiException(const std::string& fuck, int errorCode = GetLastError())
        : WinApiException{fuck.c_str(), errorCode}
    {
    }

    WinApiException(const char* fuck, int errorCode = GetLastError())
        : std::exception(fuck)
        , m_errorCode(errorCode)
    {
    }

    virtual const char* what() const
    {
        if (0 == m_fullErrorDescription.size())
        {
            const std::string baseDescrption  = std::exception::what();
            const auto winapiErrorDescription = formatMessage(m_errorCode);
            m_fullErrorDescription            = {"[" + std::to_string(m_errorCode) + "] " + baseDescrption + " : " + winapiErrorDescription};
        }
        return m_fullErrorDescription.c_str();
    }

private:
    static std::string formatMessage(int errorCode)
    {
        LPSTR messageBuffer = nullptr;

        // Ask Win32 to give us the string version of the errorCode.
        // The parameters we pass in, tell Win32 to create the buffer that
        // holds the message for us (because we don't yet know how long the
        // message string will be).
        size_t size = FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,  // dwFlags
                                     NULL,                                                                                         // lpSource
                                     errorCode,                                                                                    // dwMessageId
                                     MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),                                                    // dwLanguageId
                                     reinterpret_cast<LPSTR>(&messageBuffer),                                                      // lpBuffer
                                     0,                                                                                            // nSize
                                     NULL                                                                                          // Arguments
        );
        if (0 == size)
        {
            throw WinApiException("Failed to format error message!");
        }
        if (nullptr == messageBuffer)
        {
            throw std::bad_alloc();
        }

        // Copy the error message into a std::string.
        std::string message(messageBuffer, size);

        // Free the Win32's string's buffer.
        LocalFree(messageBuffer);

        return message;
    }

    const int m_errorCode = 0;
    mutable std::string m_fullErrorDescription{};
};

static inline std::ostream& operator<<(std::ostream& os, const DiaSymbolMasterException& exception)
{
    os << "DiaSymbolMasterException: " << exception.what() << std::endl;
    return os;
}

static inline std::ostream& operator<<(std::ostream& os, const DiaComException& exception)
{
    os << "DiaComException[" << std::hex << exception.getResult() << std::dec << "]: " << exception.what() << std::endl;
    return os;
}

namespace dia
{
#define DEFINE_TRIVIAL_EXCEPTION(exceptionName)                                                                                                      \
    class exceptionName : public DiaSymbolMasterException                                                                                            \
    {                                                                                                                                                \
    public:                                                                                                                                          \
        using ::DiaSymbolMasterException::DiaSymbolMasterException;                                                                                  \
    };


DEFINE_TRIVIAL_EXCEPTION(SymbolNotFoundException);
DEFINE_TRIVIAL_EXCEPTION(TooManyMatchesForFindException);
DEFINE_TRIVIAL_EXCEPTION(DataMemberDataKindMismatchException);
DEFINE_TRIVIAL_EXCEPTION(InvalidFileFormatException);
DEFINE_TRIVIAL_EXCEPTION(UnimplementedException);

class InvalidUsageException : public std::logic_error
{
public:
    using std::logic_error::logic_error;
};

class PropertyNotAvailableException : public InvalidUsageException
{
public:
    using InvalidUsageException::InvalidUsageException;
};

}  // namespace dia

static inline void CHECK_DIACOM_EXCEPTION(const char* message, HRESULT hResult, bool silentPropertyNotAvailable = false)
{
    do
    {
        if (E_INVALIDARG == hResult)
        {
            /* __debugbreak(); */
            throw dia::InvalidUsageException(std::string{"Invalid arguments passed: "} + message);
        }
        if (FAILED(hResult))
        {
            throw DiaComException(message, hResult);
        }
        if (S_FALSE == hResult && !silentPropertyNotAvailable)
        {
            /* __debugbreak(); */
            throw dia::PropertyNotAvailableException("Queried property that is not available for the symbol!");
        }
    } while (0);
}
