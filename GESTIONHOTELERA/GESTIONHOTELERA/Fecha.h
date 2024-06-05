#pragma once
#include <string>
class Fecha{
    private:
        int dia;
        int mes;
        int anio;
    public:
        std::string toString();
        Fecha(int d=1, int m=1, int a=1900){
            dia=d;
            mes=m;
            anio=a;
        }
        void setDia(int d){
            if(d>0 && d<32){
                dia=d;
            }
        }
        void setMes(int m){mes=m;}
        void setAnio(int a){anio=a;}
        void setearFecha(int d, int m, int a){
            dia=d;
            mes=m;
            anio=a;
        }
        int getDia(){return dia;}
        int getMes(){return mes;}
        int getAnio(){return anio;}
        void Cargar();
        void Mostrar();
};

