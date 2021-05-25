#include <iostream>
#include "../include/Caja.hpp"  
#include <string>
	
using std::string;

Caja::Caja() {
    largo = 1.0;
    ancho = 1.0;
    altura = 1.0;
}

Caja::Caja(double largo, double ancho, double altura) {
    this-> largo = largo;
    this-> ancho = ancho;
    this-> altura = altura;
}