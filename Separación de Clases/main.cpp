#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "ingresodatos.h"
#include <cstring>
using namespace std;

int main() {
	IngresarDatos ingreso1;
	char dato[10];
	int valor=0;
	strcpy(dato,ingreso1.ingresoDatosEntero("Ingrese el 			dato"));
	valor=atoi(dato);
	valor=valor*2;
	printf("\nresultado %d......",valor);
	return 0;
  
}