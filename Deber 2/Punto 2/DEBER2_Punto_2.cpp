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
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>

char ingresoDatos(char);
char *ingresoDatosEntero(char *msj){
	char *dato=new char[10],c;
	int i=0;
	printf("%s ",msj);
	while((c=getch())!=13){
		if(c>='0'&& c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';
	return dato;
}

char *ingresoDatosFlotantes(char *msj){
	char *dato=new char[10],c;
	int i=0;
	printf("%s ",msj);
	while((c=getch())!=13 ){
		if(c>='0'&& c<='9' || c=='.'){
			printf("%c",c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';
	return dato;
}

char *ingresoStrings(char *msj){
	char *dato=new char[10],c;
	int i=0;
	printf("%s ",msj);
	while((c=getch())!=13 ){
		printf("%c",c);
		dato[i++]=c;
	}
	dato[i]='\0';
	return dato;
}

int main(int argc, char** argv) {
	char dato[10];
	int valor=0;
	float valorFlotante=0;
	strcpy(dato,ingresoDatosEntero("Ingrese el dato: "));
	valor=atoi(dato);
	strcpy(dato,ingresoDatosFlotantes("\nIngrese el dato: "));
	valorFlotante=atof(dato);
	strcpy(dato,ingresoStrings("\nIngrese el dato: "));
	printf("\nResultado Entero: %d......",valor);
	printf("\nResultado Flotante: %.2f......",valorFlotante);
	printf("\nResultado String: %s......",dato);
	return 0;
}
