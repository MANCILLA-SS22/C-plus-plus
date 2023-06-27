/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros 
positivos, sin utilizar la funcion pow.*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{
	int x,y,res=1;

	cout<<"Digite el numero: "; cin>>x;
	cout << "Digite el exponente de ese numero: ";cin >> y;

	for (int i = 1; i <= y; i++)
	{
		res = res*x;
	}

	cout<<"El resultado es: "<<res;
	

	getch();
	system("cls");
	return 0;
}
