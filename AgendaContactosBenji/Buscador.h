#ifndef BUSCADOR_H
#define BUSCADOR_H

#include <vector>
#include <string>
#include "Contacto.h"
using namespace std;

class Buscador {
public:
    static Contacto* buscarPorNombre(vector<Contacto>& contactos, const string& nombre);
    static Contacto* buscarPorCorreo(vector<Contacto>& contactos, const string& correo);
};

#endif
