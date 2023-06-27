/*Ejercicio 4: Rellenar un arreglo con n numeros, posteriormente utilizando punteros
determinar el menor elemento del vector.*/
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int nElementos, numeros[100], *dir_numeros, menor=999999;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>nElementos;
	
	for(int i=0;i<nElementos;i++)
	{
		cout<<i+1<<". Digite un numero: ";
		cin>>numeros[i]; //Guardamos los elementos en el arreglo
	}
	
	dir_numeros = &numeros[0];
	for(int i=0;i<nElementos;i++)
	{//Determinamos el menor elemento en cada
		if(*dir_numeros < menor)
		{//iteracion del bucle
			menor = *dir_numeros;
		}
		dir_numeros++;
	}
	
	cout<<"\nEl menor elemento es: "<<menor<<endl;
	cout<<"Su posicion es: "<<dir_numeros<<endl;
	getch();
	return 0;
}
