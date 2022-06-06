#pragma once

class Nodo {
public:
	Nodo(int val, Nodo*);
	friend class Lista;
private:
	int valor;
	Nodo* siguiente;
};