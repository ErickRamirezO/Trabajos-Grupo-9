#include <iostream>
#include <string>
#include <stdlib.h>
#include "Pila.h"

using namespace std;

bool isNumber(string);
void ingreso();

string opcion, elemento;
Pila pila;

int main(int argc, char const* argv[]) {
    do {
        cout << "\t\tPILA CON MEMORIA ESTATICA" << endl;
        cout << "1. Agregar elemento" << endl;
        cout << "2. Mostrar elementos" << endl;
        cout << "3. Eliminar elemento" << endl;
        cout << "4. Mostrar elementos mayores a 50 " << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        if (isNumber(opcion)) {
            switch (stoi(opcion)) {
            case 1:
                ingreso();
                system("pause");
                break;
            case 2:
                pila.mostrar();
                system("pause");
                break;
            case 3:
                pila.pop();
                system("pause");
                break;
            case 4:
                pila.imprimir();
                system("pause");
                break;
            case 5:
                cout << "Saliendo...." << endl;
                system("pause");
                break;
            default:
                cout << "Opcion no valida" << endl;
                system("pause");
                break;
            }
        }
        else {
            cout << "Opcion no valida" << endl;
        }
        system("cls");
    } while (opcion != "5");
    return 0;
}


bool isNumber(string numero) {
    for (int i = 0; i < numero.length(); i++)
    {
        if (!isdigit(numero[i])) {
            return false;
        }
    }
    return true;
}

void ingreso() {
    cout << "Ingrese un elemento: ";
    cin >> elemento;
    if (isNumber(elemento)) {
        pila.push(stoi(elemento));
    }
    else {
        cout << "Dato no valido" << endl;
        ingreso();
    }
}
