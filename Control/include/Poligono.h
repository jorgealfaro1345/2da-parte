#ifndef POLIGONO_H
#define POLIGONO_H


class Poligono
{
    protected:
        int ancho, alto;
    public:
        void set_valores (int _ancho, int _alto);
        virtual int area (void) =0;
};

#endif // POLIGONO_H
