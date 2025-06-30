#include <iostream>
#include "contactos.h"
using namespace std;

int main() {
    int opcion;
    do {
        cout << "\n=====MENU=====\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: agregarContacto(); break;
            case 2: cout << "Saliendo...\n"; break;
            default: cout << "Opcion no valida\n";
        }

    } while (opcion != 2);

    return 0;
}
