//UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
//Corrección programa de listas doblemente enlazadas.
//FECHA DE CREACION 01/06/2022
//FECHA DE MODIFICACION 02/06/2022
//GRUPO #9 
//INTEGRANTES: Ramirez Ortiz Erick Patricio 
//             Yanez Gutierrez Michelle Estefania 
// GITHUB DEL GRUPO:  
// https://github.com/ErickRamirezO/Trabajos-Grupo-9

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "listasdobles.cpp"
#define ASCENDENTE 1
#define DESCENDENTE 0

int main(int argc, char** argv) {
	Nodito lista=NULL;
	lista;
	Nodito p;
	char op;
	int val;
	ListasDobles a;
	do{
		printf("\n Ingrese el elemento a la lista : ?");
		scanf("%d",&val);
		lista->Insertar(&lista, val);
		printf("\n El valor se agrego a la lista ?");
		printf("\n Desea ingreasar otro s/n?\n"); 
		op=getche();
		op=toupper(op);
	}while(op=='S');
	lista->MostrarLista(lista, ASCENDENTE);
	lista->MostrarLista(lista, DESCENDENTE);
	do{
		printf("\n Ingrese el elemento a Borrar : ?");
		scanf("%d",&val);
		lista->Borrar(&lista, val);
		lista->MostrarLista(lista, ASCENDENTE);
		lista->MostrarLista(lista, DESCENDENTE);
		printf("\n Desea ingreasar otro elemento a borar s/n?\n"); 
		op=getche();
		op=toupper(op);
	}while(op=='S');

	lista->MostrarLista(lista, ASCENDENTE);
	lista->MostrarLista(lista, DESCENDENTE);
	lista->BorrarLista(&lista);
	system("PAUSE");
	//MostrarLista(lista, ASCENDENTE);
	//MostrarLista(lista, DESCENDENTE);
	return 0;

}
