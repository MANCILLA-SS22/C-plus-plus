/*Ejercicio 2: Definir dos plantillas de funciones de un archivo de
cabecera llado "Ordenar.h" que puedan ordenar tanto ascendentemente como
descendentemente un arreglo de N elementos, recuerde que puede utilizar la
plantilla intercambiar del ejercicio anterior.*/
#include <iostream>
#include "Ordenar.h"
using namespace std;


//Pedir los datos que se para el arreglo de vectores
template <typename T>
void PedirDatos(T *x, int n) /* "x" representa el arreglo dinamico creado y "n" el numero de espacios que posee el arrego*/
{
	for(int i=0; i<n; i++)
	{
		cout<<"Digite un elemento ["<<i<<"]: ";
		cin>>x[i];
	}
}

//Mostrar los valores ingresados en el arreglo
template <typename T>
void MostrarArreglo(T *x, int n)/* "x" representa el arreglo dinamico creado y "n" el numero de espacios que posee el arrego*/
{
	for(int i=0; i<n; i++)
	{
		cout<<"Elemento ["<<i<<"]: "<<x[i]<<endl;
	}
}


int main(int argc, char** argv) 
{
	//Sintaxis para la creacion de un arreglo dinamico
	int nElementos;
	cout<<"Dijite la cantidad de elementos del arreglo: ";
	cin>>nElementos;
	
	int *elementos = new int [nElementos];
	
	//LLmando a la funcion para que el usuario ingrese los datos en el arreglo dinamico
	cout<<"\nPidiento los elementos del arreglo: "<<endl;
	PedirDatos(elementos, nElementos);//Le mandamos a la funcion "PedirDatos" el arreglo dinamico y el numero de elementos que posee para que se puedan ingresar los valores que el usuario desee.
	
	//Llamando a la funcion para ordenar elementos del arreglo de forma ascendente
	cout<<"\nArreglo ordenado ascendentemente: "<<endl;
	OrdenarAscendente(elementos, nElementos);//Le mandamos a la funcion "OrdenarAscendente" el arreglo dinamico y el numero de elementos que posee para que se puedan ordenar de manera ascendente.
	MostrarArreglo(elementos, nElementos);
	
	//Llamando a la funcion para ordenar elementos del arreglo de forma descendente
	cout<<"\nArreglo ordenado descendentemente: "<<endl; 
	OrdenarDescendente(elementos, nElementos);//Le mandamos a la funcion "OrdenarDescendente" el arreglo dinamico y el numero de elementos que posee para que se puedan ordenar de manera descendente.
	MostrarArreglo(elementos, nElementos); 
	
	//Eliminar la informacion almacenada en la memoria
	delete[] elementos;
	return 0;
}
