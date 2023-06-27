#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo
{
	int dato;
	Nodo *siguiente;	
};

Nodo *frente = NULL;
Nodo *fin = NULL;
int dato;//dato es lo mismo que n

void insertarCola(Nodo *&frente, Nodo *&fin, int n); 
bool cola_vacia(Nodo *frente);
void siprimirCola (Nodo *&frente, Nodo *&fin, int &n);

int main()
{
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente, fin, dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente, fin, dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	insertarCola(frente, fin, dato);
	
	//Eliminar los elementos de la cola
	cout<<"\nQuitando los nodos de la cola:";
	while(frente != NULL)
	{
		siprimirCola (frente, fin, dato);
		if(frente != NULL)
		{
			cout<<dato<<" , ";
		}
		else
		{
			cout<<dato<<" . ";
		}
	}
	
	getch();
	return 0;
}

//Funcion para insertar elementos en una cola
void insertarCola(Nodo *&frente, Nodo *&fin, int n) //dato es lo mismo que n
{
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente))
	{
		frente = nuevo_nodo;
	}
	else
	{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
	cout<<"Elemento "<<n<<" insertado a cola correctamente\n";
}

//Funcion para determinar si la cola esta vacia o no
bool cola_vacia(Nodo *frente)
{
	//return (frente == NULL)? true : false; Esta linea es igual al if que se encuentra abajo y se puede utilizar para ahorrar lineas
	if(frente == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}

/*
bool cola_vacia(Nodo *frente)
{
	return (frente == NULL)? true : false; 
}
*/

//Funcion para eliminar elementos de la cola
void siprimirCola (Nodo *&frente, Nodo *&fin, int &n)
{
	n = frente -> dato;
	Nodo *aux = frente;
	if(frente == fin)
	{
		frente = NULL;
		fin = NULL;
	}
	else
	{
		frente = frente ->siguiente;
	}
	delete aux;
}

