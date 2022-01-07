#ifndef STATICCHARBUFFER_H
#define STATICCHARBUFFER_H

#include <cstddef>

namespace AR {

template <size_t Size>
class StaticCharBuffer
{
public:
    constexpr void append(char ch) {
        if (m_pos < Size) {
            m_data[m_pos] = ch;
            ++m_pos;
        }
    }
    const char* data() const { return m_data; }
    constexpr size_t size() const { return m_pos; }
    constexpr size_t capacity() const { return Size; }
private:
    char m_data[Size] { 0 };
    size_t m_pos { 0 };
};

}

#endif // STATICCHARBUFFER_H
