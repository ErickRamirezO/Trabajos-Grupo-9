
#pragma once

class Nodo{
	int valor;
	Nodo *siguiente;
	Nodo *anterior;
	//constructor
	Nodo(int valor){
		this->valor = valor;
	}
	Nodo(){
	}
	//getters
	//getters
public:
	int getValor(){
		return this->valor;
	}
	Nodo *getSiguiente(){
		return this->siguiente;
	}
	Nodo *getAnterior(){
		return this->anterior;	
	}
	//Setters
	void setValor(int valor){
		this->valor=valor;
	}
	void setSiguiente(Nodo *siguiente){
		this->siguiente=siguiente;
	}
	void setAnterior(Nodo *anterior){
		this->anterior=anterior;
	}
//setters

	//clase amiga
friend class ListaDoble;

};