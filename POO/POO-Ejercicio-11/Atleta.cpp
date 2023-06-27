#include <iostream> 
#include"Atleta.h"
using namespace std;

float Atleta::getX()//Obtener el tiempo de la carrera
{
	return tiempoCarrera;
}
		
void Atleta::mostrarDatos()
{
	cout<<"Numero de atleta: "<<numeroAtleta<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Tiempo de carrera en minutos: "<<tiempoCarrera<<endl;
}

int Atleta::indiceGanador(Atleta objetoAtletas[], int n)
{
	float tiempoCarrera;
	int indice = 0;
	
	//Se iniciliza la variable, almacenandole el tiempo de la carrera del primer atleta que se encuentre
	tiempoCarrera = objetoAtletas[0].getX();
	for(int i=1;i<n;i++)
	{
		if(objetoAtletas[i].getX() < tiempoCarrera)
		{
			tiempoCarrera = objetoAtletas[i].getX();
			indice = i;
		}
	}
	return indice;
}
