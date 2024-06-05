#pragma once
#include "habitacion.h"
#include <cstring>
class ArchivoHabitaciones
{
private:
    char nombre[30];
public:
   ArchivoHabitaciones(const char *n="Habitaciones.dat")
    {
        strcpy(nombre, n);
    }
bool grabarHabitacion(habitacion obj);
bool listarHabitaciones();
};
