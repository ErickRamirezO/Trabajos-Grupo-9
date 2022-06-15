#pragma once 
#include <iostream>


using namespace std;

class Nodo {
    private:
        int dato;
        Nodo *siguiente;
    public:
    Nodo(int dato, Nodo *siguiente);
    int getDato();
    void setDato(int dato);
    Nodo* getSiguiente();
};

Nodo::Nodo(int dato, Nodo *siguiente) {
    this->dato = dato;
    this->siguiente = siguiente;
}
int Nodo::getDato() {
    return dato;
}
Nodo* Nodo::getSiguiente() {
    return siguiente;
}
void Nodo::setDato(int dato) {
    this->dato = dato;
}