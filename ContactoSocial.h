// Este es el programa creado para la clase ContactoSocial. Permite crear contactos sociales con apodo y dirección, y editar o mostrar sus datos.
// Creado por: María Fernanda Padmé Lakshmi Martínez Jara A01713328
// Creado el 18/05/2025
// Modificado el 11/06/2025

#ifndef CONTACTOSOCIAL_H
#define CONTACTOSOCIAL_H

#include "Contacto.h"
#include <iostream>
using namespace std;

class ContactoSocial : public Contacto { // clase que representa un contacto social, hereda de Contacto
    string apodo;      // apodo del contacto social
    string direccion;  // dirección del contacto social
public:
    ContactoSocial(string n, string t, string c, string a, string d) // constructor que recibe nombre, teléfono, correo, apodo y dirección
        : Contacto(n, t, c), apodo(a), direccion(d) {}

    void mostrar() override { // muestra toda la información del contacto social
        cout << "Contacto Social:\n";
        cout << "Nombre: " << nombre << "\nTeléfono: " << telefono
             << "\nCorreo: " << correo << "\nApodo: " << apodo
             << "\nDirección: " << direccion << endl;
    }

    void editar() override { // permite editar los campos del contacto social
        string entrada;
        cout << "Editar contacto social (deja vacío para no cambiar):\n";
        cout << "Nuevo nombre (" << nombre << "): "; getline(cin, entrada);
        if (!entrada.empty()) nombre = entrada;
        cout << "Nuevo teléfono (" << telefono << "): "; getline(cin, entrada);
        if (!entrada.empty()) telefono = entrada;
        cout << "Nuevo correo (" << correo << "): "; getline(cin, entrada);
        if (!entrada.empty()) correo = entrada;
        cout << "Nuevo apodo (" << apodo << "): "; getline(cin, entrada);
        if (!entrada.empty()) apodo = entrada;
        cout << "Nueva dirección (" << direccion << "): "; getline(cin, entrada);
        if (!entrada.empty()) direccion = entrada;
    }
};

#endif
