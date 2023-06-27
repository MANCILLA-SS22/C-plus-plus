/*Ejercicio 1 Definir una plantilla dentro de un archivo de cabecera llamado
intercambio.h que pueda intercambiar el valor de dos elementos del mismo tipo*/ 
#include <iostream>
#include "intercambio.h"
using namespace std;

int main(int argc, char** argv) 
{
	string dato1, dato2;
	cout<<"Dijite el valor del dato1: ";
	cin>>dato1;
	cout<<"Dijite el valor del dato2: ";
	cin>>dato2;
	
	//Intercambiar el valor de las dos variables.
	intercambiar(dato1,dato2);
	
	cout<<"\nLos nuevos valores son: "<<endl;
	cout<<"Dato1 = "<<dato1<<endl;
	cout<<"Dato2 = "<<dato2<<endl;
	
	return 0;
}
