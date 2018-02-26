#include "punto.h"
#include <iostream>
Punto::Punto(double PuntoX, double PuntoY)
{
    x=PuntoX;
    y=PuntoY;

}

Punto::~Punto(){
    std::cout<<"eliminato elemento";
}
