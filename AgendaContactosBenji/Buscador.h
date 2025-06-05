#ifndef BUSCADOR_H
#define BUSCADOR_H

#include <string>
#include "Contacto.h"
using namespace std;

class Buscador {
public:
    static Contacto* buscarPorNombre(Contacto contactos[], int cantidad, const string& nombre);
    static Contacto* buscarPorCorreo(Contacto contactos[], int cantidad, const string& correo);
};

#endif