/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Destinatario

*/

//Clase Destinatario creado por Jorge Rojas

#ifndef CAJA_H
#define CAJA_H

#include <string>

using std::string;
	
class Caja  {
    private:
		double largo;
        double ancho;
        double altura;
		
	public:
		//Constructor
		Caja();
		Caja(double largo, double ancho, double altura);
};
#endif