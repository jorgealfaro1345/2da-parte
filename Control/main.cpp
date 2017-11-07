#include <iostream>
#include "Poligono.h"
#include "Rectangulo.h"
#include "Triangulo.h"
using namespace std;


int main () {
  Rectangulo rectangulo1;
  Triangulo triangl;
  Poligono * poligono1 = &rectangulo1;
  Poligono * poligono2 = &triangl;
  poligono1->set_valores (4,5);
  poligono2->set_valores (4,5);
  cout << rectangulo1.area() << '\n';
  cout << triangl.area() << '\n';
  return 0;
}
