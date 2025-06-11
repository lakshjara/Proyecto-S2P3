// Creado por: María Fernanda Padmé Lakshmi Martínez Jara (A01713328)
// Creado el 20/05/2025
// Modificado el 10/06/2025
#ifndef CONTACTOSOCIAL_H
#define CONTACTOSOCIAL_H

#include "Contacto.h"
#include <iostream>
using namespace std;

class ContactoSocial : public Contacto {
    string apodo;
    string direccion;
    string correo;
public:
    ContactoSocial(string n, string t, string a, string d, string c)
        : Contacto(n, t), apodo(a), direccion(d), correo(c) {}

    void mostrar() override {
        cout << "Contacto Social:\n";
        cout << "Nombre: " << nombre << "\nTeléfono: " << telefono
             << "\nApodo: " << apodo << "\nDirección: " << direccion
             << "\nCorreo: " << correo << endl;
    }

    void editar() override {
        cout << "Editar contacto social (deja vacío para no cambiar):\n";
        string entrada;
        cout << "Nuevo nombre (" << nombre << "): "; getline(cin, entrada);
        if (!entrada.empty()) nombre = entrada;
        cout << "Nuevo teléfono (" << telefono << "): "; getline(cin, entrada);
        if (!entrada.empty()) telefono = entrada;
        cout << "Nuevo apodo (" << apodo << "): "; getline(cin, entrada);
        if (!entrada.empty()) apodo = entrada;
        cout << "Nueva dirección (" << direccion << "): "; getline(cin, entrada);
        if (!entrada.empty()) direccion = entrada;
        cout << "Nuevo correo (" << correo << "): "; getline(cin, entrada);
        if (!entrada.empty()) correo = entrada;
    }
};

#endif
