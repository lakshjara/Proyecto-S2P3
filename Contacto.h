// Creado por: María Fernanda Padmé Lakshmi Martínez Jara (A01713328)
// Creado el 20/05/2025
// Modificado el 10/06/2025
#ifndef CONTACTO_H
#define CONTACTO_H

#include "Persona.h"
#include <string>
using namespace std;

class Contacto : public Persona {
protected:
    string telefono;
public:
    Contacto(string n, string t) : Persona(n), telefono(t) {}
    string getTelefono() { return telefono; }
    void setTelefono(string t) { telefono = t; }
    virtual void mostrar() = 0;
    virtual void editar() = 0;
    virtual ~Contacto() {}
};

#endif
