/*Ejercicio 6: Escriba una plantilla de funci�n llamada maximo() que devuelva el valor 
m�ximo de tres argumentos que se transmitan a la funci�n cuando sea llamada.
Suponga que los tres argumentos ser�n del mismo tipo de datos.*/

#include<iostream>
#include<conio.h>
using namespace std;

template <class Tipo>
Tipo maximo(Tipo, Tipo, Tipo);
int main()
{
	char dato1='e';
	char dato2='f';
	char dato3='a';
	
	cout<<"El maximo valor es: "<<maximo(dato1,dato2,dato3);
	
	getch();
	return 0;
}

template <class Tipo>
Tipo maximo(Tipo dato1, Tipo dato2, Tipo dato3)
{
	Tipo max;
	if((dato1 > dato2) && (dato1 > dato3))
	{
		max = dato1;
	}
	else if((dato2>dato1) && (dato2>dato3))
	{
		max = dato2;
	}
	else
	{
		max = dato3;
	}
	return max;
}
