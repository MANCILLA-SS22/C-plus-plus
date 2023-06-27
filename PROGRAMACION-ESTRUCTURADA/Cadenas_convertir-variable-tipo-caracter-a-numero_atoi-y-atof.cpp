/* 8. Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y otro real,
	convertirlos a sus respectivos valores y por ultimo sumarlos.*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main() 
{
	char cadena_entero[20];
	char cadena_real[20];
	int  entero;
	float real;
	float suma;

	cout << "Digite un numero entero: "; cin >> cadena_entero;
	cout << "Digite un numero real: "; cin >> cadena_real;
	
	//Convierte un string a entero.
	entero = atoi(cadena_entero);
	//Convierte un string a decimal.
	real = atof(cadena_real);

	suma = entero + real;

	cout << "Suma: " << suma << endl;

	system("pause");
	return 0;
}
