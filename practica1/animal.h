#pragma once
#include<iostream>
#include<string>
using namespace std;
class animal{
private:
	string nombre;
public:
    animal(string _nombre) : nombre(_nombre) {}

    // M�todo virtual puro para demostrar polimorfismo
    virtual void hacerSonido() const = 0;

    // M�todo getter para el nombre
    string getNombre() const {
        return nombre;
    }

    // Destructor virtual
     ~animal() {}
};

