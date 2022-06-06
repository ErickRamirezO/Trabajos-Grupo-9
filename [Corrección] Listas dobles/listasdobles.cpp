#include "listasdobles.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

ListasDobles::listasDobles(){}

void ListasDobles::Insertar(Nodito *lista, int v)
{
	Nodito nuevo, actual;
	/* Crear un nodo nuevo */
	nuevo = (Nodito)malloc(sizeof(Nodito));
	
	//nuevo = new Nodito;
	nuevo->valor = v;
	/* Colocamos actual en la primera posición de la lista */
	actual = *lista;
	if(actual) while(actual->anterior) actual = actual->anterior;
	/* Si la lista está vacía o el primer miembro es mayor que el nuevo */
	if(!actual || actual->valor > v) {
		/* Añadimos la lista a continuación del nuevo nodo */
		nuevo->siguiente = actual;
		nuevo->anterior = NULL;
		if(actual) actual->anterior = nuevo;
		if(!*lista) *lista = nuevo;
	}
	else {
			/* Avanzamos hasta el último elemento o hasta que el siguiente tenga
			un valor mayor que v */
			while(actual->siguiente &&actual->siguiente->valor <= v)
			actual = actual->siguiente;
			/* Insertamos el nuevo nodo después del nodo anterior */
			nuevo->siguiente = actual->siguiente;
			actual->siguiente = nuevo;
			nuevo->anterior = actual;
			if(nuevo->siguiente) 
			nuevo->siguiente->anterior = nuevo;
		}
	}

void ListasDobles::Borrar(Nodito *lista, int v)
{
		Nodito nodo;
		/* Buscar el nodo de valor v */
		nodo = *lista;
		while(nodo && nodo->valor < v) 
		nodo = nodo->siguiente;
		while(nodo && nodo->valor > v) 
		nodo = nodo->anterior;
		/* El valor v no está en la lista */
		if(!nodo || nodo->valor != v) 
		return;
		/* Borrar el nodo */
		/* Si lista apunta al nodo que queremos borrar, apuntar a otro */
		if(nodo == *lista)
		if(nodo->anterior) 
		*lista = nodo->anterior;
		else *lista = nodo->siguiente;
		if(nodo->anterior) /* no es el primer elemento */
		nodo->anterior->siguiente = nodo->siguiente;
		if(nodo->siguiente) /* no es el último nodo */
		nodo->siguiente->anterior = nodo->anterior;
		free(nodo);

	}
	void ListasDobles::BorrarLista(Nodito *lista)
	{
		Nodito nodo, actual;
		actual = *lista;
		while(actual->anterior) 
		actual = actual->anterior;
		while(actual) {
		nodo = actual;
		actual = actual->siguiente;
		free(nodo);
		}
		*lista = NULL;
	}
	
	
void ListasDobles::MostrarLista(Nodito lista, int orden)
	{
	Nodito nodo = lista;
	if(!lista) printf("Lista vacía");
	nodo = lista;
	if(orden == ASCENDENTE) {
	while(nodo->anterior) 
	nodo = nodo->anterior;
	printf("Orden ascendente: ");
	while(nodo) {
	printf("%d -> ", nodo->valor);
	nodo = nodo->siguiente;
	}
	}
	else
	{
		while(nodo->siguiente)
		 nodo = nodo->siguiente;
		printf("Orden descendente: ");
		while(nodo)
		{
			printf("%d -> ", nodo->valor);
			nodo = nodo->anterior;
		}
	}
	printf("\n");
} 
