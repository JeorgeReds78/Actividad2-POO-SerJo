/*
Actividad Repaso OOP
Proyecto desarrollado por Sergio Gonzalez y Jorge Rojas

Definicion de clase Paquete

*/

//Clase Paquete creado por Sergio Gonzalez

#ifndef PAQUETE_H
#define PAQUETE_H
#include "../include/Enviador.hpp"
#include "../include/Destinatario.hpp"

#include <string>

using std::string;


class Paquete  {
	private:

	
		Enviador nombre_enviador;
		Destinatario datos_destinatario;

		string id_paquete;
		double peso;
		string fecha_envio;
		string notas;

	public:
		//Constructores
		Paquete(string de,string para, string direccion,
		string id_paquete, double peso,
		string fecha_envio, string notas);

		//Geters
		Enviador get_nombre_enviador() {return nombre_enviador;}
		Destinatario get_datos_destinatario() {return datos_destinatario;}

		string get_id() {return id_paquete;}
		double get_peso() {return peso;}
		string get_fecha_envio() {return fecha_envio;}
		string get_notas() {return notas;}

		//Seters
		void set_nombre_enviador(string de);
		void set_datos_destinatario(string para, string direccion);

		void set_id(string id_paquete);
		void set_peso(double peso);
		void set_fecha_envio(string fecha_envio);
		void set_notas(string notas);

		//Otros
		void print();
};
#endif