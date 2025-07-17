#pragma once

// clase base abstracta para todas las figuras
class Figura
{
public:
    Figura() {}
    virtual ~Figura() {}

    // metodos que se deben implementar en las clases hijas
    virtual float CalcArea() = 0;
    virtual float CalcPer() = 0;
};
