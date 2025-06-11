// Creado por: María Fernanda Padmé Lakshmi Martínez Jara (A01713328)
// Creado el 20/05/2025
// Modificado el 10/06/2025
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
