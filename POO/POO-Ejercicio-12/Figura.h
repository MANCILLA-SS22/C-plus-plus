#include <iostream>
using namespace std;

class Figura
{
	//Atributos
	private:
		int nLados;
	
	//Metodos
	public:
		Figura(int nLados)
		{
			this->nLados = nLados;
		}
		
		~Figura()
		{
			
		}
		
		//Obtener numero de lados
		int getX()
		{
		    return nLados;
		}  
};
