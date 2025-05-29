#ifndef CONTACTOBASE_H
#define CONTACTOBASE_H

#include <string>
using namespace std;

class ContactoBase {
public:
    virtual void mostrarDatos() const = 0; // método virtual puro
    virtual string getNombre() const = 0;
    virtual string getCorreo() const = 0;
    virtual ~ContactoBase() {}
};

#endif
