#include<iostream>
using namespace std;
class Perro
{
	//Atributos (miembros de la clase)
	private:
		string nombre, raza;
		
	//Metodos (paramtetros)
	public:
		Perro(string nombre, string raza)//Constructor
		{
			//Esta seccion sirve para inicializar las variables
			this->nombre = nombre; //this Sirve para autoreferenciar a los miembros de una clase
			this->raza = raza; //this->NombreDeVaraible es el miembro de la clase. NombreDeVaraible es el parametro.
		}
		
		~Perro()//Destructor
		{
			
		}
		
		void mostrarDatos();
		void jugar();
};
