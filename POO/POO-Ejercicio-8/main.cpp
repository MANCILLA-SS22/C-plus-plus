/*Ejercicio 2: Construir un programa que calcule el area y el perimetro de un 
cuadrilatero dada la longitud de sus lados. Los valores de la longitud deberan
introducirse por linea de ordenes. Si es un cuadrado, solo se proporcionara la longitud
de uno de los lados del constructor.*/
#include <iostream>
#include "cuadrialtero.h"
using namespace std;

int main(int argc, char** argv) 
{
	float lado1, lado2;
	cout<<"Digite el lado 1: ";
	cin>>lado1;
	cout<<"Digite el lado 2: ";
	cin>>lado2;
	
	/* Primer objeto de tipo dinamico. En este caso aun no inicializamos el objeto llamando a ningun constructor porque primero
	necesitamos que el usuario nos mande los datos. Por lo tanto, primero se crea el objeto, y dentro del if, verificar
	si los lados son iguales o no, para de esa manera podamos saber cual constructor es el que vamos a utilizar (recordar que 
	ambos constructores tienen el mismo nombre y es una sobrecarga). Y una vez sabiendo cual constructor vamos a usar, ahi si
	podremos inicializar el objeto dinamico, mandandole a llamar su constructor*/
	cuadrialtero *c1;//Creacion de objeto dinamico (sin inicializarlo porque no sabemos aun cual de los 2 constructores vamos a llamar). 
	if(lado1==lado2)
	{
		c1 = new cuadrialtero(lado1);
	}
	
	else
	{
		c1 = new cuadrialtero(lado1,lado2);
	}
	
	cout<<"El perimetro es: "<<c1->obtenerPerimetro()<<"cm"<<endl;
	cout<<"El area es: "<<c1->obtenerArea()<<"cm^2"<<endl;
	
	return 0;
}
