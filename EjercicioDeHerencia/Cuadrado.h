#pragma once
#include <iostream>
#include "Figura.h"

using namespace std;

// clase cuadrado que hereda de figura
class Cuadrado : public Figura
{
public:
    Cuadrado(float l)
    {
        lad = l; // guarda el lado
    }

    ~Cuadrado() {}

    float CalcArea()
    {
        return lad * lad; 
    }

    float CalcPer()
    {
        return lad * 4; 
    }

    float GetLad()
    {
        return lad;
    }

protected:
    float lad; 
};

