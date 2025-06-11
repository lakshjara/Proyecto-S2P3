// Creado por: María Fernanda Padmé Lakshmi Martínez Jara (A01713328)
// Creado el 20/05/2025
// Modificado el 10/06/2025
#ifndef CONTACTOLABORAL_H
#define CONTACTOLABORAL_H

#include "Contacto.h"
#include <iostream>
using namespace std;

class ContactoLaboral : public Contacto {
    string empresa;
    string correo;
public:
    ContactoLaboral(string n, string t, string e, string c)
        : Contacto(n, t), empresa(e), correo(c) {}

    void mostrar() override {
        cout << "Contacto Laboral:\n";
        cout << "Nombre: " << nombre << "\nTeléfono: " << telefono
             << "\nEmpresa: " << empresa << "\nCorreo: " << correo << endl;
    }

    void editar() override {
        cout << "Editar contacto laboral (deja vacío para no cambiar):\n";
        string entrada;
        cout << "Nuevo nombre (" << nombre << "): "; getline(cin, entrada);
        if (!entrada.empty()) nombre = entrada;
        cout << "Nuevo teléfono (" << telefono << "): "; getline(cin, entrada);
        if (!entrada.empty()) telefono = entrada;
        cout << "Nueva empresa (" << empresa << "): "; getline(cin, entrada);
        if (!entrada.empty()) empresa = entrada;
        cout << "Nuevo correo (" << correo << "): "; getline(cin, entrada);
        if (!entrada.empty()) correo = entrada;
    }
};

#endif
