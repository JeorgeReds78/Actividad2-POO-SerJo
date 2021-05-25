#include <iostream>

#include "../include/Paquete.hpp"
#include "../include/Enviador.hpp"
#include "../include/Destinatario.hpp"
#include "../include/Paqueteria.hpp"  

#include <string>

using namespace std;


Paquete::Paquete(string paqueteria, string salida, string color,
        string de,
        string para, string direccion_destinatario,
		string id_paquete, double peso,
		string fecha_envio, string notas) {

    nom_paqueteria = Paqueteria(paqueteria);
    salida_dir = Paqueteria(salida);
    color_id = Paqueteria(color);

    nombre_enviador = Enviador(de);
    datos_destinatario = Destinatario(para, direccion_destinatario);

    this-> id_paquete = id_paquete;
    this-> peso = peso;
    this-> fecha_envio = fecha_envio;
    this-> notas = notas;

}

void Paquete::set_nombre_paquetera(string paqueteria) {
    nom_paqueteria.set_nombreP(paqueteria);
}

void Paquete::(string salida) {
    salida_dir.set_direccionP(salida);
}

void Paquete::set_color_paqueteria(string color) {
    color_id.set_colorP(color);
}

void Paquete::set_nombre_enviador(string de) {
    nombre_enviador.set_nombre(de);
}

void Paquete::set_datos_destinatario(string para, string direccion_destinatario) {
    datos_destinatario.set_nombre(para);
    datos_destinatario.set_direccion(direccion_destinatario);
}

void Paquete::set_id(string id_paquete) {
    this-> id_paquete = id_paquete;
}

void Paquete::set_peso(double peso) {
    this-> peso = peso;
}

void Paquete::set_fecha_envio(string fecha_envio) {
    this-> fecha_envio = fecha_envio;
}

void Paquete::set_notas(string notas) {
    this-> notas = notas;
}

void Paquete::print() {

        cout << "Paqueteria: " << nom_paqueteria.get_nombreP() << endl;
        cout << "Direccion de Envio: " << salida_dir.get_direccionP() << endl;
        cout << "Color: " << color_id.get_colorP() << endl;
    	cout << "De: " << nombre_enviador.get_nombre_enviador() << endl; 
        cout << "Para: " << datos_destinatario.get_nombre_destinatario() << endl;
        cout << "Direccion: " << datos_destinatario.get_direccion() << endl;
        cout << "Id: " << get_id() << endl;
        cout << "Peso paquete: " << get_peso() << endl; 
        cout<< "Fecha de envio: " << get_fecha_envio()<< endl; 
        cout << "Notas: " << get_notas() << endl;

}


