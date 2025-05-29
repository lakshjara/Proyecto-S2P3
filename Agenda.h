#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include "ContactoBase.h"
using namespace std;

class Agenda {
private:
    vector<ContactoBase*> contactos;
public:
    ~Agenda();
    void agregarContacto(ContactoBase* nuevo);
    bool eliminarContacto(const string& nombre);
    void mostrarContactos() const;
    vector<ContactoBase*>& getContactos();
};

#endif

