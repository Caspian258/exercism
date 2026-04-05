#ifndef GRAINS_H
#define GRAINS_H

#include <stdint.h>

// square: devuelve los granos en el cuadro 'index' del tablero (1–64).
// total:  devuelve la suma de granos en todos los 64 cuadros.
uint64_t square(uint8_t index);
uint64_t total(void);

#endif
