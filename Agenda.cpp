#include "Agenda.h"
#include <iostream>
using namespace std;

Agenda::~Agenda() {
    for (auto contacto : contactos) {
        delete contacto;
    }
}

void Agenda::agregarContacto(ContactoBase* nuevo) {
    contactos.push_back(nuevo);
}

bool Agenda::eliminarContacto(const string& nombre) {
    for (auto it = contactos.begin(); it != contactos.end(); ++it) {
        if ((*it)->getNombre() == nombre) {
            delete *it;
            contactos.erase(it);
            return true;
        }
    }
    return false;
}

void Agenda::mostrarContactos() const {
    if (contactos.empty()) {
        cout << "Agenda vacía." << endl;
        return;
    }

    for (auto contacto : contactos) {
        cout << "--------------------------" << endl;
        contacto->mostrarDatos(); // polimorfismo
    }
}

vector<ContactoBase*>& Agenda::getContactos() {
    return contactos;
}
