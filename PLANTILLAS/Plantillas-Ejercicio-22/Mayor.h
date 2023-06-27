#include <iostream>
using namespace std;

//Plantilla de funcion
template <typename T, typename T2>
T2 mayor(T dato1, T2 dato2)
{
	
/*Como el valor que pertenece a T2 es de tipo float y asi mismo, es el mayor, entonces retornara el mismo valor (60.2). 
Ahora, en este caso, ponemos "T", el resultado sera el mismo pero ahora sera de tipo "int" ya que el dato1 pertenece a 
T, y el valor introducido es de tipo int, (5).*/
	
	if(dato1>=dato2)
	{
		return dato1;
	}
	else
	{
		return dato2;
	}
}
