// Este es el programa creado para la clase Contacto. Define un contacto abstracto con nombre, teléfono y correo, y métodos virtuales para mostrar y editar.
// Creado por: María Fernanda Padmé Lakshmi Martínez Jara A01713328
// Creado el 18/05/2025
// Modificado el 11/06/2025

#ifndef CONTACTO_H
#define CONTACTO_H

#include "Persona.h"
#include <string>
using namespace std;

class Contacto : public Persona { // clase abstracta que representa un contacto y hereda de Persona
protected:
    string telefono; // teléfono del contacto
    string correo;   // correo electrónico del contacto
public:
    Contacto(string n, string t, string c) : Persona(n), telefono(t), correo(c) {} // constructor que recibe nombre, teléfono y correo

    string getTelefono() { return telefono; } // devuelve el teléfono del contacto
    void setTelefono(string t) { telefono = t; } // cambia el teléfono, recibe el nuevo teléfono

    string getCorreo() { return correo; } // devuelve el correo del contacto
    void setCorreo(string c) { correo = c; } // cambia el correo, recibe el nuevo correo

    virtual void mostrar() = 0; // método virtual puro para mostrar la información del contacto 

    virtual void editar() = 0;  // método virtual puro para editar datos del contacto 

    virtual ~Contacto() {} // destructor virtual
};

#endif
