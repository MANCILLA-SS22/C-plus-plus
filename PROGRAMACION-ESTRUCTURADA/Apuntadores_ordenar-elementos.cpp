/*Ejercicio 5: Pedir al usuario N n�meros, almacenarlos en un arreglo din�mico
posteriormente ordenar los n�meros en orden ascendente y mostrarlos en pantalla.
NOTA: Utilizar cualquier m�todo de ordenamiento. */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void ordenarNumeros(int *elemento, int nElementos);
void mostrarArregloOrdenado(int *elemento, int nElementos);

int nElementos, *elemento;

int main()
{
	pedirDatos();
	ordenarNumeros(&elemento[0], nElementos);	
	mostrarArregloOrdenado(&elemento[0], nElementos);
	
	delete[] elemento;
	
	getch();
	return 0;
}

void pedirDatos()
{//Pedimos los datos al usuario
	cout<<"Digite el numero de elementos: ";
	cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0;i<nElementos;i++)
	{
		cout<<"Digite un numero ["<<i<<"]: ";
		cin>>*(elemento+i); // elemento[i]
	}
}

void ordenarNumeros(int *elemento,int nElementos)
{
	int aux;
	
	for(int i=0;i<nElementos;i++) //Ordenamiento por metodo burbuja con punteros
	{
		for(int j=0;j<nElementos-1;j++)
		{
			if(*(elemento+j) > *(elemento+j+1)) // elemento[i] > elemento[i+1]
			{
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrarArregloOrdenado(int *elemento,int nElementos) //Mostrando Arreglo ordenado
{
	cout<<"\n\nMostrando Arreglo Ordenado: ";
	for(int i=0;i<nElementos;i++)
	{
		cout<<*(elemento+i)<<" ";
	}
}


