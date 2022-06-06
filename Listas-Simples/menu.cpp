#include "Lista.h"
#include "validar.cpp"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void menu(Lista lista) {
  int valor;
  char dato[10],opcion[10];
    bool valido=false;
  do {
    cout << "\n\t\tMENU PRINCIPAL\n";
    cout << "\t1.-Insertar por la cabeza\n";
    cout << "\t2.-Insertar por la cola\n";
    cout << "\t3.-Eliminar por la cabeza\n";
    cout << "\t4.-Eliminar por la cola\n";
    cout << "\t5.-Buscar un elemento\n";
    cout << "\t6.-Imprimir por la cola\n";
    cout << "\t7.-Imprimir por la cabeza\n";
    cout << "\t8.-Salir\n";
    do{
        cout<<"Ingresa una opcion: ";
        scanf("%s",dato);
        valido=validar_numeros(dato);
        valor=atoi(dato);
      }while(valido==false);
    switch (valor) {
    case 1:
      system("cls");
      printf("\tInsertar por la cabeza\n\n");
      do{
        cout<<"Ingresa el valor: ";
        scanf("%s",dato);
        system("cls");
        valido=validar_numeros(dato);
      }while(valido==false);
	      	valor=atoi(dato);
	    	// llamada a la función ingresar al inicio
		    lista.agregarInicio(valor);
		    cout<<"Se agregó el valor a la lista\n";
      system("pause");
      system("cls");
      break;

    case 2:
      system("cls");
      printf("\tInsertar por la cola\n\n");
      do{
        cout<<"Ingresa el valor: ";
        scanf("%s",dato);
        system("cls");
        valido=validar_numeros(dato);
      }while(valido==false);
    	valor=atoi(dato);
    	// llamada a la función ingresar al inicio
	    lista.agregarFinal(valor);
	    cout<<"Se agregó el valor a la lista\n";
      system("pause");
      system("cls");
      break;

    case 3:
      system("cls");
      printf("\tEliminar por la Cabeza\n\n");
      // llamada a la función eliminarola
		lista.eliminarCabeza();
		cout<<"Se ha eliminado satisfatoriamente el primer elemento de la lista\n\n";
      system("pause");
      system("cls");
      break;

    case 4:
      system("cls");
      printf("\tEliminar por la Cola\n\n");
      // Llamada a la función eLiminarCabeza
		lista.eliminarCola();
		cout<<"Se ha eliminado satisfatoriamente el último elemento de la lista\n\n";
      system("pause");
      system("cls");
      break;

    case 5:
      system("cls");
      printf("\tBuscar un elemento\n\n");
      // llamada a la función buscars
      do{
        cout<<"Ingresa el valor: ";
        scanf("%s",dato);
        system("cls");
        valido=validar_numeros(dato);
      }while(valido==false);
      	valor=atoi(dato);
    	// llamada a la función ingresar al inicio
	    lista.buscar(valor);
	     system("pause");
      system("cls");
      break;
    case 6:
      system("cls");
      printf("\tImprimir por la cola\n\n");
      lista.imprimirCola();
      system("pause");
      system("cls");
      break;
    case 7:
      system("cls");
      printf("\tImprimir por la cabeza\n\n");
      // llamada a la función mostrarLista
      lista.imprimirLista();
      system("pause");
      system("cls");
      break;
      case 8:
      system("cls");
        	Lista lista_2;
      printf("\tMinimo Comun multiplo\n\n");
      // llamada a la función mostrarLista
      lista.IngresoDatosNuevaLista();
      lista_2.imprimirLista(lista_2);
      system("pause");
      system("cls");
      break;

    default:
      cout << "Salio con exito!!!!." << endl;
      break;
    }
  } while (valor != 9);
}
