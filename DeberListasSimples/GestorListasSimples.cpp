//UNIVERSIDAD DE LAS FUERZAS ARMADAS "ESPE"
//CREAR FUNCIONES PARA INGRESAR DATOS Y CONVERTIRLOS EN ENTEROS /FLOTANTES/STRING Ó CHAR.
//FECHA DE CREACION 11/05/2022
//FECHA DE MODIFICACION 12/05/2022
//GRUPO #9 
//INTEGRANTES: Ramirez Ortiz Erick Patricio 
//             Yanez Gutierrez Michelle Estefania 
// GITHUB DEL GRUPO:epramirez2@espe.edu.ec  
// https://github.com/ErickRamirezO/Trabajos-Grupo-9

#include <iostream>
#include "Lista.h"
#include "Nodo.h"
using namespace std;
int main()
{
	int opc;
	Lista lst;
	do{
		system("cls");
		printf("\n\n\t\t\t MENU \n\n\n");
		printf("\t\t(1.) Ingreso de Datos\n");
		printf("\t\t(2.) Mostrar Datos\n");
		printf("\t\t(3.) Buscar en la Lista\n");
		printf("\t\t(4.) Eliminar Dato\n");
		printf("\t\t(5.) Sumar elementos de la Lista\n");
		printf("\t\t(0.) Salir\n");
		printf("\t\t(?.) Escoja:  ");
		scanf("%d",&opc);
		switch (opc)
		{
			case 1:{
				printf("\n");
				lst.ingreso();
				printf("\n\n");
				system("pause");
				break;
			}
			case 2:{
				printf("\n");
				lst.mostrar();
				printf("\n\n");
				system("pause");
				break;
			}
			case 3:{
				printf("\n");
				lst.buscar();
				printf("\n");
				printf("\n\n");
				system("pause");
				break;
			}
			case 4:{
				printf("\n");
				lst.eliminar(); 
				lst.mostrar();
				printf("\n\n");
				system("pause");
				break;
			}
			case 5:{
				printf("\n");
				lst.sumaLista();
				printf("\n\n");
				system("pause");
				break;
			}
			case 0:{
				printf("\n\t\tEl programa se ha cerrado...");
				printf("\n\n\n");
				system("pause");
				break;
			}
			default:{
				printf("\n\t\t Ingreso no validos \n\t\tIntentelo nuevamente.");
				printf("\n\n\n");
				system("pause");
				break;
			}
		}
	}while (opc!=0);
	return 0;
}