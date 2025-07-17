#pragma once
#include <iostream>
#include "Figura.h"

using namespace std;

// clase para una figura hecha de lineas
class Linea : public Figura
{
public:
    Linea(float* segms, int tam)
    {
        tamSegs = tam;
        segs = new float[tam];

        // copia los segmentos
        for (int i = 0; i < tam; i++)
        {
            segs[i] = segms[i];
        }
    }

    ~Linea()
    {
        delete[] segs; // libera memoria
    }

    float CalcArea()
    {
        return 0; // linea no tiene area
    }

    float CalcPer()
    {
        float sum = 0;
        for (int i = 0; i < tamSegs; i++)
        {
            sum += segs[i]; // suma todos los segmentos
        }
        return sum;
    }

private:
    float* segs;
    int tamSegs;
};

