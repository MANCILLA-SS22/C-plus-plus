#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <time.h>
using namespace std;
int NumerosAleatorios();

int main()
{
	list<int> valores(10);// Lista de 10 elementos enteros
	generate(valores.begin(), valores.end(), NumerosAleatorios);//generando numeros aleatorios en un rango de la lista.
	
	//Mostrando elementos de la lista
	ostream_iterator<int> salida(cout, "|");
	copy(valores.begin(), valores.end(), salida);
	
	//Buscamos la primera aparicion del numero 8 en la lista
	list<int>::iterator i;
	i = find(valores.begin(), valores.end(), 8);
	
	cout<<endl;
	
	//Analizamos si "i" no sobrepasa los rangos de la lista
	if(i != valores.end())
	{
		cout<<"El elemento "<<*i<<" si ha sido encontrado en la lista"<<endl;
	}
	
	else
	{
		cout<<"El elemento no ha sido encontrado"<<endl;
	}
	
	
    return 0;
}

int NumerosAleatorios()
{
	return rand()%10;
}
