#include <iostream>
#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

bool validar_numeros(char numero[])
{
    int i;
    for(i=0; i<strlen(numero); i++)
    {
        if(!(numero[i]>=48 && numero[i]<=57))
        {
            printf("ERROR Ingresa numeros\n");
            return false;
        }
    }
    return true;
}