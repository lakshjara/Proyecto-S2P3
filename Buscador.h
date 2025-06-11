// Creado por: María Fernanda Padmé Lakshmi Martínez Jara (A01713328)
// Creado el 20/05/2025
// Modificado el 10/06/2025
#ifndef BUSCADOR_H
#define BUSCADOR_H

#include "Contacto.h"

class Buscador {
public:
    static Contacto* buscarPorNombre(Contacto** contactos, int cantidad, const std::string& nombre);
};

#endif
