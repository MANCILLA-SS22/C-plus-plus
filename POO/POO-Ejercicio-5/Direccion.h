#include <iostream>
using namespace std;

class Direccion
{
	private:
		string Direccion_1;
	
	public:
		Direccion(string Direccion_1)
		{
			this->Direccion_1 = Direccion_1;
		}
		
		Direccion()
		{
			
		}
		
		~Direccion()
		{
			
		}
		
		string getDireccion()
		{
			return Direccion_1;
		}
};
