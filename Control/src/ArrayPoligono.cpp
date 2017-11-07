#include "ArrayPoligono.h"
#include "Poligono.h"

ArrayPoligono::ArrayPoligono(int _tamanio,Poligono **arr)
{
    tamanio = _tamanio;
    *arr =**arr;
    Poligono **arr = new Poligono*[tamanio];//ctor
}

void ArrayPoligono::Adicionar_poligono(Poligono pol)
{
    for(i=0;i<tamanio;i++)
    {
        **arr[i]=pol;
    }

}

void ArrayPoligono::Eliminar_poligono(int x)
{
    **arr[x]
}

void ArrayPoligono::Imprimir_areas()
{

}

ArrayPoligono::~ArrayPoligono()
{
    //dtor
}
