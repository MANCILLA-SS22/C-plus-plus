#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

//Prototipos de Funcion
void pedirDatos();
float fraccionaria(float n);

int parteEntera;
float parteDecimal, numero;

int main()
{
	pedirDatos();
	cout<<"La parte decimal de su numero es: "<<fraccionaria(numero)<<endl;
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite un numero y se le entregara su parte fraccionaria (decimal): "; cin>>numero;
}

float fraccionaria(float n)
{
	parteEntera += n;
	parteDecimal = n - parteEntera;
	return parteDecimal;
}
