//Clase derivada 1

#ifndef FELINO_H
#define FELINO_H

#include <iostream>
#include "Mamifero.h"
using namespace std;

class Felino : public Mamifero
{
	private:
		string NombreCirco;
		
	public:
		Felino(int anoNacimiento, string LugarNacimiento, string raza, string NombreCirco) : Mamifero(anoNacimiento, LugarNacimiento, raza)
		{
			this->NombreCirco = NombreCirco;
		}
		
		Felino(int anoNacimiento, string LugarNacimiento, string raza) : Mamifero(anoNacimiento, LugarNacimiento, raza)
		{
		
		}
		
		~Felino()
		{
			
		}
		
		string ImprimirDieta()
		{
			return "La dieta del felino es a base de carne.";
		}
		
		
		void setNOMBRE_CIRCO(string NuevoNombre)//Esta funcion permite cambiar el nombre de "NombreCirco".
		{
			this->NombreCirco = NuevoNombre;//Igualamos el nuevo nombre que el usuario envie, a la variable "NombreCirco" (variable existente), la cual ya poseia un nombre y se actualizara
		}
		
		string getNOMBRE_CIRCO()//Este funcion permitira obtener el nombre nuevo que el usuario haya digitado.
		{
			return NombreCirco;//Nuevamente se retorna "NombreCirco" pero con el nombre ya actualizado
		}
};

#endif
