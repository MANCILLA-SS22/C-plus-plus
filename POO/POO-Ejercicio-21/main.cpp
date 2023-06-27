/*Ejercicio 3: Crear un programa para simular un equipo de futbol (futbolista, entrenador y doctor), para lo cual tendremos:
 > Una clase base Persona, que tendra los siguientes datos: nombre, apellido, edad.
 > La clase derivada Futbolista tendra los siguientes datos: dorsal y posicion.
 > La clase derivada Entrenador tendra de dato la estrategia que utiliza.
 > La clase derivada Medico, la titulacion y los anios de experiencia.
Hacer un menu donde se tengan las siguientes opciones:
 1) Viaje en equipo
 2) Entrenamiento
 3) Partido de futbol 
 4) Planificar entrenamiento
 5) Entrevista
 6) Curar lesion*/
 
#include <iostream>
#include <stdlib.h>
#include"Persona.h"
#include"Futbolista.h"
#include"Entrenador.h"
#include"Medico.h"
using namespace std;

/*Arreglo de objetos de tipo global porque lo vamos a usar en todas las funciones que vamos 
a crear y para no tener que mencionarlas a cada rato. Recordar que esta clase no puede 
instanciar objetos pero si lmacenar en un arreglo lo que son sus clases derivadas.*/
Persona *equipo[4]; 

//Prototipo de funciones
void menu();
void VIAJE();
void ENTRENAMIENTO();
void PARTIDO();
void PLANIFICACION();
void ENTREVISTA();
void CURACION();
 
int main(int argc, char** argv) 
{
	equipo[0] = new Futbolista("Ronaldo","Nazario",37,7,"Delantero");
	equipo[1] = new Futbolista("Ronaldihno","Gaucho",35,7,"Delantero"); 
	equipo[2] = new Entrenador("Luis","Scolari",55,"Defensiva");
	equipo[3] = new Medico("Alex","Marroni",68,"Fisioteraputa",20);
	
	menu();
	
	return 0;
}

//Menu
	void menu()
	{
		int opcion;
		do
		{
			cout<<"\t.:MENU:."<<endl;
			cout<<"1) Viaje en equipo"<<endl;
			cout<<"2) Entrenamiento"<<endl;
			cout<<"3) Partido de futbol"<<endl;
			cout<<"4) Planificar entrenamiento"<<endl;
			cout<<"5) Entrevista"<<endl;
			cout<<"6) Curar lesion"<<endl;
			
			cout<<"Digite una opcion"<<endl;
			cin>>opcion;
			
			cout<<endl;
			switch(opcion)
			{
				case 1: VIAJE(); break;
				
				case 2: ENTRENAMIENTO();break;
				
				case 3: PARTIDO();break;
				
				case 4: PLANIFICACION();break;
				
				case 5: ENTREVISTA();break;
				
				case 6: CURACION();break;
				
				case 7: break;
				
			    default: cout<<"\nSe equivoco de opcion";
			}
			cout<<endl;
			system("pause");
			system("cls");
		}while(opcion!=7);
	}
	
	void VIAJE()
	{
		for(int i=0;i<4;i++)
		{
			cout<<equipo[i]->getNOMBRE()<<" "<<equipo[i]->getAPELLIDO()<<" -> ";
			equipo[i]->viajar();
		}
	}
	
	void ENTRENAMIENTO()
	{
		for(int i=0;i<4;i++)
		{
			cout<<equipo[i]->getNOMBRE()<<" "<<equipo[i]->getAPELLIDO()<<" -> ";
			equipo[i]->entrenamiento();
		}
	}
	
void PARTIDO()
{
	for(int i=0;i<4;i++)
		{
			cout<<equipo[i]->getNOMBRE()<<" "<<equipo[i]->getAPELLIDO()<<" -> ";
			equipo[i]->partidoFutbol();
		}
}


/*La clase persona no tiene un metodo llamado "planificarEntrenamiento". Si no ponemos (Entrenador *)equipo[2]) y lo dejamos 
como equipo[i]->planificarEntrenamiento(); entonces estariamos diciendo que el objeto Entrenador que se esta instanciando se 
estaria comportando como un objeto de persona, lo cual no se puede porque no tiene el metodo deseado, sino unicamente "Entrenador".
Ahora,si bien es cierto que hemos guardado la instancia de entrenador como persona y se comporta como si fuera de la clase persona 
y no de la clase Entrenador. Lo que se ha hecho se llama up-casting, que significa que uno hace que un objeto de la clase derivada 
tome la forma de la clase base. Ahora, y lo mas importante, lo que debemos hacer es lo contrario, o sea, un "down-casting" para 
poder acceder al metodo planificarEntrenamiento, lo cual conciste en indicar que nuevamente regresmos a la clase Entrenador. 
Y finalmente, le decimos a C++ que la instancia de mi objeto Entrenador queremos que nos la regrese nuevamente a Entrenador y que 
permita acceder al metodo "planificarEntrenamiento"*/
void PLANIFICACION()
{
	cout<<equipo[2]->getNOMBRE()<<" "<<equipo[2]->getAPELLIDO()<<" -> ";	
	( (Entrenador *)equipo[2] )->planificarEntrenamiento();
}

void ENTREVISTA()
{
	cout<<equipo[0]->getNOMBRE()<<" "<<equipo[0]->getAPELLIDO()<<" -> ";	
	((Futbolista *)equipo[0])->entrevista();
	        
	cout<<equipo[1]->getNOMBRE()<<" "<<equipo[1]->getAPELLIDO()<<" -> ";	
	((Futbolista *)equipo[1])->entrevista();
}

void CURACION()
{
	cout<<equipo[3]->getNOMBRE()<<" "<<equipo[3]->getAPELLIDO()<<" -> ";	
	((Medico *)equipo[3])->curarLesion();
}
