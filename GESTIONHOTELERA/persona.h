#pragma once
#include "Fecha.h"
#include <cstring>
#include <iostream>
using namespace std;
void cargarCadena(char *palabra, int tamano);
class persona
{
protected:
    char nombre[30],apellido[30];
    Fecha fechaNacimiento;
    int contacto;
public:
persona(const char *n="S/N", const char *a="S/A", Fecha f=Fecha(), int c=0);
    void setNombre(const char *n);
    const char *getNombre();
    void setApellido(const char *a);
    const char *getApellido();
    void setFechaNacimiento(Fecha f);
    Fecha getFechaNacimiento();
    int getDiaNacimiento();
    int getMesNacimiento();
    int getAnioNacimiento();
    void setContacto(int c);
    int getContacto();
void cargar();
void mostrar();
};
