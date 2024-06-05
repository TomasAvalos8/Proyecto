#pragma once
#include "Fecha.h"
class habitacion{
private:
    int numero,capacidad;
    float precio;
    bool estado;
    Fecha disponibilidad;

public:
void setNumero(int n){
numero=n;
}
int getNumero(){
return numero;
}
void setCapacidad(int c){
capacidad=c;
}
int getCapacidad(){
return capacidad;
}
void setPrecio (float p){
precio=p;
}
float getPrecio(){
return precio;
}
void setEstado(bool e){
estado=e;
}
bool getEstado(){
return estado;
}
void setDisponibilidad(Fecha d){
disponibilidad=d;
}
Fecha getDisponibilidad(){
return disponibilidad;
}
};
