#include "Contacto.h"
#include <iostream>
using namespace std;

Contacto::Contacto() {}

Contacto::Contacto(string nombre, string correo, Telefono telefono, Direccion direccion)
    : nombre(nombre), correo(correo), telefono(telefono), direccion(direccion) {}

string Contacto::getNombre() const { return nombre; }
string Contacto::getCorreo() const { return correo; }
Telefono Contacto::getTelefono() const { return telefono; }
Direccion Contacto::getDireccion() const { return direccion; }

void Contacto::setNombre(string nuevo) { nombre = nuevo; }
void Contacto::setCorreo(string nuevo) { correo = nuevo; }
void Contacto::setTelefono(Telefono nuevo) { telefono = nuevo; }
void Contacto::setDireccion(Direccion nuevo) { direccion = nuevo; }

void Contacto::mostrarDatos() const {
    cout << "Nombre: " << nombre << endl;
    cout << "Correo: " << correo << endl;
    cout << "Teléfono: " << telefono.getNumero() << " (" << telefono.getTipo() << ")" << endl;
    cout << "Dirección: " << direccion.getCalle() << ", " << direccion.getCiudad()
         << ", " << direccion.getEstado() << ", CP: " << direccion.getCodigoPostal() << endl;
}

