#ifndef ALUMNO_H
#define ALUMNO_H

#include <iostream>
using namespace std;

class Alumno
{
	private:
		string NombreCarrera;
		
	public:
		Alumno(string NombreCarrera)
		{
			this->NombreCarrera = NombreCarrera;
		}
		
		~Alumno()
		{
			
		}
		
		void MostrarDatos()
		{
			cout<<"Nombre de la carrera: "<<NombreCarrera<<endl;
		}
		
		void setNOMBRE_CARRERA(string NuevoNombre)
		{
			this->NombreCarrera = NuevoNombre;
		}
		
		string getNOMBRE_CARRERA()
		{
			return NombreCarrera;
		}
};

#endif
