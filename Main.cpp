#include <iostream>
#include "Agenda.h"
#include "Contacto.h"
#include "Buscador.h"

int main() {
    Agenda agenda;
    int opcion;

    do {
        cout << "\n===== AGENDA DE CONTACTOS =====\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Mostrar contactos\n";
        cout << "3. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {
            string nombre, correo, numero, tipo, calle, ciudad, estado, cp;

            cout << "Nombre: ";
            getline(cin, nombre);
            cout << "Correo: ";
            getline(cin, correo);
            cout << "Número de teléfono: ";
            getline(cin, numero);
            cout << "Tipo (casa, móvil, etc.): ";
            getline(cin, tipo);
            cout << "Calle: ";
            getline(cin, calle);
            cout << "Ciudad: ";
            getline(cin, ciudad);
            cout << "Estado: ";
            getline(cin, estado);
            cout << "Código Postal: ";
            getline(cin, cp);

            Telefono tel(numero, tipo);
            Direccion dir(calle, ciudad, estado, cp);

            // polimorfismo: ContactoBase* apunta a un Contacto
            ContactoBase* c = new Contacto(nombre, correo, tel, dir);
            agenda.agregarContacto(c);
        }

        else if (opcion == 2) {
            agenda.mostrarContactos();
        }

    } while (opcion != 3);

    return 0;
}
