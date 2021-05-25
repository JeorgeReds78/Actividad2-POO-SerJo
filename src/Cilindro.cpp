#include <iostream>
#include "../include/Cilindro.hpp"  
#include <string>
	
using std::string;

Cilindro::Cilindro() {
    radio = 1.0;
    altura = 1.0;
}

Cilindro::Cilindro(double radio, double altura){
    this-> radio = radio;
    this-> altura = altura;
}