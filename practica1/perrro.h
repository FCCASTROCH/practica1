#pragma once
#include "animal.h"
class perrro :
    public animal
{
public:
    perrro(string _nombre) : animal(_nombre) {}

    // Implementaci�n del m�todo hacerSonido para un perrro
    void hacerSonido() const override {
        cout << getNombre() << " dice: �Guau!" << endl;
    }
};

