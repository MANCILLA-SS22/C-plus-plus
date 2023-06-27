//Implementacion de la primera persona

#include<iostream>
using namespace std;

class persona
{
	//Atributos
	private:
		string nombre;
		int edad;
		string ine;
		
	//Metodos
	public:
		persona(string _nombre, int _edad)
		{
			nombre = _nombre;
			edad = _edad;
		}
		
		persona(string _ine)
		{
			ine = _ine;
		}
		
		void correr()
		{
			cout<<"Soy "<<nombre<<", tengo "<<edad<<" anios y estoy corriendo un maraton"<<endl;
		}
		
		void correr(int km)
		{
			cout<<"He corrido "<<km<<" kilometros"<<endl;
		}
};
