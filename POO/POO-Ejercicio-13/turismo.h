//Herencia publica

#include <iostream>
#include "vehiculo.h"
using namespace std;

class turismo : public vehiculo //Todo lo publico y protegico de la clase base, se hereda como publico
{
	private:
		int numeroPuertas;
		
	public: 
		turismo(string marca, string color, string modelo, int numeroPuertas) : vehiculo(marca, color, modelo)
		{
			this->numeroPuertas = numeroPuertas;
		}
		
		~turismo()//Destructor de objetos
		{
			
		}
		
		int getY()//Obtener el numero de puertas
		{
			return numeroPuertas;
		}
		
		/*Se crea un nuevo metodo que retorne un "string", puesto que si queremos obtener el modelo del carro, 
		proveniente de "getX" de la clase padre, entonces aparecera un error debido a que el metodo getX es de tipo 
		protegido y no podemos utilizarlo directamente. Ahora, como lo estamos heredando con herencia publica, tambien 
		de tipo protegido, entonces podemos utilizarlos en los metodos de esta clase (turismo : vehiculo).*/
		string retornarModelo()
		{
			string mensaje = getX();
			return mensaje;
		}
		/*Habiendo hecho esto, entonces el metodo "retornarModelo", ya es publico en la clase "vehiculo : turismo", el cual 
		anteriormente era de tipo protegido en la clase base*/
};
