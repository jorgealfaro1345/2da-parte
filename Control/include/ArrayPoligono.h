#ifndef ARRAYPOLIGONO_H
#define ARRAYPOLIGONO_H
#include "Poligono.h"


class ArrayPoligono
{
    private:
            int tamanio;
            Poligono *arr;

    public:
        ArrayPoligono(int _tamanio,Poligono **arr);
        void Adicionar_poligono(Poligono pol);
        void Eliminar_poligono();
        void Imprimir_areas();
        ~ArrayPoligono();


};

#endif // ARRAYPOLIGONO_H
