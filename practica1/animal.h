#pragma once
#include<iostream>
#include<string>
using namespace std;
class animal{
private:
	string nombre;
public:
    animal(string _nombre) : nombre(_nombre) {}

    // Método virtual puro para demostrar polimorfismo
    virtual void hacerSonido() const = 0;

    // Método getter para el nombre
    string getNombre() const {
        return nombre;
    }

    // Destructor virtual
     ~animal() {}
};

