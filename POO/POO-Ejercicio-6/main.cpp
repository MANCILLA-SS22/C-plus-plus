#include <iostream>
#include "estatico.h"
using namespace std;

int main(int argc, char** argv) 
{
	estatico *ob1 = new estatico();
	estatico *ob2 = new estatico();
	estatico *ob3 = new estatico();
	
	/*Se puede utilizar ob1 o ob2 y se obtendra el mismo resiltado porque el atributo contador es estatico, y ya no le 
	pertenece al objeto, sino a la clase. Si se llega a modidicar en algun momento, se modificara para todos 
	los objetos puesto que no es propio del objeto, sino de la clase,.*/
	cout<<ob1->getContador()<<endl;
	
	cout<<"La suma es: "<<estatico::suma(4,5);
	
	return 0;
}
