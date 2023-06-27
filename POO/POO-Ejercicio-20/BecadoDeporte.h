#include <iostream>
#include"Alumno.h"
#include"Deportista.h"
using namespace std;

class BecadoDeporte : public Alumno, public Deportista
{
	private:
		float MontoBeca;
		
	public:
		BecadoDeporte(string NombreCarrera, string NombreEntrenador, float MontoBeca) : Alumno(NombreCarrera),Deportista(NombreEntrenador)
		{
			this->MontoBeca = MontoBeca;
		}
		
		~BecadoDeporte()
		{
			
		}
		 
		/*Mandamos a llamar la funcion "MostrarDatos" de las clases anteriores porque los datos que posee, seran 
		necesarios en esta clase "BecadoDeporte". Por lo cual es importante mandarlas a llamar y asi mismo, mostrar los 
		datos de la misma.*/
		void MostrarDatos()
		{
			Alumno::MostrarDatos();
			Deportista::MostrarDatos();
			cout<<"Monto de la beca: "<<MontoBeca<<endl;
		}
		
		//Lo siguiente es establecer el nuevo monto de la beca donde recivimos un flotante, el cual es un porcentaje
		void setMONTO_BECA(float n)
		{
			float incremento = (MontoBeca*n)/100;
			this->MontoBeca+= incremento;
		}
		
		float getMONTO_BECA()
		{
			return MontoBeca;
		}
};
