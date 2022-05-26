#include "Polygon.hpp"

Polygon::Polygon():Shape{}
{
    lados=0;
}

Polygon::Polygon(int valX, int valY, int numlados) : Shape{valX, valY}
{
    lados=numlados;
}

int Polygon::getNumeroDeLados()
{
    return lados;
}