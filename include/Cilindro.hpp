/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Destinatario

*/

//Clase Destinatario creado por Jorge Rojas

#ifndef CILINDRO_H
#define CILINDRO_H

#include <string>

using std::string;
	
class Cilindro  {
    private:
		double radio;
        double altura;
		
	public:
		//Constructor
		Cilindro();
		Cilindro(double radio, double altura);

};
#endif