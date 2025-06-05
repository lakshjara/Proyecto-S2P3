#ifndef AGENDA_H
#define AGENDA_H

#include "ContactoBase.h"

class Agenda {
private:
    static const int MAX_CONTACTOS = 100;
    ContactoBase* contactos[MAX_CONTACTOS];
    int numContactos;
public:
    Agenda();
    ~Agenda();
    void agregarContacto(ContactoBase* nuevo);
    bool eliminarContacto(const string& nombre);
    void mostrarContactos() const;
};

#endif