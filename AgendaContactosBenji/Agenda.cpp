#include "Agenda.h"
#include <iostream>
using namespace std;

void Agenda::agregarContacto(const Contacto& nuevo) {
    contactos.push_back(nuevo);
}

bool Agenda::eliminarContacto(const string& nombre) {
    for (auto it = contactos.begin(); it != contactos.end(); ++it) {
        if (it->getNombre() == nombre) {
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

    for (const auto& c : contactos) {
        cout << "--------------------------" << endl;
        c.mostrarDatos();
    }
}

vector<Contacto>& Agenda::getContactos() {
    return contactos;
}
