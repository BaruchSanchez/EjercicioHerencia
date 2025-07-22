#pragma once
#include <iostream>
#include "Cuadrado.h"

using namespace std;

// cubo heredado de cuadrado para reutilizar lado
class Cubo : public Cuadrado
{
public:
    Cubo(float lado) : Cuadrado(lado, "Cubo") {}

    ~Cubo() override
    {
    }

    // calcula volumen del cubo (lado^3)
    float Vol()
    {
        return lad * lad * lad;
    }

    // calcula �rea de superficie del cubo (6 * lado^2)
    float Surf()
    {
        return 6 * lad * lad;
    }

    // �rea de una cara (igual que cuadrado)
    float CalcArea() override
    {
        return lad * lad;
    }

    // per�metro de una cara (igual que cuadrado)
    float CalcPer() override
    {
        return lad * 4;
    }
};