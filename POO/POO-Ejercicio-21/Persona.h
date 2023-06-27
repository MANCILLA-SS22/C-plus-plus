//Clase base

#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona
{/*Debe ser tipo protected porque vamos a tener clases derivadas de la clase persona. Y esto para que haya una 
   herencia correcta. Recordar que esta clase no puede instanciar objetos pero si almacenar en un arreglo lo 
   que son sus clases derivadas*/
	protected:
		string nombre;
		string apellido;
		int edad;
		
	public:
		Persona(string nombre,string apellido,int edad)
		{
			this->nombre = nombre;
			this->apellido = apellido;
			this->edad = edad;
		}
		
		~Persona()
		{
			
		}
		
		string getNOMBRE()
		{
			return nombre;
		}
		
		string getAPELLIDO()
		{
			return apellido;
		}
		
		int getEDAD()
		{
			return edad;
		}
		
		void viajar()
		{
			cout<<"Viajar"<<endl;
		}
		
		 
		virtual void partidoFutbol()=0;
		virtual void entrenamiento()=0;
		
		/*Se tienen las siguientes metodos de tipo virtual, ya que se necesita que las clases derivadas lo implementen. 
		La razon por la cual se hace esto es porque dichas variables son genericas, es decir, pueden ser diferentes 
		tanto para Futbolista, Entrenador y Medico. Por ejemplo, en partidoFutbol, el jugador juega el partido, el 
		entrenador dirige y el medico brinda asistencia.Para el caso de entrenamiento, el jugador entrena, el entrenador 
		dirige el entrenamiento y el medico brinda asistencia (en el entrenamiento).
		En el caso de "viajar" no sucede esto porque todos viajan por igual.
		Ya que hemos puesto todos sus atributos y metodos, y tenemos dentro de esta clase dos metodos virtual, 
		significa entonces que esta clase persona pasa a ser una clase abstracta*/
};

#endif
