#include <iostream>
#include <string>
#include"Perro.h"

using namespace std;

void Perro::mostrarDatos()
{
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"raza: "<<raza<<endl;
}

void Perro::jugar()
{
	cout<<"El perrito "<<nombre<<" esta jugando.\n"<<endl;
}
