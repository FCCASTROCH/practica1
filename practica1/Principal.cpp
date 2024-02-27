#include <iostream>
#include "animal.h"
#include "perrro.h"
using namespace std;
int main() {
    perrro miPerro("Boby ");
   

    // Llamar al método hacerSonido de cada objeto, demostrando polimorfismo
    miPerro.hacerSonido();
 

	return 0;
}