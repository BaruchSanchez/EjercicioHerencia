#pragma once
#include <iostream>
#include "Cuadrado.h"

using namespace std;

// cubo hereda de cuadrado para reutilizar el lado
class Cubo : public Cuadrado
{
public:
    Cubo(float l) : Cuadrado(l) {}

    ~Cubo() {}

    float Vol()
    {
        return lad * lad * lad; 
    }

    float Surf()
    {
        return 6 * lad * lad; 
    }
};
