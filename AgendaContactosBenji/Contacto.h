#ifndef CONTACTO_H
#define CONTACTO_H

#include <string>
#include "Telefono.h"
#include "Direccion.h"
using namespace std;

class Contacto {
private:
    string nombre;
    string correo;
    Telefono telefono;
    Direccion direccion;
public:
    Contacto();
    Contacto(string nombre, string correo, Telefono telefono, Direccion direccion);

    string getNombre() const;
    string getCorreo() const;
    Telefono getTelefono() const;
    Direccion getDireccion() const;

    void setNombre(string nuevo);
    void setCorreo(string nuevo);
    void setTelefono(Telefono nuevo);
    void setDireccion(Direccion nuevo);

    void mostrarDatos() const;
};

#endif
