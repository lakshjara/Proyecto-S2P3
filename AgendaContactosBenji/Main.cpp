#include <iostream>
#include "Agenda.h"
#include "Buscador.h"

int main() {
    Agenda agenda;
    int opcion;

    do {
        cout << "\n===== AGENDA DE CONTACTOS =====\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Mostrar contactos\n";
        cout << "3. Buscar contacto por nombre\n";
        cout << "4. Buscar contacto por correo\n";
        cout << "5. Eliminar contacto por nombre\n";
        cout << "6. Salir\n";
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
            Contacto c(nombre, correo, tel, dir);
            agenda.agregarContacto(c);

            cout << "Contacto agregado correctamente.\n";
        }

        else if (opcion == 2) {
            agenda.mostrarContactos();
        }

        else if (opcion == 3) {
            string nombre;
            cout << "Nombre a buscar: ";
            getline(cin, nombre);
            Contacto* encontrado = Buscador::buscarPorNombre(agenda.getContactos(), nombre);
            if (encontrado) {
                encontrado->mostrarDatos();
            } else {
                cout << "No se encontró ningún contacto con ese nombre.\n";
            }
        }

        else if (opcion == 4) {
            string correo;
            cout << "Correo a buscar: ";
            getline(cin, correo);
            Contacto* encontrado = Buscador::buscarPorCorreo(agenda.getContactos(), correo);
            if (encontrado) {
                encontrado->mostrarDatos();
            } else {
                cout << "No se encontró ningún contacto con ese correo.\n";
            }
        }

        else if (opcion == 5) {
            string nombre;
            cout << "Nombre del contacto a eliminar: ";
            getline(cin, nombre);
            if (agenda.eliminarContacto(nombre)) {
                cout << "Contacto eliminado correctamente.\n";
            } else {
                cout << "No se encontró ningún contacto con ese nombre.\n";
            }
        }

    } while (opcion != 6);

    cout << "Gracias por usar la agenda. ¡Hasta pronto!\n";
    return 0;
}
