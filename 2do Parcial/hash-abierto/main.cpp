#include<iostream>
#include<map>
#include <iterator>
#include<string>
using namespace std;

void menu(map<int,int> Hash);

int main(){
	//<clave,valor> 
    map<int,int> Hash;
	menu(Hash);
	return 0;
}

void menu(map<int,int> Hash){
	int opcion,valor_insertar,i,c;
	do{
		cout<<"Hash Abierto\n\n1) Insertar elemento\n2) Eliminar elemento\n3)Imprimir\n\nIngrese una opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1:
				do{
					cout<<"Ingrese el valor a insertar: ";
					cin>>valor_insertar;
					Hash.insert(pair<int,int>(i,valor_insertar));
					cout<<"¿Desea insertar un nuevo valor?: (1=si,2=no)";
					cin>>c;
					i++;
				}while(c!=2);
				break;
			case 2:
				do{
					cout<<"Ingrese el valor a eliminar: ";
					cin>>valor_insertar;
					Hash.erase(valor_insertar);
					cout<<"¿Desea eliminar otro valor?: (1=si,2=no)";
					cin>>c;
				}while(c!=2);
			break;
			case 3:
				map<int, int>::iterator itr;
				for (itr = Hash.begin(); itr != Hash.end(); ++itr) {
        				cout << '\t' << itr->first << '\t' << itr->second
            		 << '\n';
    			}
				break;
		}	
	}while(opcion!=4);
	
}