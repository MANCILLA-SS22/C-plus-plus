
#include <iostream>
#include <conio.h>
using namespace std;

//Definir el Prototipo de la función

template  <class DG>
void maximo(DG, DG, DG);
int main ()
{
 int valor1 = 10;
 int valor2 = 19;
 int valor3 = 18;
 
  maximo(valor1,valor2,valor3);
 
 getch ();
 return 0;
}

//Definicion de la funcion
template  <class DG>
void maximo(DG x, DG y,DG z)

{
     if (x > y and x > z)
	 { 
	    cout<<"El numero mayor es: "<<x<<endl; 
	 }
     else if (y > z)     
     { 
	    cout<<"El numero mayor es: "<<y<<endl; 
	 } 
     else 
	 { 
	    cout<<"El numero mayor es: "<<z<<endl; 
	 }
}
