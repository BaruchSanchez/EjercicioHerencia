#pragma once
#include <iostream>
#include "Figura.h"

using namespace std;

// clase para figuras que tienen n lados iguales
class FiguraNLados : public Figura
{
public:
    FiguraNLados(int n, float l)
    {
        nlads = n;
        medlad = l;
    }

    ~FiguraNLados() {}

    float CalcArea()
    {
        // aqui no se hace nada, nadamas retorna 0
        return 0;
    }

    float CalcPer()
    {
        return nlads * medlad; // perimetro = n * lado
    }

private:
    int nlads;
    float medlad;
};
