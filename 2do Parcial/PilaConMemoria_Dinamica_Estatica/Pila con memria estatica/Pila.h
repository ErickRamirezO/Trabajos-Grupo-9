#pragma once
#include <stdio.h>

using namespace std;

class Pila {
    private:
        static const int MAX = 5; // Maximo de elementos en la pila
        int top; // Indice del tope de la pila
        int pila[MAX]; // Array que representa la pila
    public:
        Pila(); // Constructor
        int empty(); // Funcion que indica si la pila esta vacia
        int full(); // Funcion que indica si la pila esta llena
        void push(int); // Agrega un elemento a la pila
        int pop(); // Elimina el elemento del tope de la pila
        void mostrar(); // Muestra los elementos de la pila
};