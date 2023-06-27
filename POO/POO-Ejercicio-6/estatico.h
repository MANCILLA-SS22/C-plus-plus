#include <iostream>
using namespace std;

class estatico
{
	private:
		static int contador; //Declaracion de un atributo static
		
	public:
		estatico() //Metodo constructor
		{
			contador++; //Cada vez que creemos un nuevo objeto de la clase estatico, el contador aumentara
		}
			
		int getContador()
		{
			return contador;
		}
			
		static int suma(int n1, int n2) //Metodo de tipo static
		{
			int suma = n1 + n2;
			return suma;
		}
};
