/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Destinatario

*/

//Clase Destinatario creado por Jorge Rojas

#ifndef PAQUETERIA_H
#define PAQUETERIA_H

#include <string>

using std::string;
	
class Paqueteria  {
    private:
		string nombre;
        string ubicacion;
        string id;
		
	public:
		//Constructor
		Paqueteria();
		Paqueteria(string nombre, string ubicacion, string id);
};
#endif