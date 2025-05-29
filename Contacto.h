#ifndef CONTACTO_H
#define CONTACTO_H

#include "ContactoBase.h"
#include "Telefono.h"
#include "Direccion.h"

class Contacto : public ContactoBase {
private:
    string nombre;
    string correo;
    Telefono telefono;
    Direccion direccion;
public:
    Contacto();
    Contacto(string nombre, string correo, Telefono telefono, Direccion direccion);

    string getNombre() const override;
    string getCorreo() const override;
    Telefono getTelefono() const;
    Direccion getDireccion() const;

    void setNombre(string nuevo);
    void setCorreo(string nuevo);
    void setTelefono(Telefono nuevo);
    void setDireccion(Direccion nuevo);

    void mostrarDatos() const override;
};

#endif
