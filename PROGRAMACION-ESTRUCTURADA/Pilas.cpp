#include<iostream>
#include <stdio.h>
#include <stdlib.h> 
using namespace std;

struct Nodo
{
	int dato;
    Nodo *siguiente;
};

Nodo *nuevo_nodo; 
Nodo *pila = NULL;
int num; // int num = int n1,n2;

void agregarPila(Nodo *&, int); 
void sacarPila(Nodo *&, int &); 

int main()
{
	cout<<"Ingresa un numero: "; cin>>num;
	
	agregarPila(pila,num);
	
	cout<<"\nIngresa un numero: "; cin>>num;
	
	agregarPila(pila,num);
	
	cout<<"\nScando los elementos de la pila: ";
	while(pila != NULL)
	{
	 	sacarPila(pila, num);
	 	if(pila!=NULL)
		{
		 	cout<<num<<" , ";  
		}
		 
		else
		{
		 	cout<<num<<".";  
		}
	}  
	
	system ("pause");
	return 0;
}

void agregarPila(Nodo *&pila, int n)
{
	nuevo_nodo = new Nodo();    //1. Crear el espacio en memoria para almacenar un nodo.
	nuevo_nodo->dato=n;         //2. cargar el valor dentro de la variable nodo(dato)
	nuevo_nodo->siguiente=pila; //3. cargar el puntero pila dentro del nodo(*siguiente), y recordar que pila=NULL;
	pila=nuevo_nodo;            //4. asignar el nuevo nodo a pila
	cout<<"\nElemento "<<n<<" se agrego a PILA CORRECTAMENTE."<<endl;
}

void sacarPila(Nodo *&pila, int &n)
{
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}





