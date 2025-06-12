#ifndef AGENDA_H
#define AGENDA_H

#include "Contacto.h"
#include <string>
using namespace std;

class Agenda { // clase que administra la lista de contactos
private:
    Contacto* lista[100]; // arreglo de punteros a Contacto
    int cantidad;         // número de contactos almacenados
public:
    Agenda() { cantidad = 0; } // constructor que inicializa la agenda vacía

    ~Agenda() { // destructor que libera la memoria de todos los contactos
        for(int i=0; i<cantidad; i++)
            delete lista[i];
    }

    void agregar(Contacto* c) { // agrega un contacto a la agenda
        if(cantidad < 100)
            lista[cantidad++] = c;
    }

    void mostrarTodos() { // muestra todos los contactos almacenados
        for(int i=0; i<cantidad; i++) {
            lista[i]->mostrar();
            cout << "-----\n";
        }
    }

    // Busca un contacto por nombre
    Contacto* buscar(string nombre) { // recibe el nombre (string) a buscar, devuelve un puntero a Contacto si lo encuentra, nullptr si no
        for(int i=0; i<cantidad; i++) {
            if(lista[i]->getNombre() == nombre)
                return lista[i];
        }
        return nullptr;
    }

    int buscarPos(string nombre) { // busca la posición de un contacto por nombre
        for(int i=0; i<cantidad; i++) {
            if(lista[i]->getNombre() == nombre)
                return i;
        }
        return -1;
    }

    void eliminar(string nombre) { // elimina un contacto por nombre
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

    void editar(string nombre) { // edita un contacto por nombre
        Contacto* c = buscar(nombre);
        if(c) c->editar();
        else cout << "No encontrado.\n";
    }
};

#endif
