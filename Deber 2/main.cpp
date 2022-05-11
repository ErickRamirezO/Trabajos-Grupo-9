#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

char *ingresoDatos(char*);
char *ingresoDatos(char *msj){
	char dato[10],c;
	int i=0;
	printf("%s",msj);
	//getch se usa para ingresar caracter sin eco (no aparece en pantalla)
	//poner igual al punto 
	//que solo admita un solo punto 
	//hacer que borre todo
	while((c=getch())!=13){
		if(c>='0'&&c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';
	return dato;
}
int main() {
	char dato[10];
	int valor=0;
    strcpy(dato,ingresoDatos("Ingrese el dato: "));
	valor =atoi(dato);
	return 0;
}

//funcion virtual o una interfaz 
//con una clase abstracta para que solo llame a esa funcipón
//crear una funcion para que ingrese datos enteros
//otra funciópn para datos reales
// y otra funcion
//en otra clase otra funcion que retorne un string
//de las 3 funciones que hacen van a hacer una sola
//menu entero flotante 
//excepcion 
