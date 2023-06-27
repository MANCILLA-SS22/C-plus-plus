/*5. Escriba un programa que lea valores enteros hasta que se introduzca un 
valor en el rango [20-30] o se introduzca el valor 0. El programa debe 
entregar la suma de los valores mayores a 0 introducidos.*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{
	int n, suma=0;

	do{
		
		cout<<"Ingresa un numero: ";
		cin>>n;

		if (n>0)
		{
			suma = suma + n;
		}
		

	}while(( (n < 20) || (n > 30)) && (n!=0) );

	cout<<"La suma total es: "<<suma;

	getch();
	return 0;
}
