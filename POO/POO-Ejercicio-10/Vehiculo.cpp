#include <iostream>
#include "Vehiculo.h"
using namespace std;

float Vehiculo::getPrecio()
{
	return precio;
}

void Vehiculo::mostrarDatos()
{
	cout<<"Marca: "<<marca<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<"Modelo: "<<modelo<<endl;
}

int Vehiculo::indiceMasBarato(Vehiculo coches[], int numeroVehiculos)
{
	int indice = 0;
	float precio;
	
	/*Se inicializa y se obtiene el precio del primer coche guardado dentro del arreglo y se guarda en la variable "precio", para 
	despues, iniciar el ciclo for, comparando el precio del vehiculo que le sigue al de la posicion en 0.*/	
	precio = coches[0].getPrecio(); 
	for(int i=1; i<numeroVehiculos;i++)
	{
		/*Si el if detecta que el coche "i" del arreglo, es menor al precio actual, entonces precio cambia su valor y sera igual al 
		precio menor*/
		if(coches[i].getPrecio() < precio)
		{
			precio = coches[i].getPrecio(); 
			indice = i; //Se guarda el indice, el cual posee indica el coche con el menor precio
		}
	}
	return indice;//Retornamos el indice donde se encuentra almacenado el coche con el menor precio en el arreglo
}
