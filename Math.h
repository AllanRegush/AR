#ifndef MATH_H
#define MATH_H

#include "ARStdInt.h"

namespace AR {

AR::b32 is_power_of_two(u32 value)
{
    return (value & (value - 1)) == 0;
}

}

#endif // MATH_H
