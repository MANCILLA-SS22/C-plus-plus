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
int dato;

void insertarCola(Nodo *&frente, Nodo *&fin, int n); //dato es lo mismo que n
bool cola_vacia(Nodo *frente);

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
	
	getch();
	return 0;
}

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



