/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Destinatario

*/

//Clase Destinatario creado por Jorge Rojas

#ifndef SOBRE_H
#define SOBRE_H

#include <string>

using std::string;
	
class Sobre  {
    private:
		double largo;
        double ancho;
        int estampas;
		
	public:
		//Constructor
		Sobre();
		Sobre(double largo, double ancho, int estampas);
};
#endif