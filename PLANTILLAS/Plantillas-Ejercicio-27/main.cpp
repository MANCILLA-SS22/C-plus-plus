/*Ejercicio 4: Defina una plantilla para la clase Arreglo, la cual podra definir valores de distinto tipo, el cual se 
definira en el momento de la instancia, el programa debera tener un menu con las siguientes opciones:
1. Agregar un nuevo elemento al arreglo
2. Comprobar el espacio en el arreglo
3. Ver arreglo
4. Vaciar arreglo
5. Salir*/
#include <iostream>
#include <stdlib.h>
#include "Arreglo.h"
using namespace std;

void opciones()
{
	cout<<"\t.:Menu:."<<endl;
	cout<<"1. Agregar un nuevo elemento al arreglo"<<endl;
	cout<<"2. Comprobar el espacio en el arreglo"<<endl;
	cout<<"3. Ver arreglo"<<endl;
	cout<<"4. Vaciar el arreglo"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Digite una opcion de menu: ";
}

int main(int argc, char** argv) 
{
	Arreglo<int> arreglo1(5);//Creacion del objeto dinamico de tipo generico.
	int opcion,elemento;
	
	do// do while que nos permitira visualizar el menu de opciones
	{
		opciones();//Mandamos a llamar a la funcion que despliegue el menu.
		cin>>opcion;
		
		switch(opcion)
		{
			case 1:
				if(arreglo1.ArregloLleno())//Mandamos a llamar a la funcion ArregloLleno para verificar si esta lleno o no el arreglo
				{
					cout<<"El arreglo esta lleno. No puede agregar mas elementos."<<endl;//Si es true, entonces se observa este mensaje
				}
				else
				{
					cout<<"\nDigite un elemento a agregar: ";//Si es false, entonces se observa este mensaje
					cin>>elemento;//almacenamos mas valores de tipo generico.
					arreglo1.Agregar(elemento);//Mandamos a llamar a la funcion que se encargara de agregar mas valores hasta que llegue al numero de elementos.
				}
				break;
				
			case 2:
				if(arreglo1.ArregloLleno())//Verificamos si esta lleno o no el arreglo al mandar a llamar a la funcion
				{
					cout<<"\nEl arreglo esta lleno."<<endl;//Si es true, entonces se observa este mensaje
				}
				else
				{
					cout<<"El arreglo aun no esta lleno"<<endl;//Si es false, entonces se observa este mensaje
				}
				break;
				
				case 3:
					cout<<"\nLos elementos del arreglo son: "<<endl;
					arreglo1.MostrarArreglo();
					break;
					
				case 4:
					cout<<"Vaciando el arreglo"<<endl;
					arreglo1.VaciarArreglo();
					break;
					
				case 5: break;
				default: cout<<"Se equivoco de opcion de menu";
		}
		
		cout<<endl;
		system("pause");
		system("cls");
	}while(opcion!=5);
	
	return 0;
}
