#pragma once
#include <iostream>
#include "Figura.h"
#define PI 3.1416

using namespace std;

// clase circulo que hereda de figura
class Circulo : public Figura
{
public:
    Circulo(float r)
    {
        rad = r; // guarda el radio
    }

    ~Circulo() {}

    float CalcArea()
    {
        return PI * rad * rad; 
    }

    float CalcPer()
    {
        return 2 * PI * rad; 
    }

private:
    float rad;
};
