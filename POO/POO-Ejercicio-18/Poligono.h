#ifndef POLIGONO_H
#define POLIGONO_H

#include <iostream>
using namespace std;

class Poligono /*La clase poligono es una clase abstracta, por lo cual no se pueden instanciar objetos, sino crearlos unicamente.*/
{
	public:
		virtual float perimetro() = 0;//Al utilizar metodos virtuales, automaticamente "Poligono" se vuelve una clase abstracta.
		virtual float area() = 0;
};

#endif
