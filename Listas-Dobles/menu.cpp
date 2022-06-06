#include "Lista.h"
#include "validar.cpp"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void menu(ListaDoble listaDoble) {
  int valor,opcion1;
  char dato[10],opcion[10];
    bool valido=false;
  do {
    cout << "\n\t\tMENU PRINCIPAL\n";
	cout<< "Listas Doblemente Enlazadas\n";
    cout << "\t1.-Insertar por la cabeza\n";
    cout << "\t2.-Insertar por la cola\n";
    cout << "\t3.-Eliminar por la cabeza\n";
    cout << "\t4.-Eliminar por la cola\n";
    cout << "\t5.-Buscar un elemento\n";
    cout << "\t6.-Imprimir lista por cabeza\n";
    cout << "\t7.-Imprimir lista por cola\n";
    cout << "\t8.-Promedio\n";
    cout << "\t9.-Salir\n";
    do{
        cout<<"Ingresa una opcion: ";
        scanf("%s",opcion);
        valido=validar_numeros(opcion);
        opcion1=atoi(opcion);
      }while(valido==false);
    switch (opcion1) {
    case 1:
      system("cls");
      valor=0;
      printf("\tInsertar por la cabeza\n\n");
      do{
        cout<<"Ingresa el valor: ";
        scanf("%s",dato);
        system("cls");
        valido=validar_numeros(dato);
      }while(valido==false);
	      	valor=atoi(dato);
	    	// llamada a la función ingresar al inicio
		    listaDoble.insertarCabeza(valor);
		    cout<<"Se agrego el valor a la lista\n\n";
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
	    listaDoble.insertarCola(valor);
	    cout<<"Se agrego el valor a la lista\n\n";
      system("pause");
      system("cls");
      break;

    case 3:
      system("cls");
      printf("\tEliminar por la Cabeza\n\n");
      // llamada a la función eliminarola
		listaDoble.eliminarCabeza();
		cout<<"Se ha eliminado satisfatoriamente el primer elemento de la lista\n\n";
      system("pause");
      system("cls");
      break;

    case 4:
      system("cls");
      printf("\tEliminar por la Cola\n\n");
      // Llamada a la función eLiminarCabeza
		listaDoble.eliminarCola();
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
	    listaDoble.busqueda(valor);
	     system("pause");
      system("cls");
      break;
    case 6:
      system("cls");
      printf("\tImprimir Lista por Cabeza\n\n");
      // llamada a la función mostrarLista
      listaDoble.imprimirListaCabeza();
      system("pause");
      system("cls");
      break;
       case 7:
      system("cls");
      printf("\tImprimir Lista por Cola\n\n");
      // llamada a la función mostrarLista
      listaDoble.imprimirListaCola();
      system("pause");
      system("cls");
      break;
      case 8:
      system("cls");
      printf("\tNueva Funcion\n\n");
      // llamada a la nueva funcion
      system("pause");
      system("cls");
      break;

    default:
      cout << "Salio con exito!!!!." << endl;
      break;
    }
  } while (opcion1 != 9);
}
