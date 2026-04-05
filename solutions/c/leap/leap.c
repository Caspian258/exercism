#include "leap.h"

// Determina si un año es bisiesto según las reglas del calendario gregoriano:
//   - Es bisiesto si es divisible entre 400, O
//   - Es bisiesto si es divisible entre 4 PERO NO entre 100.
// Devuelve true si es bisiesto, false en caso contrario.
bool leap_year(int ano)
{
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
    {
        return true;
    }
    else
    {
        return false;
    }
    return 0;
}
