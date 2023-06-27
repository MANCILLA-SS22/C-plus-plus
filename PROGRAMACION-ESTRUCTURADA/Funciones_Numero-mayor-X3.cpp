#include<iostream>
#include<conio.h>
using namespace std;

int n1, n2;
int datos();
int mayor(int x, int y);

int main()
{
	datos();
	mayor(n1,n2);
	
	getch();
	return 0;
}

int datos()
{
	cout<<"Ingrese 2 numeros : "<<endl; cin>>n1>>n2;
}

int mayor(int x, int y)
{
	if(x==y)
	{
		cout<<"Los numeros son iguales "<<endl;
	}
	else if(x>y)
	{
		cout<<"El numero mayor es: "<<x<<endl;
	}
	else
	{
		cout<<"El numero mayor es: "<<y<<endl;
	}
}
