#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "Datos.h"

int main(int argc, char** argv) {
	Numero p;
	char dato[10];
	int valor=0;
	strcpy(dato,p.ingresoDatos("Ingrese el dato"));
	valor=atoi(dato);
	valor=valor*2;
	printf("\nresultado %d......",valor);
	return 0;
}