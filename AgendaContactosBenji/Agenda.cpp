#include "Agenda.h"
#include <iostream>
using namespace std;

Agenda::Agenda() : numContactos(0) {}

Agenda::~Agenda() {
    for (int i = 0; i < numContactos; ++i) {
        delete contactos[i];
    }
}

void Agenda::agregarContacto(ContactoBase* nuevo) {
    if (numContactos < MAX_CONTACTOS) {
        contactos[numContactos++] = nuevo;
    } else {
        cout << "Agenda llena." << endl;
    }
}

bool Agenda::eliminarContacto(const string& nombre) {
    for (int i = 0; i < numContactos; ++i) {
        if (contactos[i]->getNombre() == nombre) {
            delete contactos[i];
            for (int j = i; j < numContactos - 1; ++j) {
                contactos[j] = contactos[j + 1];
            }
            numContactos--;
            return true;
        }
    }
    return false;
}

void Agenda::mostrarContactos() const {
    if (numContactos == 0) {
        cout << "Agenda vacía." << endl;
        return;
    }

    for (int i = 0; i < numContactos; ++i) {
        cout << "--------------------------" << endl;
        contactos[i]->mostrarDatos();
    }
}