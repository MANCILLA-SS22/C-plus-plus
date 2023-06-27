//Metodo Burbuja

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int array[5] = {2,3,1,5,4};
	int i,j,aux;
	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(array[j] > array[j+1])
			{
				aux = array[j];
				array[j] = array[j+1];
				array[j+1] = aux;
			}
		}
	}
	
	cout<<"Numeros de forma Ascendente: ";
	for(i=0;i<5;i++){
		cout<<array[i]<<" ";
	}
	
	cout<<"\nNumeros de forma Descendente: ";
	for(i=4;i>=0;i--){
		cout<<array[i]<<" ";
	}
	
	getch();
	return 0;
}


/*
//Ordenamiento por Insercion
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i;
    int numeros[] = {5,2,3,1,4};
    
    for(i = 0; i < 5; i++)
    {
        int pos = i; //pos es la posicion del vector, el cual va desde 0 a 4 en ese orden
        int aux = numeros[i]; //aux es el numero que se encuentra dentro del vector, el cual es un valor aleatorio

        while(pos > 0 && numeros[pos - 1] > aux) //si el numero que se encuentra en la posicion anterior e
        {
            numeros[pos] = numeros[pos - 1];
            pos--;
        }
        numeros[pos] = aux;
    }

    cout<<"Orden Ascendente: ";
    for(int i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }

    cout<<"\nOrden Descente: ";
    for(int i = 4; i >= 0; i--)
    {
        cout << numeros[i] << " ";
    }
    cout<<"\n";

    getch();
    return 0;
}
*/

/*
//Ordenamiento por Seleccion

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[] = {3,4,5,2,1};
	int i,j,aux,min;
	
	//Algoritmo del Ordenamiento por Seleccion
	for(i=0;i<5;i++)
	{
		min = i;
		for(j=i+1;j<5;j++)
		{
			if(numeros[j] < numeros[min])
			{
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
*/
