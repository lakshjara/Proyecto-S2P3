#include <iostream>
#include <string>
#include "Agenda.h"
#include "ContactoSocial.h"
#include "ContactoLaboral.h"
using namespace std;

int main() { // función principal que muestra el menú y llama a las opciones
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
            string nombre, tel, correo, apodo, direccion;
            cout << "Nombre: "; getline(cin, nombre);
            cout << "Teléfono: "; getline(cin, tel);
            cout << "Correo: "; getline(cin, correo);
            cout << "Apodo: "; getline(cin, apodo);
            cout << "Dirección: "; getline(cin, direccion);
            agenda.agregar(new ContactoSocial(nombre, tel, correo, apodo, direccion)); // crea y agrega un ContactoSocial a la agenda
        }
        else if(opcion == 2) {
            string nombre, tel, correo, empresa;
            cout << "Nombre: "; getline(cin, nombre);
            cout << "Teléfono: "; getline(cin, tel);
            cout << "Correo: "; getline(cin, correo);
            cout << "Empresa: "; getline(cin, empresa);
            agenda.agregar(new ContactoLaboral(nombre, tel, correo, empresa)); // crea y agrega un ContactoLaboral a la agenda
        }
        else if(opcion == 3) {
            agenda.mostrarTodos(); // muestra todos los contactos almacenados
        }
        else if(opcion == 4) {
            string nombre;
            cout << "Nombre a buscar: "; getline(cin, nombre); // busca el contacto por nombre y muestra su información si lo encuentra
            Contacto* c = agenda.buscar(nombre);
            if(c) c->mostrar();
            else cout << "No encontrado.\n";
        }
        else if(opcion == 5) {
            string nombre;
            cout << "Nombre a eliminar: "; getline(cin, nombre);
            agenda.eliminar(nombre); // elimina el contacto por nombre
        }
        else if(opcion == 6) {
            string nombre;
            cout << "Nombre a editar: "; getline(cin, nombre);
            // Edita el contacto por nombre
            agenda.editar(nombre);
        }
    } while(opcion != 0);

    return 0; 
}
