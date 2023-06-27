#include <iostream>
using namespace std;

class Expediente
{
	private:
		int NroExpediente;
	
	public:
		Expediente(int NroExpediente)
		{ 
			this->NroExpediente = NroExpediente;
		}
		
		Expediente()
		{
			
		}
		
		~Expediente()
		{
			
		}
		
		int getExpediente()
		{
			return NroExpediente;
		}
};
