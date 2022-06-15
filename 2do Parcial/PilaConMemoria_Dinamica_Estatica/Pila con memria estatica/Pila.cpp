#include <iostream>
#include <stdio.h>
#include "Pila.h"

using namespace std;

Pila::Pila() {// Constructor
    top = -1;// Inicializamos el tope de la pila a -1
    //por que se empieza en -1? porque el tope de la pila es el ultimo elemento
}

int Pila::empty() {// Funcion que indica si la pila esta vacia
    if (top == -1) {// Si el tope de la pila es -1, entonces la pila esta vacia
        return 1;
    } else {// Si no, la pila no esta vacia
        return 0;
    }
}

int Pila::full() {// Funcion que indica si la pila esta llena
    if (top == MAX - 1) {// Si el tope de la pila es igual a MAX - 1, entonces la pila esta llena
        return 1;
    } else {// Si no, la pila no esta llena
        return 0;
    }
}

void Pila::push(int elemento) {// Agrega un elemento a la pila
    if (full()) {// Si la pila esta llena, no se puede agregar un elemento
        cout << "La pila esta llena" << endl;
    } else {// Si la pila no esta llena, se puede agregar un elemento
        top++;// Incrementamos el tope de la pila
        pila[top] = elemento;// Agregamos el elemento al tope de la pila
    }
}

int Pila::pop() {// Elimina el elemento del tope de la pila
    if (empty()) {// Si la pila esta vacia, no se puede eliminar un elemento
        cout << "La pila esta vacia" << endl;
        return -1;// Retornamos -1
    } else {// Si la pila no esta vacia, se puede eliminar un elemento
        top--;// Decrementamos el tope de la pila
        cout << "Elemento eliminado: " << pila[top + 1] << endl;// Mostramos el elemento eliminado
        return pila[top + 1];// Retornamos el elemento eliminado
    }
}

void Pila ::mostrar() {// Muestra los elementos de la pila
    if (empty()) {// Si la pila esta vacia, no se puede mostrar nada
        cout << "La pila esta vacia" << endl;
    } else {// Si la pila no esta vacia, se puede mostrar algo
        for (int i = top; i >= 0; i--) {// Recorremos la pila desde el tope hasta el 0
            cout << pila[i] << " ";// Mostramos el elemento de la pila
        }
        cout << endl;
    }
}