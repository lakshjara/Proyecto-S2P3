#ifndef DIRECCION_H
#define DIRECCION_H

#include <string>
using namespace std;

class Direccion {
private:
    string calle, ciudad, estado, codigoPostal;
public:
    Direccion();
    Direccion(string calle, string ciudad, string estado, string codigoPostal);
    string getCalle() const;
    string getCiudad() const;
    string getEstado() const;
    string getCodigoPostal() const;
    void setCalle(string nuevo);
    void setCiudad(string nuevo);
    void setEstado(string nuevo);
    void setCodigoPostal(string nuevo);
};

#endif