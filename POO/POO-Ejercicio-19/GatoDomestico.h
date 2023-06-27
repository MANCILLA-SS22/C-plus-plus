//Clase derivada 2

#ifndef GATODOMESTICO_H
#define GATODOMESTICO_H

#include <iostream>
#include "Felino.h"
using namespace std;

class GatoDomestico : public Felino
{
	private:
		string NombreDueno;
	
	public:
		GatoDomestico(int anoNacimiento, string LugarNacimiento, string raza, string NombreDueno) : Felino(anoNacimiento, LugarNacimiento, raza)
		{
			this->NombreDueno = NombreDueno;
		}
		
		~GatoDomestico()
		{
			
		}
		
		string ImprimirDieta()
		{
			return "La dieta del gato es con Whiskas.";
		}
		
		void setNOMBRE_DUENO(string NuevoNombre)
		{
			this->NombreDueno = NuevoNombre;
		}
		
		string getNOMBRE_DUENO()
		{
			return NombreDueno;
		}
};

#endif
