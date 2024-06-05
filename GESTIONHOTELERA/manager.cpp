#include <iostream>
#include "manager.h"
#include "habitacion.h"
#include "cliente.h"
#include "archivoshabitacion.h"
#include "archivosclientes.h"
#include "reservas.h"
#include "archivosreservas.h"
using namespace std;
void  manager::menuPrincipal()
{
    int option;
    system("cls");
    do
    {
        system("cls");
        cout << "------ MENU HOTEL------- " << endl;
        cout << "1- LISTADOS " << endl;
        cout << "2- CONSULTAS" << endl;
        cout << "3- INFORMES" << endl;
        cout << "4- CONFIGURACIONES" << endl;
        cout << "5- CARGAS" << endl;
        cout << "-----------------------------" << endl;
        cout << "0- <--SALIR" << endl;
        cout << "Opcion: ";
        cin >> option;

        switch(option)
        {
        case 1:
            menuListados();
            break;

        case 2:
            menuConsultas();
            break;

        case 3:
            menuInformes();
            break;

        case 4:
            menuConfiguraciones();
            break;
        case 5:
            menuCargas();
            break;
        }



    }
    while(option != 0);

}

void manager::menuListados()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ MENU LISTADOS------- " << endl;
        cout << "1- CLIENTES " << endl;
        cout << "2- HABITACIONES" << endl;
        cout << "3- RESERVAS" << endl;
        cout << "-----------------------------" << endl;
        cout << "0- <--VOLVER" << endl;
        cout << "Opcion: ";
        cin >> option;

        switch(option)
        {
        case 1:
            listadoclientes();
            break;

        case 2:
            listadohabitaciones();
            break;

        case 3:
            listadoreservas();
            break;

        }



    }
    while(option != 0);
}


void manager::menuConsultas()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ MENU CONSULTAS------- " << endl;
        cout << "1- CLIENTES " << endl;
        cout << "2- HABITACIONES" << endl;
        cout << "3- VENTAS" << endl;
        cout << "-----------------------------" << endl;
        cout << "0- <--VOLVER" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
            consultaclientes();
            break;

        case 2:
            consultahabitaciones();
            break;

        case 3:
            consultareservas();
            break;


        }



    }
    while(option != 0);
}


void manager::menuInformes()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ MENU INFORMES------- " << endl;
        cout << "1- RECAUDACION ANUAL GENERAL" << endl;
        cout << "2- RECAUDACION ANUAL POR HABITACION " << endl;
        cout << "-----------------------------" << endl;
        cout << "0- <--VOLVER" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
            informerecanual();
            break;

        case 2:
            informerechabitacion();
            break;
        }



    }
    while(option != 0);
}


void manager::menuConfiguraciones()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ MENU CONFIGURACIONES------- " << endl;
        cout << "1- LISTADOS " << endl;
        cout << "2- CONSULTAS" << endl;
        cout << "----------------------------------" << endl;
        cout << "0- <--VOLVER" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
            configuracionrealizarcopia();
            break;

        case 2:
            configuracionrestaurarcopia();
            break;
        }



    }
    while(option != 0);
}


void manager::listadoclientes()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ LISTADO DE CLIENTES------- " << endl;
        cout << "1- ORDENADOS POR NOMBRE" << endl;
        cout << "2- ORDENADOS POR DNI" << endl;
        cout << "---------------------------------" << endl;
        cout << "0- <--VOLVER" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
//            ordenadosnombre();
        {
            system("cls");
            ArchivoClientes m;
            m.listarClientes();
        }
        system ("pause");
        break;

        case 2:
            ordenadosdni();
            break;
        }
    }
    while(option != 0);

}

void manager::listadohabitaciones()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ LISTADO DE HABITACIONES ------- " << endl;
        cout << "1- ORDENADOS POR NUMERO" << endl;
        cout << "2- ORDENADOS POR CAPACIDAD" << endl;
        cout << "3- ORDENADOS POR PRECIO" << endl;
        cout << "-------------------------------------- " << endl;
        cout << "0- <--VOLVER" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
//         ordenadosnumero();
        {
            system("cls");
            ArchivoHabitaciones m;
            m.listarHabitaciones();
        }
        system ("pause");
        break;

        case 2:
            ordenadoscapacidad();
            break;
        case 3:
            ordenadosprecio();
            break;
        }
    }
    while(option != 0);
}

void manager::listadoreservas()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ LISTADO DE RESERVAS ------- " << endl;
        cout << "1- ORDENADOS POR FECHA" << endl;
        cout << "2- ORDENADOS POR RECAUDACION" << endl;
        cout << "---------------------------------- " << endl;
        cout << "0- <--VOLVER" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
//            ordenadosfecha();
        {
            system("cls");
            ArchivoReservas m;
            m.listarReservas();
        }
        system ("pause");
        break;

        case 2:
            ordenadosrecaudacion();
            break;
        }
    }
    while(option != 0);
}




void manager::consultaclientes()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ CONSULTA DE CLIENTES------- " << endl;
        cout << "1- CONSULTA POR NOMBRE" << endl;
        cout << "2- CONSULTA POR DNI" << endl;
        cout << "---------------------------------" << endl;
        cout << "0- <--VOLVER" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
            consultanombre();
            break;

        case 2:
            consultadni();
            break;
        }
    }
    while(option != 0);

}

void manager::consultahabitaciones()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ CONSULTA DE HABITACIONES ------- " << endl;
        cout << "1- CONSULTA POR NUMERO" << endl;
        cout << "2- CONSULTA POR CAPACIDAD" << endl;
        cout << "3- CONSULTA POR PRECIO" << endl;
        cout << "-------------------------------------- " << endl;
        cout << "0- <--VOLVER" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
            consultanumero();
            break;

        case 2:
            consultacapacidad();
            break;
        case 3:
            consultaprecio();
            break;
        }
    }
    while(option != 0);
}

void manager::consultareservas()
{
    int option;
    system("cls");
    do
    {
        system("cls");

        cout << "------ CONSULTA DE RESERVAS ------- " << endl;
        cout << "1- CONSULTA POR FECHA" << endl;
        cout << "2- CONSULTA POR RECAUDACION" << endl;
        cout << "3- CONSULTA POR CLIENTE" << endl;
        cout << "---------------------------------- " << endl;
        cout << "0- <--VOLVER" << endl;
        cout << "Opcion: "<< endl;
        cin >> option;

        switch(option)
        {
        case 1:
            consultafecha();
            break;

        case 2:
            consultarecaudacion();
            break;
        }
    }
    while(option != 0);
}
void  manager::menuCargas()
{
    int option;
    system("cls");
    do
    {
        system("cls");
        cout << "------ MENU CARGAS------- " << endl;
        cout << "1- HABITACION " << endl;
        cout << "2- CLIENTE " << endl;
        cout << "3- RESERVA " << endl;
        cout << "-----------------------------" << endl;
        cout << "0- <--SALIR" << endl;
        cout << "Opcion: ";
        cin >> option;

        switch(option)
        {
        case 1:
            cargahabitacion();
            system ("pause");
            break;
        case 2:
            cargacliente();
            system ("pause");
            break;
        case 3:
            cargareserva();
            system ("pause");
            break;
        }
    }
    while(option != 0);
}

void manager::cargahabitacion()
{
    habitacion h;
    h.cargar();
    ArchivoHabitaciones archab;
    archab.grabarHabitacion(h);

}
void manager::cargacliente()
{
    cliente c;
    c.cargarCliente();
    ArchivoClientes arcl;
    arcl.grabarClientes(c);

}
void manager::cargareserva()
{
    reservas r;
    r.cargar();
    ArchivoReservas arcr;
    arcr.grabarReservas(r);

}

void manager::informerecanual() {}
void manager::informerechabitacion() {}
void manager::configuracionrealizarcopia() {}
void manager::configuracionrestaurarcopia() {}
void manager::ordenadosnombre() {}
void manager::ordenadosdni() {}
void manager::ordenadoscapacidad() {}
void manager::ordenadosprecio() {}
void manager::ordenadosnumero() {}
void manager::ordenadosfecha() {}
void manager::ordenadosrecaudacion() {}
void manager::consultanombre() {}
void manager::consultadni() {}
void manager::consultanumero() {}
void manager::consultacapacidad() {}
void manager::consultaprecio() {}
void manager::consultafecha() {}
void manager::consultarecaudacion() {}
