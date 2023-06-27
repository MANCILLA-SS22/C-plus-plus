#include <iostream>
#include"cuadrialtero.h"
using namespace std;

float cuadrialtero::obtenerPerimetro()
{
	float perimetro = 2*(lado1+lado2);
	return perimetro;
}

float cuadrialtero::obtenerArea()
{
	float area = (lado1+lado2);
	return area;
}
