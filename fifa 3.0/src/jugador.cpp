#include "jugador.h"
#include <iostream>
#include <string>

using namespace std;

jugador::jugador(){
    nombre= "";
    numero=0;
    posicion="";
    animo=0;

}

jugador::jugador(string _nombre,int _numero,string _posicion,int _animo )
{
    nombre=_nombre;
    numero=_numero;
    posicion=_posicion;
    animo=_animo;//ctor
}


void jugador:: mostrar(){

    cout<<"Nombre: "<<nombre<<"; "<<"Numero: "<<numero<<"; "<<"Posicion: "<<posicion<<"; "<<"Animo: "<<animo<<endl;

}

