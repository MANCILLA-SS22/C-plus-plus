/*Ejercicio 1: Considere la siguiente relacion de herencia. Defina las clases Mamifero, Felino y GatoDomestico. 
Decida que atributos y metodos incluir de tal manera que su programa pueda:
 a) Declara un objeto llamado minino de tipo GatoDomestico y otro llamado estrellaCirco de tipo felino. 
 b) Imprimir la dieta de minino y de estrellaCirco
 c) Imprimir el ano y lugar de nacimiento de minino de estrellaCirco
 d) Cambiar el nombre del dueno a minino.
 e) Imprimir la raza de minino y de estrellaCirco
 f) Cambiar el nombre del circo en el que actua estrellaCirco.*/
 
#include <iostream>
#include "GatoDomestico.h"
#include "Felino.h"
using namespace std;
int main(int argc, char** argv) 
{
	GatoDomestico *minino = new GatoDomestico(2015, "Tijuana", "Esfinge", "German");
	Felino *EstrellaCirco = new Felino(2014, "Mexicali", "Bengala", "Espectacular");
	
	cout<<"Dietas: "<<endl;
	cout<<"Gato: "<<minino->ImprimirDieta()<<endl;
	cout<<"Felino: "<<EstrellaCirco->ImprimirDieta()<<endl;
	
	cout<<"\nAno de nacimiento - Lugar de nacimiento: "<<endl;
	cout<<"Gato: "<<minino->getANO_NACIMIENTO()<<" - "<<minino->getLUGAR_NACIMIENTO()<<endl;
	cout<<"Felino: "<<EstrellaCirco->getANO_NACIMIENTO()<<" - "<<EstrellaCirco->getLUGAR_NACIMIENTO()<<endl;
	
	cout<<"\nCambiar el nombre del dueno del gato: "<<endl;
	string NuevoDueno;
	cout<<"Digite el nuevo nombre del dueno: ";
	getline(cin,NuevoDueno);
	minino->setNOMBRE_DUENO(NuevoDueno);
	cout<<"El nuevo nombre del dueno es: "<<minino->getNOMBRE_DUENO()<<endl;
	
	cout<<"\nRaza"<<endl;
	cout<<"Gato: "<<minino->getRAZA()<<endl;
	cout<<"Felino: "<<EstrellaCirco->getRAZA()<<endl;
	
	cout<<"\nCambiar el nombre del dueno del circo: "<<endl;
	string NuevoCirco;
	cout<<"Digite el nuevo nombre del circo: ";
	getline(cin,NuevoCirco);
	EstrellaCirco->setNOMBRE_CIRCO(NuevoCirco);
	cout<<"El nuevo nombre del circo es: "<<EstrellaCirco->getNOMBRE_CIRCO()<<endl;
	
	delete minino;
	delete EstrellaCirco;
	return 0;
}

