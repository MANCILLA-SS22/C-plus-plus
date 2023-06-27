/*Ejercicio 4: Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier número introducido 
por el usuario. Por ejemplo, si se introduce el número 256.879, debería desplegarse el número 0.879.*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();

float devolucionFraccionaria(float num);
float num, resultado;
int entero;

int main()
{
	pedirDatos();
	cout<<"La parte fraccionaria del numero "<<num<<" es: "<<devolucionFraccionaria(num)<<endl;
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite un numero: ";
	cin>>num;
}

float devolucionFraccionaria(float num)
{
	entero = num; //por ejemplo si el numero es 45.567 en entero solo se guardaria 45	
	resultado = num - entero; //y por ultimo restamos el valor flotante menos el entero para tener la parte fraccionaria
	
	return resultado;	
}
