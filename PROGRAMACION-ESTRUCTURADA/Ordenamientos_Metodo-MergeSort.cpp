//Ordenamiento por mezclas - MergeSort

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> // new y delete
using namespace std;

void MergeSort(int [], int, int);
void Mezcla(int [], int, int, int);

int main()
{
	int arreglo[] = {5, 7, 87, 1, 3, 9, 14, 22}; //Definimos el arreglo de 6 espacios (0 a 5)
	
	MergeSort(arreglo, 0, 7);// Le mandamos a la funcion el arreglo con los valores y los valores inicial y final del arreglo. Es decir, 0 y 5.
	
	for(int i=0;i<8;i++)
	{
		cout<<arreglo[i]<<endl;
	}
	
    getch();
    return 0;
}

void MergeSort(int a[], int primero, int ultimo) // primero = 0, ultimo = 5
{
	int central;
	if(primero < ultimo)
	{
		central = (primero + ultimo)/2; //Calculamos el valor central de la lista al sumar el minimo mas el maximo y dividido entre 2. Recordar que el resultado se debe redondear al valor entero mas izquierdo posible. (5+0)/2 = 2.5 = 2.
		
		
		MergeSort(a, primero,central); //Ordenamos la sublista izquierda.
		MergeSort(a, central+1, ultimo); //Ordenamos la sublista derecha
		Mezcla(a, primero, central, ultimo); //Mezclar los elementos ordenados
	}
}

void Mezcla(int a[], int izquierda, int medio, int derecha)
{
	int *aux;
	int i,k,z;// "i" pertenece al indice de la sublista izquierda. "k" pertenece al indice de la sublista derecha. "z" pertenece al indice de la sublista auxiliar, que permitira desplazarce de izquierda a derecha para ir llenando de valores el arreglo.
	aux = new int[derecha-izquierda + 1];// Representa el limite de valores que tendra la variable auxiliar. "derecha-izquierda + 1" es la cantidad de elementos que vamos a tener en nuestro arreglo aux.
	i = z = izquierda;//puesto que "i" (indice de la sublista izquierda) y "z" (indice de la sublista auxiliar) son los primeros, se inicializaran con el valor que tenga "izquierda". O sea, cero.
	k = medio+1; // "k" inicializa en la mitad del arreglo porque es la segunda mitad (del lado derecho) del arreglo que se dividio.
	
	//Ordenamos los elementos en el arrelgo auxiliar
	while(i <= medio && k <= derecha) //"medio" es el ultimo valor de la sublista izquierda, que va desde "izqueirda hasta "medio. Despues, "derecha" es el ultimo valor de la sublista derecha, que va desde "medio+1" hasta "derecha".
	{
		if(a[i] <= a[k])// Verificamos si el valor inicial de la sublista izquierda es menor al valor inicial de la sublista derecha
		{
			aux[z++] = a[i++];// Si cumple, entonces el valor inicial de la variable auxiliar toma el valor inicial de la sublista izquierda.
			//z++;
			//i++;
		}
		
		else
		{
			aux[z++] = a[k++];// Si no cumple, entonces el valor inicial de la variable auxiliar toma el valor inicial de la sublista derecha.
			//z++;
			//k++;
		}
	}
	
	// Ahora, puesto que una de las dos listas va a terminarse primero que la otra, se deberan copiar los valores restantes de esa subliste pero utilizando otro ciclo while.
	while(i <= medio)//Este ciclo indica que primero se lleno la lista es la sublista derecha. Es por eso que siguen quedando valores restantes en la sublista izquierda y se deberan agregar a la lista auxiliar.
	{
		aux[z] = a[i];
		z++;
		i++;
	}
	
	while(k <= derecha)//Este ciclo indica que primero se lleno la lista es la sublista izquierda. Es por eso que siguen quedando valores restantes en la sublista derecha y se deberan agregar a la lista auxiliar.
	{
		aux[z] = a[k];
		z++;
		k++;
	}
	
	//Copiamos ahora los elementos del arreglo auxiliar hacia el arreglo a[].
	for(int i=izquierda; i<=derecha; i++)
	{
		a[i] = aux[i];
	}
	
	delete aux;
}
