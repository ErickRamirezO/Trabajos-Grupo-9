
#ifndef LISTASDOBLES_H
#define LISTASDOBLES_H
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define ASCENDENTE 1
#define DESCENDENTE 0
class ListasDobles
{
	typedef ListasDobles *Nodito;
	private:
		ListasDobles *siguiente;
		ListasDobles *anterior;	
		int valor;
	public:
		listasDobles();
		ListasDobles a();
		void Insertar(Nodito *, int);
		void Borrar(Nodito *, int);
		void BorrarLista(Nodito *);
		void MostrarLista(Nodito , int);
	
};
typedef ListasDobles *Nodito;
#endif
