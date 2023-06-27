/*Ejercicio 1: Crear una lista que almacene "n" números enteros  y calcular el menor y mayor 
de ellos.*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;	
};
Nodo *lista = NULL;
int dato;
char opcion;

void insertarLista(Nodo *&lista ,int n);
void mostrarLista(Nodo *lista);
void calcularMayorMenor(Nodo *lista);
	
int main()
{	
	do{
		cout<<"Digite un numero para agregarlo a lista: ";
		cin>>dato;
		insertarLista(lista,dato);
		
		cout<<"\nDesea agregar un nuevo numero(s/n): ";
		cin>>opcion;
	}while(opcion == 's' || opcion == 'S');
	
	mostrarLista(lista); //mostramos la lista
	calcularMayorMenor(lista);	
	
	getch();
	return 0;
}

//Insertar elementos al final de la lista
void insertarLista(Nodo *&lista,int n)
{
	Nodo *nuevo_nodo = new Nodo(); //crear espacio en la memoria
	Nodo *aux; //variable auxiliar que se usara para que se le iguale el primer valor en la lista y asi poder ir avanzando hasta el final
	
	nuevo_nodo->dato = n; //se le asigna el valor introducido a la variable de tipo nodo
	//nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL) //Si la lista esta vacia
	{
		lista = nuevo_nodo;//agregamos el primer nodo a la lista
	}
	else
	{
		aux = lista; //aux apunta al inicio de la lista
 		
		while(aux->siguiente != NULL) //recorremos la lista hasta llegar al final
		{
			aux = aux->siguiente;// avanzamos posiciones en la lista
		}
		aux->siguiente = nuevo_nodo;//agregamos el nuevo nodo al final de la lista
	}
	cout<<"\tElemento "<<n<<" agregado a lista correctamente\n";
}

//Mostrar todos los elementos de la lista
void mostrarLista(Nodo *lista)
{  	
	Nodo *actual = new Nodo();
	
	actual = lista;
	while(actual != NULL) //mientras no sea final de la lista
	{
		cout<<actual->dato<<" -> "; //mostramos el dato
		actual = actual->siguiente; //avanzamos a la siguiente posicion de la lista
	}
}

//Calcular el menor y mayor elemento de la lista
void calcularMayorMenor(Nodo *lista)
{
	int mayor=0,menor=99999;
	
	while(lista != NULL) //mientras no sea el final de la lista
	{
		if((lista->dato)>mayor) //Comprobamos el numero mayor
		{
			mayor = lista->dato;
		}
		
		if((lista->dato)<menor) //Comprobamos el numero menor
		{
			menor = lista->dato;
		}
		lista = lista->siguiente;//Avanzamos en la lista
	}
	cout<<"\n\nEl mayor numero es: "<<mayor<<endl;
	cout<<"El menor numero es: "<<menor<<endl;	
}

