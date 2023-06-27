#include <iostream>
#include"claseBase.h"
using namespace std;

class claseDerivada : public claseBase
{
	private:
		int numero2;
		
	public:
		claseDerivada(int numero, int numero2) : claseBase(numero)
		{
			this->numero2 = numero2;
			cout<<"Constructor de la clase derivada"<<endl;
		}
		
		~claseDerivada()
		{
			cout<<"Destructor de la clase derivada"<<endl;
		}
};
