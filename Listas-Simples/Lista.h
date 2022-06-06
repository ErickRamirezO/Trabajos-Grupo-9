#pragma once
#include "Nodo.h"
#include "validar.cpp"
#include <iostream>
#include <algorithm>
using namespace std;

class Lista {
  int tamano;
  Nodo *principio;

public:
  int getTamano() { return this->tamano; }
  void setTamano(int tamano) { this->tamano = tamano; }
  Nodo *getPrincipio() { return this->principio; }
  void setPrincipio(Nodo *principio) { this->principio = principio; }
  Lista() {
    this->principio = nullptr;
    this->tamano = 0;
  }
  void agregarInicio(int valor) {
    Nodo *nuevo = new Nodo(valor, this->principio);
    this->principio = nuevo;
    this->tamano++;
  }
  void agregarFinal(int valor) {
    Nodo *nuevo = new Nodo(valor, nullptr);
    if (this->principio) {
      Nodo *actual = this->principio;
      while (actual->getSiguiente()) {
        actual = actual->getSiguiente();
      }
      actual->setSiguiente(nuevo);
    } else {
      this->principio = nuevo;
    }
    this->tamano++;
  }

void imprimirLista() {
	Nodo* actual = this->principio;
        while(actual){
            cout << actual->getValor() << " ";
            actual = actual->getSiguiente();
        }
    cout << endl;
  }
  
void buscar(double dato) {
    if(this->principio!= NULL){
        Nodo* actual = this->principio;
        while(actual != NULL){
            if(actual->getValor() == dato){
                cout << "El dato " << dato << " si se encuentra en la lista" << endl;
                return;
            }
            actual = actual->getSiguiente();
        }
        cout << "El dato " << dato << "No se encuentra en la lista" << endl;
    }else{
        cout << "La lista esta vacia" << endl;
    }
}

  void eliminarCabeza() {
    Nodo *actual = this->principio;
    this->principio = this->principio->getSiguiente();
    actual->setSiguiente(nullptr);
    delete actual;
    this->tamano--;
  }
  
  void IngresoDatosNuevaLista(Lista lista_2){
  	char dato[10];
  	int valor1=0,valor2=0,valor3=0,valor4=0;
  		do{
        cout<<"Ingresa el 1er valor: ";
        scanf("%s",dato);
        system("cls");
        valido=validar_numeros(dato);
    	}while(valido==false);
    	valor1=atoi(dato);
		do{
        cout<<"Ingresa el 2do valor: ";
        scanf("%s",dato);
        system("cls");
        valido=validar_numeros(dato);
    	}while(valido==false);		
      valor2 = atoi(dato);
      do{
        cout<<"Ingresa el 3er valor: ";
        scanf("%s",dato);
        system("cls");
        valido=validar_numeros(dato);
    	}while(valido==false);
    	valor3=atoi(dato);
		do{
        cout<<"Ingresa el 4to valor: ";
        scanf("%s",dato);
        system("cls");
        valido=validar_numeros(dato);
    	}while(valido==false);		
      valor4 = atoi(dato);
      //agrego mcm a nueva lista
        lista_2.agregarInicio(mcm(valor1,valor2));
        lista_2.agregarInicio(mcm(valor3,valor4));
    }

  int mcd(int numl,int num2){
    int mcd=0;
    int a=max(numl,num2);
    int b=min(numl,num2);
    do{
        mcd=b;
        b=a%b;
        a=mcd;
    }while(b!=0);
    return mcd;
}
  int mcm(int num1;int num2){
  	int mcm=0;
  	int max= max(num1,num2);
  	v min= min(num1,num2);
  	mcm = (max/mdc(max,min))*min;
  	return mcm;
  }

};