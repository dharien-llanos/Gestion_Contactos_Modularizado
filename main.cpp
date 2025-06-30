#include <iostream>
#include "contactos.h"
using namespace std;

int main() {
    int opcion;
    do {
        cout << "\n=====MENU=====\n";
        cout << "1. Agregar contacto\n";
        cout << "2. Eliminar contacto\n";
        cout << "3. Salir\n";

        cin >> opcion;

            switch (opcion) {
            case 1: agregarContacto(); break;
            case 2: eliminarContacto(); break;
            case 3: cout << "Saliendo...\n"; break;

            default: cout << "Opcion no valida\n";
        }

    } while (opcion != 2);

    return 0;
}
