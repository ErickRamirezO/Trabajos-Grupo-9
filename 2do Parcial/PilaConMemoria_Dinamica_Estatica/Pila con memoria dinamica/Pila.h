#pragma once 
#include <iostream>
#include "Nodo.h"

using namespace std;

class Pila{
    private:
    Nodo *tope;
    public:
    Pila();
    ~Pila();
    void push(int);
    int pop();
    void mostrar();
};