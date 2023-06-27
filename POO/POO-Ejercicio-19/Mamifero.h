//Clase base
#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <iostream>
using namespace std;

class Mamifero
{
	private:
		int anoNacimiento;
		string LugarNacimiento,raza;
		
	public:
		Mamifero(int anoNacimiento, string LugarNacimiento, string raza)
		{
			this-> anoNacimiento = anoNacimiento;
			this-> LugarNacimiento = LugarNacimiento;
			this-> raza = raza;
		}
		
		~Mamifero()
		{
			
		}
		
		/*Es de tipo virtual porque la dieta del mamifero es generica. Es decir, no sabemos cual es la dieta del 
		mamifero y ademas, puede ser tanto de felino como de GatoDomestico*/
		virtual string ImprimirDieta() = 0; 
		
		int getANO_NACIMIENTO()
		{
			return anoNacimiento;
		}
		
		string getLUGAR_NACIMIENTO()
		{
			return LugarNacimiento;
		}
		
		string getRAZA()
		{
			return raza;
		}
		
		
};

#endif
