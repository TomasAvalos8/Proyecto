#pragma once
#include "Fecha.h"
class habitacion{
private:
    int numero,capacidad,pos;
    float precio;
    bool estado;
    Fecha disponibilidaddesde;
    Fecha disponibilidadhasta;

public:
void setNumero(int n);
int getNumero();
void setCapacidad(int c);
int getCapacidad();
void setPrecio (float p);
float getPrecio();
void setEstado(bool e);
bool getEstado();
void setDisponibilidaddesde(Fecha d);
Fecha getDisponibilidaddesde();
void setDisponibilidadhasta(Fecha a);
Fecha getDisponibilidadhasta();
void setPos(int posi);
int getPos();
void cargar();
void mostrar();
};
