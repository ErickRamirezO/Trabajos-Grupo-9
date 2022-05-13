
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
class Numero{
	
	public: 
		char *ingresoDatos(char*);
};

char* Numero::ingresoDatos(char *msj){
	
	char *dato=new char[10],c;
	int i=0;
	printf("%s",msj);
	
	while((c=getch())!=13){
		if(c>='0'&& c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}
	}
	dato[i]='\0';
	return dato;
}