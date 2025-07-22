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
    // use new para crear el objeto en memoria dinámica 
    // el objeto no se borra solo, por eso use delete al final
    Figura* circulo = new Circulo(4);
    cout << "area circulo: " << circulo->CalcArea() << endl;
    cout << "perimetro circulo: " << circulo->CalcPer() << endl;
    delete circulo;

    // crea un cuadrado con lado 5
    Figura* cuadrado = new Cuadrado(5);
    cout << "area cuadrado: " << cuadrado->CalcArea() << endl;
    cout << "perimetro cuadrado: " << cuadrado->CalcPer() << endl;
    delete cuadrado;

    // crea un cubo con lado 3
    Cubo* cubo = new Cubo(3);  // NOTA: no es Figura*, porque Cubo no hereda directamente de Figura (lo hace a través de Cuadrado)
    cout << "volumen cubo: " << cubo->Vol() << endl;
    cout << "superficie cubo: " << cubo->Surf() << endl;
    delete cubo;

    // crea una figura de 6 lados de 2.5 de lado
    Figura* poligono = new FiguraNLados(6, 2.5);
    cout << "perimetro poligono: " << poligono->CalcPer() << endl;
    cout << "area poligono: " << poligono->CalcArea() << endl;
    delete poligono;

    // crea una linea con 4 segmentos
    float segmentos[] = { 1.5, 2.0, 3.0, 4.0 };
    Figura* linea = new Linea(segmentos, 4);
    cout << "area linea: " << linea->CalcArea() << endl;    // debería dar 0
    cout << "perimetro linea: " << linea->CalcPer() << endl; // suma todos los segmentos
    delete linea;

    return 0;
}
