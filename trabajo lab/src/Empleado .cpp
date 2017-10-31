#include "Empleado .h"
#include <string>
#include "fecha.h"
#include <iostream>

using namespace std;

Empleado :: Empleado (string _nombre,int _salario,fecha _ingreso)
{
    nombre=_nombre;
    salario=_salario;
    ingreso=_ingreso;//ctor
}

/*void Empleado :: mostrarempleado()
{

    cout<< "El nombre del empleado es: " << nombre << "; su salario es: " << salario <<
    cout<< "; su fecha de ingreso es: " << ingreso.mostrarfecha();

}*/
