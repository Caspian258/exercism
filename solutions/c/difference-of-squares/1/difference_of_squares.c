#include "difference_of_squares.h"

// Esta función calcula (1 + 2 + ... + n)²
unsigned int square_of_sum(unsigned int number)
{
    unsigned int suma = (number * (number + 1)) / 2;
    return suma * suma;
}

// Esta función calcula (1² + 2² + ... + n²)
unsigned int sum_of_squares(unsigned int number) 
{
    unsigned int suma = (number * (number + 1) * ((2 * number) + 1)) / 6;
    return suma;
}

// Esta función calcula la diferencia entre las dos anteriores
unsigned int difference_of_squares(unsigned int number) 
{
    unsigned int resta = square_of_sum(number) - sum_of_squares(number);
    return resta;
}
