#include <iostream>
#include <string> 
#include"Perro.h"
using namespace std;

int main(int argc, char** argv) 
{
	Perro perro1("Fido", "Doberman");//Arreglo estatico
	perro1.mostrarDatos();
	perro1.jugar();	
	
	Perro* perro2 = new Perro("Sasa", "Pitbull");//Arreglo dinamico
	perro2->mostrarDatos();
	perro2->jugar();
	delete perro2;
	
	return 0;
}
