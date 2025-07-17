// EjercicioDeHerencia.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
#include <iostream>
#include "Circulo.h"
#include "Cuadrado.h"
#include "Cubo.h"
#include "FiguraNLados.h"
#include "Linea.h"

using namespace std;

int main()
{
    // crea un circulo con radio 4
    Figura* fig1 = new Circulo(4);
    cout << "area circ: " << fig1->CalcArea() << endl;
    cout << "perim circ: " << fig1->CalcPer() << endl;
    delete fig1;

    // cuadrado de lado 5
    Figura* fig2 = new Cuadrado(5);
    cout << "area cuad: " << fig2->CalcArea() << endl;
    cout << "perim cuad: " << fig2->CalcPer() << endl;
    delete fig2;

    // cubo de lado 3
    Cubo* cubo = new Cubo(3);
    cout << "vol cubo: " << cubo->Vol() << endl;
    cout << "surf cubo: " << cubo->Surf() << endl;
    delete cubo;

    // figura con 6 lados de 2.5
    Figura* fig3 = new FiguraNLados(6, 2.5);
    cout << "perim figura n lados: " << fig3->CalcPer() << endl;
    delete fig3;

    // linea con 4 segmentos
    float segs[] = { 1.5, 2.0, 3.0, 4.0 };
    Figura* linea = new Linea(segs, 4);
    cout << "area linea: " << linea->CalcArea() << endl;
    cout << "perim linea: " << linea->CalcPer() << endl;
    delete linea;

    return 0;
}

