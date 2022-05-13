#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "input.hpp"
#include <cstring>

int main() {
	char dato[10];
	int valor=0;
	char dato2[] = "Ingrese el dato";
	strcpy(dato,ingresoDatosEntero("Ingrese el dato"));
	valor=atoi(dato);
	valor=valor*2;
	printf("\nresultado %d......",valor);
	return 0;
  
}