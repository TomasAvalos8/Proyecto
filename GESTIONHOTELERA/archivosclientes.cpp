#include<iostream>
#include<cstdlib>
#include "archivosclientes.h"
#include "cliente.h"
using namespace std;
bool ArchivoClientes::grabarClientes(cliente obj){
    FILE *p;
    p=fopen(nombre, "ab");
    if(p==NULL) return false;
    bool escribio=fwrite(&obj, sizeof obj, 1, p);
    fclose(p);
    return escribio;
}

bool ArchivoClientes::listarClientes(){
    FILE *p;
    cliente obj;
    p=fopen(nombre, "rb");
    if(p==NULL) return false;
    while(fread(&obj, sizeof obj, 1, p)==1){
            obj.mostrar();
            cout<<endl;
    }
    fclose(p);
    return true;
}


