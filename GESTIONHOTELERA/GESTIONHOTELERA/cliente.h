#pragma once
#include "habitacion.h"

class cliente:public persona{
private:
    int _idCliente;
    habitacion _h;

public:
   void setCliente(int idCliente){
    _idCliente=idCliente;
    }
    int getCliente(){
    return _idCliente;
    }
    void setHabitacion(habitacion h){
    _h=h;
    }
    habitacion getHabitacion(){
    return _h;
    }
};
