#include <iostream>
using namespace std;

class claseBase
{
	private:
		int numero;
		
	public:
		claseBase(int numero)//Constructor
		{
			this->numero = numero;
			cout<<"Constructor de la clase base"<<endl;
		}
		
		~claseBase()
		{
			cout<<"Destructor de la clase base"<<endl;
		}
		
};
