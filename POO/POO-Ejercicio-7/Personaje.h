#include <iostream>
using namespace std;

class Personaje
{
	private:
		int ataque;
		int defensa;
	
	public:
		Personaje(int ataque, int defensa)
		{
			this->ataque = ataque;
			this->defensa = defensa;
	    }
	    
	    void mostrarDatos()
	    {
	    	cout<<"Ataque = "<<ataque<<endl;
	    	cout<<"Defensa = "<<defensa<<endl;
	    }
	    
		friend void modificar(Personaje &, int, int);
		/*Le decimos a C++ que la funcion modificar tiene acceso a todo lo privado o protegido de la clase y pueda manipular y 
		cambiar los datos*/
	    
};
