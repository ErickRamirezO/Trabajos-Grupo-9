
#pragma once

class Nodo{
    int valor;
    Nodo* siguiente;

public:
    int getValor(){
        return this->valor;
    }
    void setValor(int valor){
        this->valor = valor;
    }
    Nodo* getSiguiente(){
        return this->siguiente;
    }
    void setSiguiente(Nodo* siguiente){
        this->siguiente = siguiente;
    }
    Nodo(int valor, Nodo* siguiente){
        this->valor = valor;
        this->siguiente = siguiente;
    }
    Nodo(){
    	this->valor = 0;
        this->siguiente = siguiente;
    }
};
