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
