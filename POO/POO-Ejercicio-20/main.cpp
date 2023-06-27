/*Ejercicio 2: Considere la siguiente relacion de herencia, la cual involucra tres clases: Alumno, Deportista y 
BecaadoDeporte. Este ultima representa a aquellos alumnos que son deportistas y que por esa razon han recibido una beca 
especial del gobierno para premiar sus esfuerzos. Decida que atributos y metodos incluir para que su programa pueda:
 a)Declarar dos objetos llamados alumnoJuan y alumnoPedro de tipo alumno.
 b)Declarar un objeto llamado deporLuis de tipo deportista.
 c)Declarar dos objetos llamados bdAna y bdCarmen de tipo BecadoDeporte
 d)Imprimir los datos de todos los objetos declarados.
 e)Actualizar el nombre de la carrera en la que estan estudiando alumnoJuan y bdAna. El dato dado por el usuario 
 sera el nombre de la nueva carrera
 f)Actualizar nombre del entrenador deporLuis y bdCarmen.El dato dado por el usuario sera el nombre del nuevo entrenador
 g) Actualizar el monto de la beca de bdAna y bdCarmen. El dato dado por el usuario sera el porcentaje de incremento de 
 la beca actual.*/
 
#include <iostream>
#include"Alumno.h"
#include"Deportista.h"
#include "BecadoDeporte.h"
using namespace std;
int main(int argc, char** argv) 
{
	Alumno *AlumnoJuan = new Alumno("Informatica");
	Alumno *AlumnoPedro = new Alumno("Sistemas");
	Deportista *DeporLuis = new Deportista("Popeye");
	BecadoDeporte *bdAna = new BecadoDeporte("Administracion","Luis", 1200);
	BecadoDeporte *bdCarmen = new BecadoDeporte("Contabilidad","La Roca", 1350);
	
	cout<<"                .:Mostrando datos:.               "<<endl;
	cout<<"\nMostrando datos de AlumnoJuan: ";
	AlumnoJuan->MostrarDatos();
	cout<<"Mostrando datos de AlumnoPedro: ";
	AlumnoPedro->MostrarDatos();
	cout<<"Mostrando datos de Alumno DeporLuis: ";
	DeporLuis->MostrarDatos();
	cout<<"Mostrando datos de Alumno bdAna: ";
	bdAna->MostrarDatos();
	cout<<"Mostrando datos de Alumno bdCarmen: ";
	bdCarmen->MostrarDatos();
	
	string NuevaCarrera;
	cout<<"\nDigite la nueva carrera de AlumnoJuan: ";
	getline(cin,NuevaCarrera);
	AlumnoJuan->setNOMBRE_CARRERA(NuevaCarrera);
	
    /*Podemos sobreescribir la nueva carrera para bdAna en la variable "NuevaCarrera" porque el nombre anterior ingresado 
	para "AlumnoJuan", ya fue guardado y mostrado. Por lo que el volver a actulizar esa variable (NuevaCarrera) no 
	afecta a lo que ya desplegamos anteriormente.*/
	cout<<"\nDigite la nueva carrera de bdAna: ";
	getline(cin,NuevaCarrera);
	bdAna->setNOMBRE_CARRERA(NuevaCarrera);
	cout<<"\nLa nueva carrera de AlumnoJuan es: "<<AlumnoJuan->getNOMBRE_CARRERA()<<endl;
	cout<<"\nLa nueva carrera de bdAna es: "<<bdAna->getNOMBRE_CARRERA()<<endl;
	
	string NuevoEntrenador;
	cout<<"\nDigite el nuevo nombre del entrenador de DeporLuis: ";	
	getline(cin,NuevoEntrenador);
	DeporLuis->setNOMBRE_ENTRENADOR(NuevoEntrenador);
	cout<<"\nEl nuevo entrenador de DeporLuis es: "<<DeporLuis->getNOMBRE_ENTRENADOR()<<endl;
	
	cout<<"\nDigite el nuevo nombre del entrenador de bdCarmen: ";
	getline(cin,NuevoEntrenador);
	bdCarmen->setNOMBRE_ENTRENADOR(NuevoEntrenador);
	cout<<"\nEl nuevo entrenador de bdCarmen es: "<<bdCarmen->getNOMBRE_ENTRENADOR()<<endl;
	
	float incremento;
	cout<<"\nDigite el incremento de bdAna: ";
	cin>>incremento;
	bdAna->setMONTO_BECA(incremento);
	cout<<"\nEl monto de Beca de bdAna es: "<<bdAna->getMONTO_BECA()<<endl;
	
	cout<<"\nDigite el incremento de bdCarmen: ";
	cin>>incremento;
	bdCarmen->setMONTO_BECA(incremento);
	cout<<"\nEl monto de Beca de bdCarmen es: "<<bdCarmen->getMONTO_BECA()<<endl;
	
	
	delete AlumnoJuan;
	delete AlumnoPedro;
	delete DeporLuis;
	delete bdAna;
	delete bdCarmen;
	return 0;
}
