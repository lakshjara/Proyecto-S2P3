// Este es el programa creado para la clase Persona. Representa una persona básica y almacena su nombre.
// Creado por: María Fernanda Padmé Lakshmi Martínez Jara A01713328
// Creado el 18/05/2025
// Modificado el 11/06/2025

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona { // clase base que representa una persona con nombre
protected:
    string nombre; // nombre de la persona
public:
    Persona(string n) : nombre(n) {} // constructor que recibe el nombre de la persona

    string getNombre() { return nombre; } // devuelve el nombre de la persona

    void setNombre(string n) { nombre = n; } // cambia el nombre de la persona, recibe el nuevo nombre

    virtual ~Persona() {} // destructor virtual (importante para herencia)
};

#endif
