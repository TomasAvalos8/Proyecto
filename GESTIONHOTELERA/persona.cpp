#include<iostream>
#include<cstdlib>
#include "persona.h"
#include "Fecha.h"
using namespace std;

persona::persona(const char *n, const char *a, Fecha f, int c){
    strcpy(nombre,n);
    strcpy(apellido,a);
    fechaNacimiento=f;
    contacto=c;
}
void persona::setNombre(const char *n)
    {
        strcpy(nombre, n);
    }
    const char* persona::getNombre()
    {
        return nombre;
    }
    void persona::setApellido(const char *a)
    {
        strcpy(apellido, a);
    }
    const char * persona::getApellido()
    {
        return apellido;
    }
    void persona::setFechaNacimiento(Fecha f)
    {
        fechaNacimiento=f;
    }
    Fecha persona::getFechaNacimiento()
    {
        return fechaNacimiento;
    }
    int persona::getDiaNacimiento()
    {
        return fechaNacimiento.getDia();
    }
    int persona::getMesNacimiento()
    {
        return fechaNacimiento.getMes();
    }
    int persona::getAnioNacimiento()
    {
        return fechaNacimiento.getAnio();
    }
    void persona::setContacto(int c){
    contacto=c;
    }
    int persona::getContacto(){
    return contacto;
    }
void persona::cargar(){
    cout<<"NOMBRE: ";
    cargarCadena(nombre,29);
    cout<<"APELLIDO: ";
    cargarCadena(apellido, 29);
    cout<<"FECHA DE NACIMIENTO: ";
    fechaNacimiento.Cargar();
    cout<<"CONTACTO: ";
    cin >>contacto;
}

void persona::mostrar(){
    cout<<"NOMBRE: "<<nombre<<endl;
    cout<<"APELLIDO: "<<apellido<<endl;
    cout<<"FECHA DE NACIMIENTO: ";
    fechaNacimiento.Mostrar();
    cout<<endl;
    cout<<"CONTACTO: "<<contacto<<endl;
}
void cargarCadena(char *palabra, int tamano){

    int i=0;

    fflush(stdin);

    for (i=0; i<tamano; i++)
    {

        palabra[i]=cin.get();

        if (palabra[i]=='\n')
        {

            break;

        }

    }

    palabra[i]='\0';

    fflush(stdin);

}
