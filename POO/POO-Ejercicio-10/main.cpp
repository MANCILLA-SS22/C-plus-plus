/*Ejercicio 4: Construir un programa que dada una serie de vehiculos caracterizados por
su marca, modelo y precio, imprima las propiedades del vehiculo mas barato. Para ello, 
se deberan leer por teclado las caracteristicas de cada vehiculo y crear una clase que
represente a cada uno de ellos*/
#include <iostream>
#include "Vehiculo.h"
using namespace std;

int main(int argc, char** argv) 
{
	Vehiculo *coches;//Objeto con el cual se creara un arreglo 
	int numeroVehiculos;
	int indiceBarato;
	float precio;
	string marca, modelo;
	
	cout<<"Dijite el numero de vehiculos: ";
	cin>>numeroVehiculos;
	
	coches = new Vehiculo[numeroVehiculos];//Arreglo de objetos
	
	for(int i=0; i<numeroVehiculos;i++)
	{
		cout<<"\nDigite los datos del vehiculo "<<(i+1)<<": "<<endl;
		cin.ignore();
		cout<<"Digite la marca: "; getline(cin,marca);
		cout<<"Digite el modelo: "; getline(cin,modelo);
		cout<<"Digite el precio: ";cin>>precio;
		
		coches[i] = Vehiculo(marca,modelo,precio);//se inicializan los atributos de cada uno de los objetos del arreglo de objetos.
	}
	
	/*Almacena el retorno de " int indiceMasBarato(Vehiculo coches[], int n) ", que pertenece a la variable indice del codigo 
	fuente Vehiculo.cpp y es de tipo entero. Es decir, es la posicion en el arreglo de objetos donde esta el objeto que posee
	el precio mas barato*/
	indiceBarato = Vehiculo::indiceMasBarato(coches,numeroVehiculos);

	
	cout<<"\nEl vehiculo mas barato es: "<<endl;
	(coches+indiceBarato)->mostrarDatos(); //Arreglo dinamico   
  //coches[indiceBarato].mostrarDatos();   //Arreglo estatico      
	 
	delete[] coches;
	
	return 0;
}
