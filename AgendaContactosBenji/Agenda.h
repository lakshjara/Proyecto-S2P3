#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include "Contacto.h"
using namespace std;

class Agenda {
private:
    vector<Contacto> contactos;
public:
    void agregarContacto(const Contacto& nuevo);
    bool eliminarContacto(const string& nombre);
    void mostrarContactos() const;
    vector<Contacto>& getContactos(); // para el Buscador
};

#endif
