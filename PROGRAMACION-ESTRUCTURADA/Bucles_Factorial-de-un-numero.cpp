//9. Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{

	int n, res=1;

	cout<<"Dijite el valor limite: "; cin>>n;

	for (int i = 1; i <= n; i++)
	{
		res = res*i;
	}

	cout<<"El resultado final es: "<<res;
	

	getch();
	system("cls");
	return 0;
}
