#include <iostream>
#include<math.h>
#include"Triangulo.h"
using namespace std;

int main(int argc, char** argv) 
{
	Triangulo *ob1 = new Triangulo(3,5,6,7);
	cout<<"Numero de lados: "<<ob1->getX()<<endl;//Los miembros de la clase hija, pueden acceder a los miembros de la clase padre
	cout<<"Area: "<<ob1->areaTriangulo()<<endl;
	return 0; 
}
