/* UFA-ESPE
	Separar en clases el ejercicio realizado en clase
	Autores: Ramirez Ortiz Erick Patricio 
             Yanez Gutierrez Michelle Estefania 
	Fecha de creación: 11-05-2022
	Fecha de modificación: 12-05-2022
	Grupo 9 
	Github del grupo: epramirez2@espe.edu.ec  
                      meyanez5@espe.edu.ec
https://github.com/ErickRamirezO/Trabajos-Grupo-9
*/

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