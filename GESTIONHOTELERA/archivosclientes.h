#pragma once
#include "cliente.h"
#include <cstring>
class ArchivoClientes
{
private:
    char nombre[30];
public:
   ArchivoClientes(const char *n="Clientes.dat")
    {
        strcpy(nombre, n);
    }
bool grabarClientes(cliente obj);
bool listarClientes();
};
