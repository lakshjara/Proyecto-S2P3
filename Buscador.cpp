#include "Buscador.h"

Contacto* Buscador::buscarPorNombre(vector<Contacto>& contactos, const string& nombre) {
    for (auto& contacto : contactos) {
        if (contacto.getNombre() == nombre) {
            return &contacto;
        }
    }
    return nullptr;
}

Contacto* Buscador::buscarPorCorreo(vector<Contacto>& contactos, const string& correo) {
    for (auto& contacto : contactos) {
        if (contacto.getCorreo() == correo) {
            return &contacto;
        }
    }
    return nullptr;
}
