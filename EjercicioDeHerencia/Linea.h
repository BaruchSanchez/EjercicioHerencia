#pragma once
#include <iostream>
#include "Figura.h"

using namespace std;

// clase para una figura formada por segmentos (linea)
class Linea : public Figura
{
public:
    Linea(float* segmentos, int cantidadSegmentos) : Figura("linea")
    {
        numSegmentos = cantidadSegmentos;
        segmentosLinea = new float[numSegmentos];

        // copia los segmentos en memoria dinamica
        for (int i = 0; i < numSegmentos; i++)
        {
            segmentosLinea[i] = segmentos[i];
        }
    }

    ~Linea() override
    {
        delete[] segmentosLinea; // libera memoria dinamica
    }

    // area de una linea es 0
    float CalcArea() override
    {
        return 0;
    }

    // perimetro es la suma de todos los segmentos
    float CalcPer() override
    {
        float suma = 0;
        for (int i = 0; i < numSegmentos; i++)
        {
            suma += segmentosLinea[i];
        }
        return suma;
    }

private:
    float* segmentosLinea; // arreglo con segmentos
    int numSegmentos;      // cantidad de segmentos
};