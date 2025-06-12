// Este es el programa creado para la clase ContactoLaboral. Permite crear contactos laborales con empresa, y editar o mostrar sus datos.
// Creado por: María Fernanda Padmé Lakshmi Martínez Jara A01713328
// Creado el 18/05/2025
// Modificado el 11/06/2025

#ifndef CONTACTOLABORAL_H
#define CONTACTOLABORAL_H

#include "Contacto.h"
#include <iostream>
using namespace std;

class ContactoLaboral : public Contacto { // clase que representa un contacto laboral, hereda de Contacto
    string empresa; // empresa del contacto laboral
public:
    ContactoLaboral(string n, string t, string c, string e) // constructor que recibe nombre, teléfono, correo y empresa
        : Contacto(n, t, c), empresa(e) {}

    void mostrar() override { // muestra toda la información del contacto laboral
        cout << "Contacto Laboral:\n";
        cout << "Nombre: " << nombre << "\nTeléfono: " << telefono
             << "\nCorreo: " << correo << "\nEmpresa: " << empresa << endl;
    }

    void editar() override { // permite editar los campos del contacto laboral
        string entrada;
        cout << "Editar contacto laboral (deja vacío para no cambiar):\n";
        cout << "Nuevo nombre (" << nombre << "): "; getline(cin, entrada);
        if (!entrada.empty()) nombre = entrada;
        cout << "Nuevo teléfono (" << telefono << "): "; getline(cin, entrada);
        if (!entrada.empty()) telefono = entrada;
        cout << "Nuevo correo (" << correo << "): "; getline(cin, entrada);
        if (!entrada.empty()) correo = entrada;
        cout << "Nueva empresa (" << empresa << "): "; getline(cin, entrada);
        if (!entrada.empty()) empresa = entrada;
    }
};

#endif