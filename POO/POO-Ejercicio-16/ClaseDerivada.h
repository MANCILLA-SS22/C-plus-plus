#include <iostream>
#include "ClaseBase.h"
#include "ClaseBase2.h"
using namespace std;

//Como ClaseBase1 y ClaseBase2 son ambas de tipo public, no es necesario poner public antes del nombre de cada una
class ClaseDerivada : public ClaseBase, public ClaseBase2
{ 
	protected:
		int x;
		
	public:
		ClaseDerivada(int x1, int x2, int x) : ClaseBase(x1), ClaseBase2(x2)
		{
			this->x = x;
		}
		
		~ClaseDerivada()
		{
			
		}
		
		int getX()
		{
			return x; //Si dejamos sola la variable x, imprimira el que valor que se encuentre en esta misma clase.
			/*return ClaseBase::x; //Sintaxis para cuando queremos imprimir el valor de x pero en la clase base 1
			  return ClaseBase2::x; //Sintaxis para cuando queremos imprimir el valor de x pero en la clase base 2
			  return ClaseBase::getX();//Sintaxis para cuando queremos imprimir el valor de x pero en la clase base 1
			  return ClaseBase2::getX();//Sintaxis para cuando queremos imprimir el valor de x pero en la clase base 2*/
		}		
		//Operador de resolucion de ambito (::)

};
