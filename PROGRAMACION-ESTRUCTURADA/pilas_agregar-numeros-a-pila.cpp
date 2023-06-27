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
char res;

void agregarPila(Nodo *&pila, int num); 
void sacarPila(Nodo *&pila, int &num); 

int main()
{
	
    
	cout<<"Ingresa un numero: "; 
	cin>>num;
	
	agregarPila(pila,num);
	
	cout<<"\nIngresa un numero: "; 
	cin>>num;
	
	agregarPila(pila,num);
	
	do
	{ //Pedimos todos los elementos de la pila
		cout<<"Digite un numero: ";
		cin>>num;
		agregarPila(pila,num);
	
		cout<<"\nDesea agregar otro numero a pila(s/n): ";
		cin>>res;
	}while((res == 's')||(res=='S'));
	
	
	
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

void agregarPila(Nodo *&pila, int num)
{
	nuevo_nodo = new Nodo();    //1. Crear el espacio en memoria para almacenar un nodo.
	nuevo_nodo->dato=num;         //2. cargar el valor dentro de la variable nodo(dato)
	nuevo_nodo->siguiente=pila; //3. cargar el puntero pila dentro del nodo(*siguiente), y recordar que pila=NULL;
	pila=nuevo_nodo;            //4. asignar el nuevo nodo a pila
	cout<<"\nElemento "<<num<<" se agrego a PILA CORRECTAMENTE."<<endl;
}

void sacarPila(Nodo *&pila, int &num)
{
	Nodo *aux = pila;
	num = aux->dato;
	pila = aux->siguiente;
	delete aux;
}





