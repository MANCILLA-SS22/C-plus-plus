/*Ejercicio 2: Escriba una funci�n llamada al_cuadrado() que calcule el cuadrado del 
valor que se le transmite y despliegue el resultado. La funci�n deber� ser capaz de
elevar al cuadrado n�meros flotantes*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void al_cuadrado(float n);

float n;
int main()
{
	pedirDatos();	
	al_cuadrado(n);
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite un numero: ";
	cin>>n;
}

void al_cuadrado(float n)
{
	float cuadrado=0;
	
	cuadrado = n*n;
	
	cout<<"El cuadrado del numero es: "<<cuadrado<<endl;
}
