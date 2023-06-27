/*Ejercicio 17: Suma de n�meros Complejos*/
#include<iostream>
#include<stdlib.h>
using namespace std;

//Creamos la estrcutura
struct Complejos
{
	float real=0, imaginaria=0;
}num[100];
int n, i, sumR=0, sumI=0;

void PedirDatos();
void suma(Complejos [100]);

int main()
{	
	PedirDatos();
	suma(num);
	
	cout<<"\n";
	system("pause");
	return 0;
}

//Definimos las acciones de las funciones

void PedirDatos()
{
	cout<<"Ingrese la cantidad de numeros complejos a sumar: "; cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"\n#"<<i+1<<endl;
		cout<<"Ingrese parte real: "; cin>>num[i].real;
		cout<<"Ingrese parte imaginaria: "; cin>>num[i].imaginaria;
	}
}

void suma(Complejos num[100])
{
	for(i=0; i<n;i++)
	{
		sumR = sumR + num[i].real;
		sumI = sumI + num[i].imaginaria;
	}
	
	if(sumI>0)
	{
		cout<<"Resultado: "<<sumR<<"+"<<sumI<<"i"<<endl;
	}
	
	else
	{
		cout<<"Resultado: "<<sumR<<" "<<sumI<<"i"<<endl;
	}
	
}
