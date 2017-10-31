#ifndef EMPLEADO _H
#define EMPLEADO _H
#include <string>
#include <iostream>
#include "fecha.h"

using namespace std;


class Empleado
{
    public:
        string nombre;
        int salario;
        fecha ingreso;
        Empleado (string _nombre,int _salario,fecha _ingreso);

        void mostrarempleado();

};


#endif // EMPLEADO _H
