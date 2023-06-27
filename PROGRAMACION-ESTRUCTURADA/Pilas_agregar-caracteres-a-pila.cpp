/*Ejercicio 2: Hacer un programa en C++, utilizando Pilas que contenga el siguiente 
menu: 

	1. Insertar un caracter a la pila
	2. Mostrar todos los elementos de la pila
	3. Salir
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Nodo{
	char dato;
	Nodo *siguiente;	
};

Nodo *nuevo_nodo; 
Nodo *pila = NULL;

void menu();
void agregarPila(Nodo *&,char word);
void sacarPila(Nodo *&,char &word);

int main()
{
	menu();
	
	getch();
	return 0;
}

void menu()
{
	Nodo *pila = NULL;
	int opcion;
	char word;
	
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Insertar un caracter a la pila"<<endl;
		cout<<"2. Mostrar todos los elementos de la pila"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion)
		{
			case 1: cout<<"\nDigite un caracter: ";
					cin>>word;
					agregarPila(pila,word);
					break;
			case 2: cout<<"\nMostrando todos los elementos de la pila: ";
					while(pila != NULL)
					{
						sacarPila(pila,word);
						if(pila != NULL)
						{
							cout<<word<<" , ";
						}
						else{
							cout<<word<<".";
						}
					}
					cout<<"\n";
					system("pause");
					break;
			case 3: break;
		}
		system("cls"); //limpiar pantalla
	}while(opcion != 3);
	
}

void agregarPila(Nodo *&pila, char word)
{
	nuevo_nodo = new Nodo();    //1. Crear el espacio en memoria para almacenar un nodo.
	nuevo_nodo->dato=word;         //2. cargar el valor dentro de la variable nodo(dato)
	nuevo_nodo->siguiente=pila; //3. cargar el puntero pila dentro del nodo(*siguiente), y recordar que pila=NULL;
	pila=nuevo_nodo;            //4. asignar el nuevo nodo a pila
	cout<<"\nElemento "<<word<<" se agrego a PILA CORRECTAMENTE."<<endl;
}

void sacarPila(Nodo *&pila, char &word)
{
	Nodo *aux = pila;
	word = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
