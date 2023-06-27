#include <iostream>
#include "turismo.h"
#include "deportivo.h"
#include "furgoneta.h"
using namespace std;
int main(int argc, char** argv) 
{
	cout<<"-Herencia protegida-"<<endl;
	turismo *t1 = new turismo("Toyota", "Negro", "GH89",4);//Primer objeto t1 de la clase turismo
	cout<<"Color: "<<t1->getV()<<endl;
	t1->setZ("Azul"); //Esto es para cuando se desee hacer un cambio y poner un resultado diferente
	cout<<"Color: "<<t1->getV()<<endl;
	cout<<"Marca: "<<t1->getW()<<endl;
	cout<<"Modelo: "<<t1->retornarModelo()<<endl;
	
	
	cout<<"\n-Herencia privada-"<<endl;
	deportivo *d1 = new deportivo("Audi","Blanco", "KP90", 10);
	cout<<"Cilindrada: "<<d1->getA()<<endl;
	cout<<"Marca: "<<d1->retornarMarca()<<endl;
	
	
	cout<<"\n-Herencia protegida-"<<endl;
	furgoneta *f1 = new furgoneta("Kia", "Verde", "AS12", 1200);
	cout<<"Carga: "<<f1->getB()<<endl;
	cout<<"Color: "<<f1->retornarColor()<<endl;
		
	delete t1;
	delete d1;
	delete f1;
	return 0;
}
