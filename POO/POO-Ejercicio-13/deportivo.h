//Herencia privada

#include <iostream>
#include "vehiculo.h"
using namespace std;

class deportivo : private vehiculo //Todo lo publico y protegido se hereda como privado.
{
	private:
		int cilindrada;
		
	public:
		deportivo(string marca, string color, string modelo, int cilindrada) : vehiculo(marca, color,modelo)
		{
			this->cilindrada = cilindrada;
		}
		
		~deportivo()
		{
			
		}
		
		int getA()//Obtener cilindrada
		{
			return cilindrada;
		}
		
		string retornarMarca()
		{
			string mensaje2 = getW();
			return mensaje2;
		}
		/*El metodo publico getW de la clase base, se heredo como privado en esta clase. Por eso ahora no podemos manipularlo
		directamente. Para ello, tenemos que manipularlo desde la misma clase pero ahora desde lo publico*/
	
};
