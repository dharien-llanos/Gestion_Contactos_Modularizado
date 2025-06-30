#ifndef CONTACTOS_H
#define CONTACTOS_H

#include <string>
using namespace std;

const int MAX = 100;

struct contactoEmail {
    string nombreCompleto;
    char sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

extern contactoEmail contactos[MAX];
extern int totalContactos;

void agregarContacto();
void eliminarContacto();


#endif
