/*
    Universidad de las Fuerzas Armadas "ESPE"
    Pilas con métodos de insertar, eliminar, e imprimir valores mayores de 50
    Ramírez Erick, Yánez Michelle
    Fecha de creación: 13/06/2022
    Fecha de modificación: 15/06/2022
    Grupo 9
    https://github.com/ErickRamirezO/Trabajos-Grupo-9
*/

#include <iostream>
#include <stdio.h>
#include "Pila.h"

using namespace std;

Pila::Pila() {// Constructor
    top = -1;// Inicializamos el tope de la pila a -1
    //por que se empieza en -1? porque el tope de la pila es el ultimo elemento
    for (int i = 0; i < MAX; i++) {
        pila[i] = -1000;
    }
}

int Pila::empty() {// Funcion que indica si la pila esta vacia
    if (top == -1) {// Si el tope de la pila es -1, entonces la pila esta vacia
        return 1;
    }
    else {// Si no, la pila no esta vacia
        return 0;
    }
}

int Pila::full() {// Funcion que indica si la pila esta llena
    if (top == MAX - 1) {// Si el tope de la pila es igual a MAX - 1, entonces la pila esta llena
        return 1;
    }
    else {// Si no, la pila no esta llena
        return 0;
    }
}

void Pila::push(int elemento) {// Agrega un elemento a la pila
    if (full()) {// Si la pila esta llena, no se puede agregar un elemento
        cout << "La pila esta llena" << endl;
    }
    else {// Si la pila no esta llena, se puede agregar un elemento
        top++;// Incrementamos el tope de la pila
        pila[top] = elemento;// Agregamos el elemento al tope de la pila
    }
}

int Pila::pop() {// Elimina el elemento del tope de la pila
    if (empty()) {// Si la pila esta vacia, no se puede eliminar un elemento
        cout << "La pila esta vacia" << endl;
        return -1;// Retornamos -1
    }
    else {// Si la pila no esta vacia, se puede eliminar un elemento
        top--;// Decrementamos el tope de la pila
        cout << "Elemento eliminado: " << pila[top + 1] << endl;// Mostramos el elemento eliminado
        return pila[top + 1];// Retornamos el elemento eliminado
    }
}

void Pila::mostrar() {// Muestra los elementos de la pila
    if (empty()) {// Si la pila esta vacia, no se puede mostrar nada
        cout << "La pila esta vacia" << endl;
    }
    else {// Si la pila no esta vacia, se puede mostrar algo
        for (int i = top; i >= 0; i--) {// Recorremos la pila desde el tope hasta el 0
                cout << pila[i] << " ";
        }
        cout << endl;
    }
}

void Pila::imprimir() {
  
    while (!empty()) {

        if (pila[top]> 50) {
            cout << pila[top] << "  ";
        }
        top--;
    }
    top= size();
    cout << endl;
}

int Pila::size() {
    int cont = 0;
    for (int i = 0; i < MAX; i++) {// Recorremos la pila desde el tope hasta el 0
        if (pila[i] != -1000) {
            cont++;
        }// Mostramos el elemento de la pila
    }
    return cont-1;
}