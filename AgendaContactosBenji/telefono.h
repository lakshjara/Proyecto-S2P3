#ifndef TELEFONO_H
#define TELEFONO_H

#include <string>
using namespace std;

class Telefono {
private:
    string numero;
    string tipo;
public:
    Telefono();
    Telefono(string numero, string tipo);
    string getNumero() const;
    string getTipo() const;
    void setNumero(string nuevo);
    void setTipo(string nuevo);
};

#endif
