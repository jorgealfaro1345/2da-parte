#ifndef EQUIPO_H
#define EQUIPO_H

#include <iostream>
#include <string>
#include "jugador.h"

using namespace std;

class equipo
{
    string nameEquip;
    jugador *jres;
    jugador a;

public:

    equipo();
    equipo(string n, jugador *jres);

    void setNameEquipo(string);
    void setEquipo(jugador *jres);
};

#endif // EQUIPO_H



