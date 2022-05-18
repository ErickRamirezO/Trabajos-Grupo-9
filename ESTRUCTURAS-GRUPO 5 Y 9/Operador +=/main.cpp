#include <iostream>
#include<string>
#include<list>
using namespace std;
/*
	Universidad de las Fuerzas Armadas "ESPE"
	Ejercicio operador +=
	Arias Xavier, Escobar David, Ramírez Erick, Yánez Michelle
	Fecha de creación: 17/05/2022
	Fecha de modificación: 17/05/2022
	Grupo 5 y 9
	https://github.com/EscobarDavid/Grupo5_4698_EstructuraDeDatos
	https://github.com/ErickRamirezO/Trabajos-Grupo-9
*/

struct Canal{
	string Nombre;
	int Suscriptores;
	//Constructor
	Canal(string nombre, int suscriptores){
		Nombre = nombre;
		Suscriptores = suscriptores;
	}
	
};

ostream& operator<<(ostream& COUT, Canal& canal) {
    COUT << "Nombre: " << canal.Nombre << endl;
    COUT << "Contador: " << canal.Suscriptores << endl;
    return COUT;
}

struct Coleccion{
	list<Canal>miscanales;
	void operator +=(Canal canal){
		this->miscanales.push_back(canal);
	}
};

ostream& operator<<(ostream& COUT, Coleccion& miColeccion) {
    for (Canal canal : miColeccion.miscanales)
        COUT << canal << endl;
    return COUT;
}

int main() {
	Canal canal1 = Canal("Noticias",109);
	Canal canal2 = Canal("Deportes",11100);
	Coleccion miColeccion;
	miColeccion += canal1;
	miColeccion += canal2;
	cout << miColeccion;
	return 0;
}