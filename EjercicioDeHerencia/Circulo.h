#pragma once
#include <iostream>
#include "Figura.h"
#define PI 3.1416

using namespace std;

// clase circulo que hereda de figura
class Circulo : public Figura
{
public:
    Circulo(float r) : Figura("circulo")
    {
        rad = r;  // guarda radio
    }

    ~Circulo() override {}

    // calcula area del circulo
    float CalcArea() override
    {
        return PI * rad * rad;
    }

    // calcula perimetro (circunferencia)
    float CalcPer() override
    {
        return 2 * PI * rad;
    }

private:
    float rad; // radio del circulo
};
