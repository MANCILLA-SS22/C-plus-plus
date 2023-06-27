#include <iostream>
using namespace std;

class cuadrialtero
{
	//Atributos
	private: 
	float lado1,lado2;
	
	//Metodos
	public:
		cuadrialtero(float lado1, float lado2)
		{
			this->lado1 = lado1;
			this->lado2 = lado2;
		}
		
		cuadrialtero(float lado)
		{
			this->lado1 = this->lado2 = lado;
		}
		
		float obtenerPerimetro();
		float obtenerArea();
};

