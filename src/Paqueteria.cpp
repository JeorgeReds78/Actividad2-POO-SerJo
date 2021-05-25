#include <iostream>
#include "../include/Paqueteria.hpp"  
#include <string>
	
using std::string;

Paqueteria::Paqueteria() {
    nombre = "Paquete";
    ubicacion = "Casa";
    id = "0000";
}

Paqueteria::Paqueteria(string nombre, string ubicacion, string id){
    this-> nombre = nombre;
    this-> ubicacion = ubicacion;
    this-> id = id;
}