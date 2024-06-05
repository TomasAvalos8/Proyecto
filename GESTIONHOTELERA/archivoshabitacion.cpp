#include<iostream>
#include<cstdlib>
#include "archivoshabitacion.h"
#include "habitacion.h"

using namespace std;
bool ArchivoHabitaciones::grabarHabitacion(habitacion obj){
    FILE *p;
    p=fopen(nombre, "ab");
    if(p==NULL) return false;
    bool escribio=fwrite(&obj, sizeof obj, 1, p);
    fclose(p);
    return escribio;
}

bool ArchivoHabitaciones::listarHabitaciones(){
    FILE *p;
    habitacion obj;
    p=fopen(nombre, "rb");
    if(p==NULL) return false;
    while(fread(&obj, sizeof obj, 1, p)==1){
            obj.mostrar();
            cout<<endl;
    }
    fclose(p);
    return true;
}
