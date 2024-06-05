#include<iostream>
#include<cstdlib>
#include"reservas.h"
#include"cliente.h"

using namespace std;
void reservas::setNumHabitacion(int h)
{
    _h=h;
}
int reservas::getNumHabitacion ()
{
    return _h;
}
void reservas::setFormapago(const char *fp)
{
    strcpy(formaPago, fp);
}
const char * reservas::getFormapago()
{
    return formaPago;
}
void reservas::setCliente(cliente c)
{
    _c=c;
}
cliente reservas::getCliente()
{
    return _c;
}
void reservas::setPropietario(propietario p)
{
    _p=p;
}
propietario reservas::getPropietario()
{
    return _p;
}
void reservas::setGanancia(float ganancia)
{
    _ganancia=ganancia;
}
float reservas::getGanancia()
{
    return _ganancia;
}
void reservas::setOcupadaDesde(Fecha d)
{
    ocupadaDesde=d;
}
Fecha reservas::getOcupadaDesde()
{
    return ocupadaDesde;
}
void reservas::setOcupadaHasta(Fecha a)
{
    ocupadaHasta=a;
}
Fecha reservas::setOcupadaHasta()
{
    return ocupadaHasta;
}
void reservas::mostrar()
{
    cout<<endl;
    cout << "EL NUMERO DE HABITACION ES: ";
    cout<<getNumHabitacion()<<endl;
    cout << "LA FORMA DE PAGO ES: ";
    cout<<getFormapago()<<endl;
    cout << "EL CLIENTE ES: ";
    _c.mostrarCliente();
    cout<<endl;
    cout << "LA GANANCIA ES: ";
    cout<<getGanancia()<<endl;
    cout << "OCUPADA DESDE: ";
   ocupadaDesde.Mostrar();
    cout << " HASTA: ";
    ocupadaDesde.Mostrar();
    cout<<endl;
}
void reservas::cargar()
{
    cout << "EL NUMERO DE HABITACION ES: ";
    cin>>_h;
    cout << "LA FORMA DE PAGO ES: ";
    cin>>formaPago;
    cout << "EL CLIENTE ES: ";
    {_c.cargarCliente();
    setCliente(_c);}
   cout << "LA GANANCIA ES: ";
    cin >>_ganancia;
    cout << "OCUPADA DESDE ";
    ocupadaDesde.Cargar();
    cout << "HASTA ";
    ocupadaHasta.Cargar();
}
