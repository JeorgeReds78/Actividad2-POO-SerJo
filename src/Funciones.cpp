#include "../include/Funciones.hpp"

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cmath>

using namespace std;

void enviarPaquete() {

    #define MAX_NOMBREE_LEN 60  
    #define MAX_NOMBRED_LEN 60 
    #define MAX_DIRECCION_LEN 120  
    #define MAX_NOTAS_LEN 500

    char valor_correcto;

    char nombreEnviador[MAX_NOMBREE_LEN];
    char nombreDestinatario[MAX_NOMBRED_LEN];
    char direccion[MAX_DIRECCION_LEN];

    string id;
    double peso;
    string fecha;

    char notas[MAX_NOTAS_LEN];

    do {
        cout << "Ingrese los siguietes datos: " << endl;

        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout << "De: ";
        cin.getline(nombreEnviador,MAX_NOMBREE_LEN, '$');
        cout << endl;

        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout << "Para: ";
        cin.getline(nombreDestinatario,MAX_NOMBRED_LEN,'$');
        cout << endl;

        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout <<"Direccion: ";
        cin.getline(direccion,MAX_DIRECCION_LEN,'$');
        cout << endl;

        cout << "id del paqute: ";
        cin >> id;
        cout << endl;

        cout << "Peso del paquete en kg: ";
        cin >> peso;
        cout << endl;

        cout << "Fecha de envio (d/m/a) :";
        cin >> fecha;
        cout << endl;

        cout << "PARA CONFIRMAR SU INPUT AL FINAL COLOQUE EL CHAR '$' " << endl;
        cout << "Notas adicionales (max 50 char): ";
        cin.getline(notas,MAX_NOTAS_LEN,'$');
        cout << endl;

        Paquete paq1(nombreEnviador, nombreDestinatario, direccion, id, peso, fecha, notas);

        cout << endl;
        paq1.print();
        cout << endl;

        cout << "Sus valores son correctos y/n? ";
        cin >> valor_correcto;
        cout << endl;

    }

    while (valor_correcto == 'n');


}

void efecto_carga(int time, const string message, char symbol) {

    string progress_bar;
    const double progress_level = 1.42;

    cout << message << "\n\n";

    for (double percentage = 0; percentage <= 100; percentage += progress_level) {
        progress_bar.insert(0, 1, symbol);
        cout << "\r [" << ceil(percentage) << '%' << "] " << progress_bar;
        this_thread::sleep_for(chrono::milliseconds(time));       
    }

    cout << "\n\n";
    cout << "¡Envio Procesado!";
    cout << "\n\n";
}


