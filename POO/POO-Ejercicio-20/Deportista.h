#ifndef DEPORTISTA_H
#define DEPORTISTA_H

#include <iostream>
using namespace std;

class Deportista
{
	private:
		string NombreEntrenador;
		
	public:
		Deportista(string NombreEntrenador)
		{
			this->NombreEntrenador = NombreEntrenador;
		}
		
		~Deportista()
		{
			
		}
		
		void MostrarDatos()
		{
			cout<<"Nombre del entrenador: "<<NombreEntrenador<<endl;	
		}
		
		
		void setNOMBRE_ENTRENADOR(string NuevoNombre)
		{
			this->NombreEntrenador = NuevoNombre;
		}
		
		string getNOMBRE_ENTRENADOR()
		{
			return NombreEntrenador;
		}
};

#endif
