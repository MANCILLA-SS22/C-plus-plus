#include <iostream>
#include"Intercambio.h"
using namespace std;

template <typename T>
void OrdenarAscendente(T *arreglo, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<n-1;j++)
		{
			if(arreglo[j] > arreglo [j+1]) // Si tenemos el siguiente arreglo [4,3,7,8,9], recordar que la comparacion va de izquierda a derecha. Es decir, arreglo[j] es el numero del lado izquierdo (4) que se va a comparar con el del lado derecho (3), que pertenece a arreglo [j+1].
			{
				intercambiar(arreglo[j], arreglo[j+1]);//Mandamos a llamar a la funcion creada en el otro archivo, a la cual se le mandaran los dos valores para que sean ordenados, y asi sucesivamente. 
			}
		}
	}
}


template <typename T>
void OrdenarDescendente(T *arreglo, int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0; j<n-1;j++)
		{
			if(arreglo[j] < arreglo [j+1])
			{
				intercambiar(arreglo[j], arreglo[j+1]);//Mandamos a llamar a la funcion creada en el otro archivo, el cual es para el ordenamiento por metodo burbuja
			}
		}
	}
}
