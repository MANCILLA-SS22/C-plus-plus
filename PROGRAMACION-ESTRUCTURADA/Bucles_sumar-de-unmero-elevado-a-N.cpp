//11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{
	int n, res=0;

	cout<<"Dijite el limite: ";
	cin>>n;

	for (int i = 1; i <= n; i++)
	{
		res = res + pow(2,i);
	}

	cout<<"El resultado final es: "<<res;
	

	getch();
	system("cls");
	return 0;
}
