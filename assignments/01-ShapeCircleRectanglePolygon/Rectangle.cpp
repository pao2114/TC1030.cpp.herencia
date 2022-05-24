#include "Rectangle.hpp"

Rectangle::Rectangle() : Shape{}
{
    ancho=0;
    alto=0;
}

Rectangle::Rectangle(int alto, int ancho) : Shape{ancho, alto}
{
    this->ancho = ancho;
    this->alto = alto;
}

int Rectangle::getAlto()
{
    return alto;
}

int Rectangle::getAncho()
{
    return ancho;
}