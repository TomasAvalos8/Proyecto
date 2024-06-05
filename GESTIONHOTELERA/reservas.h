#pragma once
#include "propietario.h"
#include "habitacion.h"
#include "cliente.h"

class reservas
{
private:
    int _h;
    char formaPago[30];
    cliente _c;
    propietario _p;
    float _ganancia;
    Fecha ocupadaDesde;
    Fecha ocupadaHasta;
public:
    void setNumHabitacion(int h);
    int getNumHabitacion ();
    void setFormapago(const char *fp);
    const char *getFormapago();
    void setCliente(cliente c);
    cliente getCliente();
    void setPropietario(propietario p);
    propietario getPropietario();
    void setGanancia(float ganancia);
    float getGanancia();
    void setOcupadaDesde(Fecha d);
    Fecha getOcupadaDesde();
    void setOcupadaHasta(Fecha a);
    Fecha setOcupadaHasta();
    void cargar();
    void mostrar();
};
