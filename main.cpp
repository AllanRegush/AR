#include <cstdio>
#include "StaticVector.h"
#include "StaticCharBuffer.h"

int main()
{
    AR::StaticVector<size_t, 12> vec;
    vec.append(10);
    std::printf("%d\n", vec[0]);

    AR::StaticCharBuffer<12> buff;
    buff.append('c');
    buff.append('+');
    buff.append('+');
    std::printf("String: %s Size: %d\n", buff.data(), buff.size());
}
