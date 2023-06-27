#include <iostream>
#include"claseDerivada.h"
using namespace std;

int main(int argc, char** argv) 
{	
	claseDerivada *ob1 = new claseDerivada(5,10);
	cout<<endl;
		
	delete ob1;	
	return 0;
}
/*Una vez ejecutando el programa, al llamar al metodo constructor de claseDerivada, immediatamente va hacia la clase derivada y se 
centra en ese metodo constructor. Pero en este metodo, los primeros atributos que le pasamos, son los de la clase base, y ademas le 
indicamos que provienen de otra clase. Despues de eso, C++ va hacia la clase base, toma el constructor de esa clase e inicializa los 
atributos correspondientes. Despues, ahora si pasa a la clase derivada e inicializa todos sus atributos. En cuanto a los destructores,
sera lo opuesto a los constructores. Es decir, primero se eliminan los atrubutos de la clase hija y despues los de la clase base.*/
