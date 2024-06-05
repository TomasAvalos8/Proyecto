#pragma once
#include "habitacion.h"
#include "persona.h"

class cliente: public persona{
private:
    int _idCliente,numHab;

public:
   void setidCliente(int idCliente);
    int getidCliente();
    void setnumHab(int n);
   int getnumHab();
    void cargarCliente();
    void mostrarCliente();
};
