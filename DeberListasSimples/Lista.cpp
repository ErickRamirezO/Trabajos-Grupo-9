#include "Lista.h"
#include <iostream>

using namespace std;

Lista::Lista() {
	this->primero = NULL;
	this->actual = NULL;
}

void Lista::ingreso() {
	int n;
	do
	{
		system("cls");
		cout << "\n\t\tIngrese el valor : ";
		cin >> n;
		insertar(n);
		cout<<"\n\t\tEl valor se ha agregado.";
		cout <<"\n\t\tDesea agregar otro elemento? \n\t\t |SI-1|\n\t\t |NO-0|\n ";
		cout<<"\t\tPor favor ingrese una opcion, para escocger: ";
		cin >> n;
	} while (n != 0);
}

void Lista::insertar(int val) {
	Nodo* nuevo = new Nodo(val, NULL);
	if (listaVacia()) {
		this->primero = nuevo;
	}
	else {
		this->actual->siguiente = nuevo;
	}
	this->actual = nuevo;
}

void Lista::mostrar() {
	Nodo* tmp = this->primero;
	cout<<"\t\t";
	while (tmp) {	
		cout <<tmp->valor << "-->";
		tmp = tmp->siguiente;
	}
	cout << "NULL\n";
}

void Lista::buscar() {
	int val;
	cout << "\n\t\tQue elemento desea buscar? : ";
	cin >> val;
	int aux = 0;
	Nodo* num = new Nodo(val, NULL);
	Nodo* tmp = this->primero;
	while (tmp)
	{
		if (tmp->valor == num->valor)
		{
			aux++;
		}
		tmp = tmp->siguiente;
	}
	if (aux == 0)
	{
		cout << "\t\t El elemento NO existe en la lista";
	}
	else
	{
		cout << "\t\tEl elemento SI existe en la lista";
	}
}

void Lista::eliminar() {
	int val;
	cout << "\n\t\tQue numero desea eliminar?: ";
	cin >> val;
	Nodo* num = new Nodo(val, NULL);
	Nodo* tmp = this->primero;
	Nodo* aux = tmp;
	Nodo* final = this->actual;
	aux = tmp;
	while (aux)
	{
		if (aux->valor == num->valor)
		{
			if (aux == tmp)
			{
				*tmp = *tmp->siguiente;
			}
			else {
				final->siguiente = aux->siguiente;
			}

		}
		final = aux;
		aux = aux->siguiente;
	}
}

void Lista::sumaLista() {
	Nodo* tmp = this->primero;
	int valor=0;
	while (tmp) {
		valor += tmp->valor;
		tmp = tmp->siguiente;
	}
	cout << "\t\tLa suma de los elementos da: "<<valor<<endl;
}