/*
	Universidad de las Fuerzas Armadas "ESPE"
	Ejemplo de Pilas con memoria dinamica
	Arias Sebastián, Escobar David, Portilla Diego, Ramírez Erick, Valdiviezo Darwin, Yánez Michelle
	Fecha de creación: 13/06/2022
	Fecha de modificación: 14/06/2022
	Grupo 2
	Grupo 5
	Grupo 9
	https://github.com/ErickRamirezO/Trabajos-Grupo-9
*/

#include <iostream>
#include <stack>
#include <string>
#include "Nodo.h"
#include "Pila.h"
#include "Pila.cpp"

using namespace std;

bool isNumber(string);
void ingreso();

string opcion, elemento;
Pila pila;


int main(int argc, char const *argv[]){
    do{
    cout << "\t\tPILA CON MEMORIA DINAMICA" << endl;
    cout <<"1. Agregar elemento" << endl;
    cout <<"2. Mostrar elementos" << endl;
    cout <<"3. Eliminar elemento" << endl;
    cout <<"4. Salir" << endl;
    cout <<"Ingrese una opcion: ";
    cin >> opcion;
    if (isNumber(opcion)){
        switch (stoi(opcion)){
            case 1:
                ingreso();
                system("pause");
                break;
            case 2:
                cout<<"Datos de la Pila"<<endl;
                pila.mostrar();
                system("pause");
                break;
            case 3:
                pila.pop();
                system("pause");
                break;

            case 4:
                cout<<"Saliendo...."<<endl;
                system("pause");
                break;
            default:
                cout << "Opcion no valida" << endl;
                system("pause");
                break;
        }
    }else{
        cout << "Opcion no valida" << endl;
    }
    system("cls");
    }while(opcion != "4");
    return 0;
}


bool isNumber(string numero){
    for (int i = 0; i < numero.length(); i++)
    {
        if(!isdigit(numero[i])){
            return false;
        }
    }
    return true;
}

void ingreso(){
    cout << "Ingrese un elemento: ";
    cin >> elemento;
    if(isNumber(elemento)){
        pila.push(stoi(elemento));
    }else{
        cout<<"Dato no valido"<<endl;
        ingreso();
    }
}
