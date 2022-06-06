#ifndef NULL
#define NULL (0)
#endif
#include "Nodo.h"

Nodo::Nodo(int val, Nodo* sig = NULL) {
	this->valor = val;
	this->siguiente = sig;
}