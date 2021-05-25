#include <iostream>
#include "../include/Sobre.hpp"  
#include <string>
	
using std::string;

Sobre::Sobre() {
    largo = 1.0;
    ancho = 1.0;
    estampas = 2;
}

Sobre::Sobre(double largo, double ancho, int estampas){
    this-> largo = largo;
    this-> ancho = ancho;
    this-> estampas = estampas;
}