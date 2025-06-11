#ifndef BUSCADOR_H
#define BUSCADOR_H

#include "Contacto.h"

class Buscador {
public:
    static Contacto* buscarPorNombre(Contacto** contactos, int cantidad, const std::string& nombre);
};

#endif
