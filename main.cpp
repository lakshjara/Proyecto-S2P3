#include <iostream>
#include <string>
#include "Agenda.h"
#include "ContactoSocial.h"
#include "ContactoLaboral.h"
using namespace std;

int main() {
    Agenda agenda;
    int opcion;

    do {
        cout << "\n1. Agregar contacto social\n";
        cout << "2. Agregar contacto laboral\n";
        cout << "3. Mostrar todos\n";
        cout << "4. Buscar contacto\n";
        cout << "5. Eliminar contacto\n";
        cout << "6. Editar contacto\n";
        cout << "0. Salir\n";
        cout << "Opción: ";
        cin >> opcion;
        cin.ignore();

        if(opcion == 1) {
            string nombre, tel, apodo, direccion, correo;
            cout << "Nombre: "; getline(cin, nombre);
            cout << "Teléfono: "; getline(cin, tel);
            cout << "Apodo: "; getline(cin, apodo);
            cout << "Dirección: "; getline(cin, direccion);
            cout << "Correo: "; getline(cin, correo);
            agenda.agregar(new ContactoSocial(nombre, tel, apodo, direccion, correo));
        }
        else if(opcion == 2) {
            string nombre, tel, empresa, correo;
            cout << "Nombre: "; getline(cin, nombre);
            cout << "Teléfono: "; getline(cin, tel);
            cout << "Empresa: "; getline(cin, empresa);
            cout << "Correo: "; getline(cin, correo);
            agenda.agregar(new ContactoLaboral(nombre, tel, empresa, correo));
        }
        else if(opcion == 3) {
            agenda.mostrarTodos();
        }
        else if(opcion == 4) {
            string nombre;
            cout << "Nombre a buscar: "; getline(cin, nombre);
            Contacto* c = agenda.buscar(nombre);
            if(c) c->mostrar();
            else cout << "No encontrado.\n";
        }
        else if(opcion == 5) {
            string nombre;
            cout << "Nombre a eliminar: "; getline(cin, nombre);
            agenda.eliminar(nombre);
        }
        else if(opcion == 6) {
            string nombre;
            cout << "Nombre a editar: "; getline(cin, nombre);
            agenda.editar(nombre);
        }
    } while(opcion != 0);

    return 0;
}
