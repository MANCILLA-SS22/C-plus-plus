/*Ejercicio 3: Defina una plantilla para la clase Materoa, de tal manera que el tipo de dato del atributo calificacion 
sea del tipo T. Esto permitira crear objetos de tipo materia que tengan calificaciones que sean numeros enteros, 
decimales y letras.
a) Crea un objeto de tipo Materia usando el tipo int. Imprima los valores de los atributos del objeto creado
b) Cree un objeto de tipo Materia usando el tipo float.
c) Cree un objeto de tipo Materia usando el tipo char
d) Incluya un metodo en la clase que permita modificar la calificacion de una materia*/

#include <iostream>
#include"Materia.h"
using namespace std;
int main(int argc, char** argv) 
{
	Materia<int> curso1("Algoritmos", 1, 100);
	Materia<float> curso2("Matematicas", 2, 99.99);
	Materia<char> curso3("Lenguaje", 3, 'A');
	
	
	cout<<"Mostrando datos del curso 1: "<<endl;
	curso1.MostrarDatos();
	
	cout<<"Mostrando datos del curso 2: "<<endl;
	curso2.MostrarDatos();
	
	cout<<"Mostrando datos del curso 3: "<<endl;
	curso3.MostrarDatos();
	
	curso1.setCALIFICACION(89);
	cout<<"\nLa nueva calificacion del curso 1 es: "<<curso1.getCALIFICACION()<<endl;
	
	return 0;
}
