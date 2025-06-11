#ifndef AGENDA_H
#define AGENDA_H

#include "Contacto.h"
#include <string>
using namespace std;

class Agenda {
private:
    Contacto* lista[100];
    int cantidad;
public:
    Agenda() { cantidad = 0; }
    ~Agenda() {
        for(int i=0; i<cantidad; i++)
            delete lista[i];
    }
    void agregar(Contacto* c) {
        if(cantidad < 100)
            lista[cantidad++] = c;
    }
    void mostrarTodos() {
        for(int i=0; i<cantidad; i++) {
            lista[i]->mostrar();
            cout << "-----\n";
        }
    }
    Contacto* buscar(string nombre) {
        for(int i=0; i<cantidad; i++) {
            if(lista[i]->getNombre() == nombre)
                return lista[i];
        }
        return nullptr;
    }
    int buscarPos(string nombre) {
        for(int i=0; i<cantidad; i++) {
            if(lista[i]->getNombre() == nombre)
                return i;
        }
        return -1;
    }
    void eliminar(string nombre) {
        int pos = buscarPos(nombre);
        if(pos != -1) {
            delete lista[pos];
            for(int i=pos; i<cantidad-1; i++) {
                lista[i] = lista[i+1];
            }
            cantidad--;
            cout << "Contacto eliminado.\n";
        } else {
            cout << "No encontrado.\n";
        }
    }
    void editar(string nombre) {
        Contacto* c = buscar(nombre);
        if(c) c->editar();
        else cout << "No encontrado.\n";
    }
};

#endif
