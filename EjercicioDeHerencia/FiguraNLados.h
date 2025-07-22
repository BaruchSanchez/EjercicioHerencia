#pragma once
#include <iostream>
#include <cmath>  // para usar tan y PI
#include "Figura.h"

using namespace std;

// clase para figuras con n lados iguales 
class FiguraNLados : public Figura
{
public:
    FiguraNLados(int numLados, float medidaLado) : Figura("figura_n_lados")
    {
        lados = numLados;
        lado = medidaLado;
    }

    ~FiguraNLados() override
    {
    }

    float CalcArea() override
    {
        if (lados <= 2)
            return 0;  // este if es para evitar invalidaciones, porque no existen figuras de 2 o 1 solo lado

        float perimetro = CalcPer(); // perimetro = lados * medida
        float apotema = lado / (2 * tan(PI / lados)); // calculamos apotema

        return (perimetro * apotema) / 2; // area poligono regular
    }

    float CalcPer() override
    {
        return lados * lado; // perimetro = n * lado
    }

private:
    int lados;   // numero de lados
    float lado;  // medida de cada lado
};
