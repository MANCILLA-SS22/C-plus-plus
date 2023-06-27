#include <iostream>
using namespace std;

//Plantilla de funcion
template<typename T>

/*Hacemos el paso de parametros por referencia, porque si lo pasamos por valor y tomando en cuenta de que es una funcion 
void, entonces no va a retornar nada. Se debe hacer por referencia porque cualquier caso que se haga en ambas variables, 
entonces funcionara. Es decir, se va a cambiar lo que tienen almacenado y lo vamos a poner en la otra varaible*/
void intercambiar(T &dato1, T &dato2)
{
	T aux;
	
	aux = dato1;
	dato1 = dato2;
	dato2 = aux;
}
