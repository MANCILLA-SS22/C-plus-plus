/*Ejercicio 5: Construir un programa para una competencia de atletismo, elprograma debe gestionar una serie de atletas 
caracterizados por su numero de atleta, nombre y tiempo de carrera. Al final el programa debe mostrar los datos del 
atleta ganador de la carrera.*/

#include <iostream>
#include "Atleta.h"
using namespace std;
int main(int argc, char** argv) 
{
	Atleta* objetoAtletas;
	int cantidadAtletas;
	int numeroAtleta;
	int indiceGanador, indiceAtleta;
	string nombre;
	float tiempoCarrera;
	
	cout<<"Digite el numero de atletas a competir: ";
	cin>>cantidadAtletas;
	
	objetoAtletas = new Atleta[cantidadAtletas];//Arreglo dinamico
	
	for(int i=0;i<cantidadAtletas;i++)
	{
		cout<<"Digite los atributos del atleta "<<(i+1)<<": "<<endl;
		
		cout<<"Digite el numero de atleta: ";
		cin>>numeroAtleta;
		cin.ignore();
		cout<<"Digite el nombre del atleta: ";
		getline(cin,nombre);
		
		cout<<"Digite el tiempo de carrera: ";
		cin>>tiempoCarrera;
		
		/*Se tienen todos los atributos necesarios para rellenar los objetos del arreglo "atletas". Despues, se procedera a 
		rellenarlos, llamando al constructor en donde se inicializaron los atributos de la clase*/
		objetoAtletas[i] = Atleta(numeroAtleta, nombre,tiempoCarrera);
	}
	
	indiceAtleta = Atleta::indiceGanador(objetoAtletas,cantidadAtletas);
	
	cout<<"\nEl atleta ganador de la carrera es: "<<endl;
	(objetoAtletas+indiceAtleta)->mostrarDatos();
	
	//delete[] objetoAtletas;
	return 0;
}

