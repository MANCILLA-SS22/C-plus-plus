/*Ejercicio 4: Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar
el menor elemento del arreglo.*/

#include<iostream>
using namespace std;


void pedirDatos();
int menorElemento(int arreglo[100], int nElementos, int *direcNumero);
int nElementos,arreglo[100],*direcNumero;

int main()
{
	pedirDatos();
	
	cout<<"\nEl numero menor del arreglo es: "<<menorElemento(arreglo,nElementos,direcNumero)<<" y su posicion es: "<<direcNumero;

	system("pause");
	return 0;
}

void pedirDatos()
{
	cout<<"Digite la cantidad de elementos del arreglo: ";
	cin>>nElementos;
	
	direcNumero = &arreglo[0];
	for(int i=0;i<nElementos;i++)
	{
		cout<<"Digite un numero ["<<i<<"]: ";
		cin>>arreglo[i];
	}
}

int menorElemento(int arreglo[], int nElementos, int *direcNumero)
{
	int menor=9999;
	
	direcNumero = &arreglo[0];
	for(int i=0;i<nElementos;i++)
	{
		if(*direcNumero<menor)
		{
			menor=*direcNumero;
		}
		*direcNumero++;
	}
	return menor;
}
