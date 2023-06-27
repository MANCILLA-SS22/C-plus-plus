//Clases Compuestas
#include <iostream>
#include "Expediente.h"
#include "Direccion.h"
using namespace std;

class Estudiante
{
	private:
		string codigo;
		float promedio;
		Expediente exp;//Objeto de tipo "Expediente"
		Direccion dir;//Objeto de tipo "Direccion"
		
	public: 
	    /*Ademas de inicializar los objetos de esta clase compuesta, tambien se deben inicializar los objetos de las otras 
		clases. Esto poruqe unicamente vamos a llamar al constructor de la clase "Estudiante" y no de las demas.
		:exp(NroExpediente) esta es la sintaxis para llamar al constructor de las otras clases. En este caso, el objeto 
		"exp" va rellenar su atributo con la variable que, es este caso es de tipo entero (int y). Aqui, C++ reconoce que como
		es de tipo entero, etonces se ira a la clase "Expediente", buscara su constructor y se autorellenara con el valor que 
		este dentro de "y" en la clase compuesta "Estudiante. El mismo proceso se hara con la otra clase, la cual es ahora string*/
		Estudiante(string codigo, float promedio, int y, string z) : exp(y),dir(z)//Desde la funcion principal, le enviamos los valores a cada una de las varaibles codigo, promedio, y, z.
		{
			this->codigo = codigo;
			this->promedio = promedio;
		}
		
		void MostrarDatos()
		{
			cout<<"Codigo: "<<codigo<<endl;
			cout<<"Promedio: "<<promedio<<endl;
			cout<<"Numero de expediente: "<<exp.getExpediente()<<endl;
			cout<<"Direccion : "<<dir.getDireccion()<<endl;
		}
		
	
		
};
