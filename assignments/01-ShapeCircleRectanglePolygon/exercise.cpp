#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"

#include <iostream>

int main() 
{
  Shape figura1{1,2};

  std::cout << figura1.draw() << " con valor en x: " << figura1.getValueX() << " y valor en y en: " << figura1.getValueY() << "\n";

  Circle circulo1{2,3,5};

  std::cout << circulo1.draw() << " con valor en x: " << circulo1.getValueX() << " y valor en y en: " << circulo1.getValueY() << " con radio r: "<< circulo1.getRadio() << "\n";

  Rectangle r1{10,2};

  std::cout << r1.draw() <<" con un ancho de " <<r1.getAncho() <<" y un alto de " <<r1.getAlto() << "\n";
  return 0;
}
