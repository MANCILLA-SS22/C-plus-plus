//Creacion de objetos

#include <iostream>
#include"punto.h"
using namespace std;

int main(int argc, char** argv) 
{
	/*se coloca el nombre de la clase y despues el nombre del objeto. Dentro del parentesis, nosotros mandamos los valores de x y y, 
	los cuales son de tipo entero porque asi se definio en la clase del archivo fuente .h */
	
	punto p1 (2,1); //Creacion de un objeto dinamico	
	p1.setX(10);
	p1.setY(80);
	cout<<"El valor de X es: "<<p1.getX()<<endl;
	cout<<"El valor de Y es: "<<p1.getY()<<endl;
	
	punto* p2 = new punto();//Creacion de un objeto dinamico
	p2->setX(5); 
	p2->setY(8);
	cout<<"El valor de X es: "<<p2->getX()<<endl; 
	cout<<"El valor de Y es: "<<p2->getY()<<endl;
	return 0;
}
