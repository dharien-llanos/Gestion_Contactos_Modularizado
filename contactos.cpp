#include <iostream>
#include "contactos.h"

using namespace std;

contactoEmail contactos[MAX];
int totalContactos = 0;

void agregarContacto() {
    if (totalContactos >= MAX) {
        cout << "Lista de contactos llena\n";
        return;
    }

    contactoEmail nuevo;
    cin.ignore();
    cout << "\n---AGREGAR CONTACTO---\n";
    cout << "Nombre completo: ";
    getline(cin, nuevo.nombreCompleto);
    cout << "Sexo(M/F): ";
    cin >> nuevo.sexo;
    cout << "Edad: ";
    cin >> nuevo.edad;
    cout << "Telefono: ";
    cin >> nuevo.telefono;
    cout << "Email: ";
    cin >> nuevo.email;
    cin.ignore();
    cout << "Nacionalidad: ";
    getline(cin, nuevo.nacionalidad);

    contactos[totalContactos] = nuevo;
    totalContactos++;

    cout << "Contacto agregado correctamente\n";
}
void eliminarContacto() {
    if (totalContactos == 0) {
        cout << "No hay contactos registrados\n";
        return;
    }

    string emailEliminar;
    cout << "\n---ELIMINAR CONTACTO---\n";
    cout << "Ingrese email: ";
    cin >> emailEliminar;

    bool encontrado = false;
    for (int i = 0; i < totalContactos; i++) {
        if (contactos[i].email == emailEliminar) {
            for (int j = i; j < totalContactos - 1; j++) {
                contactos[j] = contactos[j + 1];
            }
            totalContactos--;
            encontrado = true;
            cout << "Contacto eliminado\n";
            break;
        }
    }

    if (!encontrado) {
        cout << "Contacto no encontrado\n";
    }
}

