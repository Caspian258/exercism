#include "grains.h"

uint64_t square(uint8_t index)
{
    if (index == 0 || index > 64) return 0;
    uint64_t cuadros = 1ULL << (index - 1);
    return cuadros;
}

uint64_t total(void)
{
    uint64_t granos = 0;
    for (int i = 0; i <= 64; i++)
    {
        granos += square(i);
    }
    return granos;
}