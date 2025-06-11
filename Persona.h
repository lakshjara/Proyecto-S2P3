#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
public:
    Persona(string n) : nombre(n) {}
    string getNombre() { return nombre; }
    void setNombre(string n) { nombre = n; }
    virtual ~Persona() {}
};

#endif
