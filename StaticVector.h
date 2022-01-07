#ifndef STATICVECTOR_H
#define STATICVECTOR_H

#include <cstddef>

namespace AR {

template <typename Type, size_t Size>
class StaticVector
{
public:
    constexpr StaticVector() = default;
    constexpr void append(Type item) {
        if (m_size <= Size) {
            m_data[m_size] = item;
            ++m_size;
        }
    }
    constexpr size_t size() const { return m_size; }
    constexpr size_t capacity() const { return Size; }
    constexpr Type& data() const { return *m_data; }
    constexpr Type& operator[](int pos) { return m_data[pos]; }
    constexpr Type operator[](int pos) const { return m_data[pos]; }
private:
    Type m_data[Size];
    size_t m_size { 0 };
};

}

#endif // STATICVECTOR_H
