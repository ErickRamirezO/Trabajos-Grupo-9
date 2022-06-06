#include "Nodo.h"
#pragma once
#include <iostream>
using namespace std;

class ListaDoble{
private:
	Nodo *cabeza;
	Nodo *cola;
public:
	ListaDoble(){
		cabeza = new Nodo();
	cola = new Nodo();
	//ya puede acceder a loe elementos privados
	cabeza->siguiente = cola;
	cola->anterior = cabeza;
	cabeza->anterior = NULL;
	cola->siguiente = NULL;
	}
	//funciones
	int primerNodo(){
	return cabeza->siguiente->valor;
}

int ultimoNodo(){
	return cola->anterior->valor;
}

void insertarCabeza(int valor) {
	//creamos un nuevo nodo
	Nodo *nodo = new Nodo(valor);
	nodo->anterior = cabeza;
	nodo->siguiente = cabeza->siguiente;

	cabeza->siguiente->anterior=nodo;
	cabeza->siguiente = nodo;
}

void insertarCola(int valor) {
	Nodo *nuevoNodo = new Nodo(valor);
	nuevoNodo->anterior = cola->anterior;
	//apunta a la cola
	nuevoNodo->siguiente = cola;

	cola->anterior->siguiente = nuevoNodo;
	cola->anterior=nuevoNodo;
}

void eliminarCabeza() {
	Nodo *nuevoNodo=cabeza->siguiente->siguiente;
	delete cabeza->siguiente;

	//actualizamos punteros

	cabeza->siguiente = nuevoNodo;
	nuevoNodo->anterior = cabeza;
}
void eliminarCola() {
	Nodo *nuevoNodo=cola->anterior->anterior;
	delete cola->anterior;

	//actualizamos punteros

	cola->anterior = nuevoNodo;
	nuevoNodo->siguiente = cola;
}

void busqueda(int valor) {
	Nodo *nuevoNodo=new Nodo();
	nuevoNodo= cabeza;
	bool bandera = false;
	//se recorre la lista
	if(cabeza!=NULL){
		while(nuevoNodo!=NULL&&bandera!=true){
			if(nuevoNodo->valor ==valor){
				cout<<"El dato "<<valor<<" si se encuentra en la Lista\n\n";
				bandera=true;
			}
			nuevoNodo = nuevoNodo->siguiente;
		}
		if(bandera==false){
		cout<<"No se encontro el valor en la Lista";
		}
	}else{
		cout<<"Lista Vacia";
	}
}
void imprimirListaCabeza() {
	Nodo *nuevoNodo = cabeza->siguiente;
	while(nuevoNodo != cola){
		cout << nuevoNodo->valor << " -> ";
		nuevoNodo = nuevoNodo->siguiente;
	}
}
void imprimirListaCola(){
	Nodo *nuevoNodo = cola->anterior;
	while(nuevoNodo != cabeza){
		cout << nuevoNodo->valor << " -> ";
		nuevoNodo = nuevoNodo->anterior;
	}
}

};