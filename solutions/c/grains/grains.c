#include "grains.h"

// Calcula cuántos granos hay en el cuadro número 'index' del tablero de ajedrez.
// La leyenda dice que se doblan los granos en cada cuadro: 1, 2, 4, 8, ...
// Se usa desplazamiento de bits (1 << index-1) para calcular 2^(index-1) eficientemente.
// Devuelve 0 si el índice es inválido (0 o mayor a 64).
uint64_t square(uint8_t index)
{
    if (index == 0 || index > 64) return 0;
    uint64_t cuadros = 1ULL << (index - 1);
    return cuadros;
}

// Calcula el total de granos en todos los 64 cuadros del tablero
// sumando el resultado de square() para cada posición.
uint64_t total(void)
{
    uint64_t granos = 0;
    for (int i = 0; i <= 64; i++)
    {
        granos += square(i);
    }
    return granos;
}