#include "Direccion.h"

Direccion::Direccion() {}

Direccion::Direccion(string calle, string ciudad, string estado, string codigoPostal)
    : calle(calle), ciudad(ciudad), estado(estado), codigoPostal(codigoPostal) {}

string Direccion::getCalle() const { return calle; }
string Direccion::getCiudad() const { return ciudad; }
string Direccion::getEstado() const { return estado; }
string Direccion::getCodigoPostal() const { return codigoPostal; }

void Direccion::setCalle(string nuevo) { calle = nuevo; }
void Direccion::setCiudad(string nuevo) { ciudad = nuevo; }
void Direccion::setEstado(string nuevo) { estado = nuevo; }
void Direccion::setCodigoPostal(string nuevo) { codigoPostal = nuevo; }