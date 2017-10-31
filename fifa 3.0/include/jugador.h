#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>

using namespace std;


class jugador
{
    public:
        string nombre,posicion;
        int animo,numero;

        jugador();
        jugador(string nombre,int numero,string posicion,int animo );

        void mostrar();


};

#endif // JUGADOR_H
