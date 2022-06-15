#include <iostream>
#include "Nodo.h"
#include "Pila.h"

using namespace std;

Pila :: Pila(){//Constructor
    tope = NULL;//Inicializamos el tope a NULL
}

Pila :: ~Pila(){//Destructor
    Nodo *aux;//Declaramos un nodo auxiliar
    while(tope != NULL){//Mientras el tope no sea NULL
        aux = tope;//Asignamos el valor del tope al nodo auxiliar
        tope = tope->getSiguiente();//Asignamos el valor del siguiente del tope al tope
        delete aux;//Eliminamos el nodo auxiliar
    }
}

void Pila :: push(int dato){//Metodo para insertar un nodo
    Nodo *nuevo = new Nodo(dato, tope);//Declaramos un nuevo nodo con el dato y el tope
    tope = nuevo;//Asignamos el valor del nuevo nodo al tope
    cout << "Elemento insertado" << endl;
}

int Pila :: pop(){//Metodo para eliminar un nodo
    int dato;//Declaramos una variable para almacenar el dato
    if(tope == NULL){//Si el tope es NULL
        cout << "La pila esta vacia" << endl;//Imprimimos que la pila esta vacia
        return 0;//Retornamos 0
    }else{
        Nodo *aux = tope;//Declaramos un nodo auxiliar
        tope = (*aux).getSiguiente();//Asignamos el valor del siguiente del tope al tope
        dato = (*aux).getDato();//Asignamos el valor del dato del nodo auxiliar al dato
        delete aux;//Eliminamos el nodo auxiliar
        cout << "Se elimino el elemento: " << dato << endl;//Mostramos el dato eliminado
        return dato;//Retornamos el dato       
    }
} 

void Pila :: mostrar(){//Metodo para mostrar la pila
    Nodo *aux = tope;//Declaramos un nodo auxiliar
    while(aux != NULL){//Mientras el nodo auxiliar no sea NULL
        cout << (*aux).getDato() << " ";//Mostramos el dato del nodo auxiliar
        aux = (*aux).getSiguiente();//Asignamos el valor del siguiente del nodo auxiliar al nodo auxiliar
    }
    cout << endl;//Salto de linea
}