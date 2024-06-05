#pragma once
#include "reservas.h"
#include <cstring>
class ArchivoReservas
{
private:
    char nombre[30];
public:
   ArchivoReservas(const char *n="Reservas.dat")
    {
        strcpy(nombre, n);
    }
bool grabarReservas(reservas obj);
bool listarReservas();
};
