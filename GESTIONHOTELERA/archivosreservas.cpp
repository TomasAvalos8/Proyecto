#include<iostream>
#include<cstdlib>
#include "archivosreservas.h"
#include "reservas.h"
using namespace std;
bool ArchivoReservas::grabarReservas(reservas obj){
    FILE *p;
    p=fopen(nombre, "ab");
    if(p==NULL) return false;
    bool escribio=fwrite(&obj, sizeof obj, 1, p);
    fclose(p);
    return escribio;
}

bool ArchivoReservas::listarReservas(){
    FILE *p;
    reservas obj;
    p=fopen(nombre, "rb");
    if(p==NULL) return false;
    while(fread(&obj, sizeof obj, 1, p)==1){
            obj.mostrar();
            cout<<endl;
    }
    fclose(p);
    return true;
}
