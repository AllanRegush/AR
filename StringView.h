#ifndef STRINGVIEW_H
#define STRINGVIEW_H

#include "ARStdInt.h"

namespace AR {

class StringView {
public:
    constexpr StringView(const char *str, size_t length): m_data(str), m_length(length) {}
    constexpr size_t length() const { return m_length; }
    constexpr const char* data() const { return m_data; }
private:
    const char *m_data { nullptr };
    size_t m_length { 0 };
};

}

constexpr AR::StringView operator""_sv(const char *str, size_t length) {
    return { str, length };
}

#endif // STRINGVIEW_H
