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
	multiset<int> valores;
	
	//Insertamos elementos al multiset
	valores.insert(10);
	valores.insert(2);
	valores.insert(5);
	valores.insert(20);
	valores.insert(3);
	
	//Mostrando en pantalla
	copy(valores.begin(), valores.end(), ostream_iterator<int>(cout,"|"));
	cout<<endl;
	
	//Insertar valores duplicados
	valores.insert(10);
	valores.insert(3);
	valores.insert(3);
	valores.insert(3);
	
	//Mostrando en pantalla
	copy(valores.begin(), valores.end(), ostream_iterator<int>(cout,"|"));
	cout<<endl;
	
	//Buscar un elemento en el multiset
	multiset<int>::iterator i = valores.find(3);
	if(i != valores.end())
	{
		cout<<"\nEl elemento" << *i << " SI ha sido encontrado"<<endl;
	}
	
	else
	{
		cout<<"\nEl elemento NO ha sido encontrado"<<endl;
	}
	
	//Contar cuantas veces aparece un determinado elemento
	cout<<"\nEl elemento 2 aparece "<<valores.count(3)<< " veces en el multiset"<<endl;
	
	//Eliminar un elemento del multiset
	valores.erase(3);
	copy(valores.begin(), valores.end(), ostream_iterator<int>(cout,"|"));
	cout<<endl;
	
	return 0;
}
