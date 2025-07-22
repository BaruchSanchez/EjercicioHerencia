#pragma once
#include <iostream>
#include "Figura.h"

using namespace std;

// clase cuadrado que hereda de figura
class Cuadrado : public Figura
{
public:
    Cuadrado(float lado) : Figura("Cuadrado")
    {
        lad = lado;
    }

    ~Cuadrado() override
    {
    }

    float CalcArea() override
    {
        return lad * lad;
    }

    float CalcPer() override
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