/*Ejercicio 3: Escriba una funci�n nombrada funpot() que eleve un n�mero entero que 
se le transmita a una potencia en n�mero entero positivo y despliegue el resultado.
El n�mero entero positivo deber� ser el segundo valor transmitido a la funci�n.*/

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void funpot(int ,int);
int x,y;
int main()
{
	pedirDatos();
	funpot(x,y);
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite el numero a elevar: ";
	cin>>x;
	cout<<"Digite el exponetente de elevacion: ";
	cin>>y;
}

void funpot(int x,int y)
{
    int i;
	long resultado=1;
	for(i=1;i<=y;i++)
	{
		resultado *= x;
		//resultado = resultado * x;
	}
	
	cout<<"El resultado de la elevacion es: "<<resultado<<endl;
}
