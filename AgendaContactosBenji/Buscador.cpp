#include "Buscador.h"

Contacto* Buscador::buscarPorNombre(Contacto contactos[], int cantidad, const string& nombre) {
    for (int i = 0; i < cantidad; i++) {
        if (contactos[i].getNombre() == nombre) {
            return &contactos[i];
        }
    }
    return nullptr;
}

Contacto* Buscador::buscarPorCorreo(Contacto contactos[], int cantidad, const string& correo) {
    for (int i = 0; i < cantidad; i++) {
        if (contactos[i].getCorreo() == correo) {
            return &contactos[i];
        }
    }
    return nullptr;
}