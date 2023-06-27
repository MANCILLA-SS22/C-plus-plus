//8. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{
	int n, res=0;

	cout<<"Dijite el limite y que sea numero impar: "; cin>>n;

	if (n%2 == 1)
	{
		for (int i = 1; i <= n; i += 2)
		{
			res = res + i;
		}

		cout << "La suma de los numeros impares es: " << res;
	}

	else
	{
		cout<<"El numero ingresado no es valido.";
	}

	getch();
	system("cls");
	return 0;
}
