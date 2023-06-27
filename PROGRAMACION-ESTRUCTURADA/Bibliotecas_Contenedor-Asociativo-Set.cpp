#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cstdlib>
#include <fstream>
#include <set> //para set y multiset
using namespace std;

int main()
{
	set<int> valores; //Creando un conjunto de datos. (Sets are containers that store unique elements following a specific order.)
	
	//Insertamos los elementos en el conjunto
	valores.insert(5);
	valores.insert(3);
	valores.insert(10);
	valores.insert(1);
	valores.insert(15);
	
	//Mostrar nuestro set en pantalla
	copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
	cout<<endl;
	
	valores.insert(3); //Con la funcion set es imposible duplicar los mismos valores
	valores.insert(10);
	
	//Busqueda de un elemento dentro de set
	set<int>::iterator i = valores.find(16);
	if(i != valores.end())
	{
		cout<<"\nEl elemento "<<*i<< " si ha sido agregado"<<endl;
	}
	
	else
	{
		cout<<"\nEl elemento no ha sido encontrado"<<endl;
	}
	
	//Eliminar un elemento del set (conjunto)
	valores.erase(1);
	
	//Mostrando nuestro set en pantalla
	copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
	cout<<endl;
	
	
	
	return 0;
}
