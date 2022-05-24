#pragma once

#include "Shape.hpp"

class Rectangle : public Shape
{
private:
    int alto;
    int ancho;
public:
    Rectangle();
    Rectangle(int,int);

    int getAlto();
    int getAncho();
};