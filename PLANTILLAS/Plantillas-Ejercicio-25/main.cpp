#include <iostream>
#include "EjemploPlantilla.h"
using namespace std;

int main(int argc, char** argv) 
{
	EjemploPlantilla<int,float> ob1(5,9.87);//Asi es como se crean objetos de plantillas de clases.
	ob1.MostrarDatos();
	
	ob1.setDATO1(10);
	ob1.setDATO2(19.43);
	
	cout<<endl;
	
	ob1.MostrarDatos();
	
	return 0;
}
