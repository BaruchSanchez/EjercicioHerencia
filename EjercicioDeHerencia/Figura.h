#pragma once
#include <string>  // para usar string

using namespace std;

// clase base para todas las figuras
class Figura
{
public:
    // constructor que recibe el nombre de la figura y lo guarda
    Figura(const string& nom) : nombre(nom) {}

    virtual ~Figura() {}

    // metodos que las clases hijas tienen que implementar
    virtual float CalcArea() = 0;
    virtual float CalcPer() = 0;

protected:
    string nombre;  // guarda el nombre de la figura
};