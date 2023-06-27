#include <iostream>
using namespace std;

class Vehiculo
{
	//Atributos (miembros de la clase)
	private:
		string modelo;
		string marca;
		float precio;
		
	//Metodos (paramtetros)
	public:
		Vehiculo(string marca, string modelo, float precio)
		{
			this->marca = marca;
			this->modelo = modelo;
			this->precio = precio;
		}	
		
		//Constructor por defecto
		Vehiculo()
		{
			
		}
		
		//Destructor de objetos
		~Vehiculo()
		{
			
		}
		
		float getPrecio();
		void mostrarDatos();
		static int indiceMasBarato(Vehiculo coches[], int numeroVehiculos);
		/*Se dice que es de tipo static porque ahora al no pertenecerle a los objetos, sino a la clase, entonces sera como una 
		variable de tipo global, la cual tendra relacion con todos los objetos creados. Es decir, como vamos a comparar el 
		precio de los 3 objetos, lo mejor sera crear una funcion de tipo static para no tener que instanciar objetos.*/
};
