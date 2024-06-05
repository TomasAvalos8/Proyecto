#include<iostream>
#include<cstdlib>
#include "habitacion.h"
using namespace std;

void habitacion::mostrar()
{
    cout<<endl;
    cout << "EL NUMERO DE HABITACION ES: ";
    cout<<getNumero()<<endl;
    cout << "LA POSICION ES: ";
    cout<<getPos()<<endl;
    cout << "LA CAPACIDAD ES: ";
    cout<<getCapacidad()<<endl;
    cout << "EL PRECIO ES: ";
    cout<<getPrecio()<<endl;
    cout << "DISPONIBLE DESDE: ";
    disponibilidaddesde.Mostrar();
    cout << " HASTA: ";
    disponibilidadhasta.Mostrar();
    cout<<endl;
}
void habitacion::cargar(){
cout<< "NUMERO DE HABITACION ";
cin>>numero;
cout << "CAPACIDAD DE LA HABITACION ";
cin>>capacidad;
cout << "PRECIO DE LA HABITACION ";
cin >>precio;
cout << "HABITACION DISPONIBLE DESDE ";
disponibilidaddesde.Cargar();
cout << "HABITACION DISPONIBLE HASTA ";
disponibilidadhasta.Cargar();
}

void habitacion::setNumero(int n){
numero=n;
}
int habitacion::getNumero(){
return numero;
}
void habitacion::setCapacidad(int c){
capacidad=c;
}
int habitacion::getCapacidad(){
return capacidad;
}
void habitacion::setPrecio (float p){
precio=p;
}
float habitacion::getPrecio(){
return precio;
}
void habitacion::setEstado(bool e){
estado=e;
}
bool habitacion::getEstado(){
return estado;
}
void habitacion::setDisponibilidaddesde(Fecha d){
disponibilidaddesde=d;
}
Fecha habitacion::getDisponibilidaddesde(){
return disponibilidaddesde;
}

void habitacion::setDisponibilidadhasta(Fecha a){
disponibilidadhasta=a;
}
Fecha habitacion::getDisponibilidadhasta(){
return disponibilidadhasta;
}
void habitacion::setPos(int posi){
pos=posi;
}
int habitacion::getPos(){
return pos;
}
