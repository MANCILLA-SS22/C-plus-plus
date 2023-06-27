#include <iostream>
#include "Barco.h"
#include "Avion.h"
using namespace std;
//La clase HidroAvion va a tener un tipo de herencia multiple porque hereda tanto de barco, como de avion. Se hereda todo lo publico y protegido de ambas clases. 
class HidroAvion : public Barco , public Avion
{
	private: 
	string codigo;
	
	public://Constructor de una clase derivada cuando tiene herencia multiple
		HidroAvion(string nombre, string modelo, string codigo) : Barco(nombre), Avion(modelo)
		{
			this->codigo = codigo;
		}
		
		~HidroAvion()
		{
			
		}
		
		string getCODIGO()
		{
			return codigo;
		}
		
		void mostrarDatos()
		{
			cout<<"Nombre: "<<getNOMBRE()<<endl;
			cout<<"Modelo: "<<getMODELO()<<endl;
			cout<<"Codigo: "<<codigo<<endl;
		}
};
