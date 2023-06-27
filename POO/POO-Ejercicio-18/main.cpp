#include <iostream>
#include"Poligono.h"
#include"Rectangulo.h"
#include"Triangulo.h"
using namespace std;

int main(int argc, char** argv) 
{
    /*En el arreglo de objetos de la clase base,se anaden las clases derivadas, en las cuales ahi si se pueden instanciar los objetos.
	Es muy importante recalcar no instanciar objetos de la clase abstracta, sino unicamente en las clases derivadas. En resumidas 
	cuentas, primero hacemos que las clases derivadas se metan en un arreglo de su clase base gracias al polimorfismo.
	A continuacion se muestra del arreglo de objetos*/
	Poligono *x[2];
	x[0] = new Rectangulo(7,4);
	x[1] = new Triangulo (3,4,4);
	
	for(int i=0;i<2;i++)
	{
		cout<<"Area: "<<x[i]->area()<<endl;
		cout<<"Perimetro: "<<x[i]->perimetro()<<endl;
	}
	
	return 0;
}
