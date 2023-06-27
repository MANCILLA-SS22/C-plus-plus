#include <iostream>
#include<math.h>
#include"Figura.h"
using namespace std;

/*Los dos puntos (:) seguido del nombre de la clase base hacen referencia a que todos los metodos y atributos de la clase base, 
seran heredados por la clase hija. Ademas, puede tener atributos y metodos propios ademas de los heredados.
Si no colocamos el modificador de acceso "public" en esta sintaxis, entonces C++ entendera que estas haciendo una 
herencia privada (la cual siempre esta por defecto)*/
class Triangulo : public Figura
{
	//Atributos
	private:
	    float lado1,lado2,lado3;
	
	public:
	/*Primero inicializar TODOS los atributos de la CLASE BASE (Figura) y despues los de la CLASE HIJA (Triangulo). Posteriormente 
	a eso, debemos mandarle el metodo constructor de la clase Figura para no tener que volver a inicializar las variabels en el 
	nuevo metodo constructor de esta clase. Para ello debemos poner los dos puntos (:) seguido de Figura(nLados) */
	Triangulo(int nLados,float lado1,float lado2,float lado3) : Figura(nLados)
	{
		this->lado1 = lado1;
		this->lado2 = lado2;
		this->lado3 = lado3;
	}
	
	//Metodos
	float areaTriangulo()
	{
		float p = (lado1+lado2+lado3)/2;
		float area = sqrt(p*(p-lado1)*(p-lado2)*(p-lado3));
		return area;
	}





};
