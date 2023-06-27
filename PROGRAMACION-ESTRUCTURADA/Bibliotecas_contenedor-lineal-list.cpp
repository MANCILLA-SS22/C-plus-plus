#include <iostream>
#include <list>

using namespace std;
int main()
{
	list <int> datos;
	
	//Agregamos elementos
	datos.push_back(5);
	datos.push_back(1);
	datos.push_back(6);
	
	datos.push_front(2);
	datos.push_front(7);
	
	
	datos.sort();//Ordenar elementos de menor a mayor
	list<int>::iterator i;//Creamos el iterador
	i = datos.begin();//Se inicializa el iterador al inicio de la lista
	while(i != datos.end())//Recorrer la lista mientras el iterador sea diferente del valor final.
	{
		cout<<*i <<"|";//Imprimimos los elementos. "i" es un puntero, puesto que va a ir a la direccion de memoria de la lisa e imprimira lo que hay en ella.
		i++;
	}
	cout<<endl;
	
	//Eliminar elementos de la lista
	datos.pop_back();
	datos.pop_front();
	i = datos.begin();
	while(i != datos.end())
	{
		cout<< *i <<"|";
		i++;
	}
    
    return 0;
}
