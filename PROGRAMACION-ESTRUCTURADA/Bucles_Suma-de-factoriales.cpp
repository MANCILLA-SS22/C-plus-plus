/*10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n!  (suma de factoriales).*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{

	int n, res = 1, suma=0;

	cout << "Dijite el valor limite: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		res = res * i;
		suma = suma + res;
	}

	cout << "El resultado final es: " << suma;

	getch();
	system("cls");
	return 0;
}