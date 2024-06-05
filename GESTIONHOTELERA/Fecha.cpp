#include <iostream>
#include "Fecha.h"

using namespace std;



 void Fecha::Mostrar(){
            cout<<dia<<"/"<<mes<<"/"<<anio<< " ";
        }

void Fecha::Cargar(){
    cout<<"DIA: ";
    cin>>dia;
    cout<<"MES: ";
    cin>>mes;
    cout<<"ANIO: ";
    cin>>anio;
}

std::string Fecha::toString() {
  return std::to_string(dia) + "/" + std::to_string(mes) + "/" + std::to_string(anio);
}
