#include <iostream>
using namespace std;

class Barco
{
	private:
		string nombre;
		
	public:
		Barco(string nombre)
		{
			this->nombre = nombre;
		}
		
		~Barco()
		{
			
		}
		
		void indicarBarco()
		{
			cout<<"Desplazamiento por agua"<<endl;
		}
		
		string getNOMBRE()
		{
			return nombre;
		}
};
