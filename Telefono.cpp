#include "Telefono.h"

Telefono::Telefono() {}

Telefono::Telefono(string numero, string tipo) : numero(numero), tipo(tipo) {}

string Telefono::getNumero() const { return numero; }
string Telefono::getTipo() const { return tipo; }

void Telefono::setNumero(string nuevo) { numero = nuevo; }
void Telefono::setTipo(string nuevo) { tipo = nuevo; }
