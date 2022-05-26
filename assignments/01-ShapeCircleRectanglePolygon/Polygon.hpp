#pragma once

#include "Shape.hpp"

class Polygon:public Shape
{
private:
    int lados;
public:
    Polygon();
    Polygon(int, int, int);
    int getNumeroDeLados();
};