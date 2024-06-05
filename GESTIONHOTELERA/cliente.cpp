#include<iostream>
#include<cstdlib>
#include "cliente.h"
using namespace std;
void cliente::setidCliente(int idCliente)
{
    _idCliente=idCliente;
}
int cliente::getidCliente()
{
    return _idCliente;
}
void cliente::setnumHab(int n)
{
    numHab=n;
}
int cliente::getnumHab()
{
    return numHab;
}
void cliente::cargarCliente()
{
    cargar();
    cout<<"INGRESE EL DNI: ";
    cin>>_idCliente;
    cout<<"INGRESE EL NUMERO DE LA HABITACION: ";
    cin>>numHab;
}

void cliente::mostrarCliente()
{
    cout<<endl;
    mostrar();
    cout << "EL DNI ES: ";
    cout<<getidCliente()<<endl;
    cout << "EL NUMERO DE HABITACION ES: ";
    cout<<getnumHab()<<endl;
    cout<<endl;


}
