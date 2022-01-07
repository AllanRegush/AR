#include <cstdio>
#include "StaticVector.h"

int main()
{
    AR::StaticVector<size_t, 12> vec;
    vec.append(10);
    std::printf("%d\n", vec[0]);
}
