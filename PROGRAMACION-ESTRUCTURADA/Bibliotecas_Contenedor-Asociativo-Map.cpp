#include <iostream>
#include <iterator>
#include <map> //para set y multiset
using namespace std;

typedef pair<int, string> par;//Usamos esto para crear un alias y asi tener que evitar poner pair<int, string> tantas veces, tal y como se muestra en la linea 17 a 19

int main()
{
	map<int,string> valores;//Creamos un mapa <clave,valor>. Recordar que "clave" = "first", y "valor" = second
	
	//Insertar elementos en el map
	valores.insert(par (5,"German"));
	valores.insert(par (2,"Mancilla"));
	valores.insert(par (1,"Chavez"));
	valores.insert(par (3,"SS22"));
	
  /*valores.insert(pair<int, string>(5,"German"));
	valores.insert(pair<int, string>(2,"Mancilla"));
	valores.insert(pair<int, string>(1,"Chavez"));*/
	
	//Mostrando el map en pantalla
	map<int, string>::iterator i;
	cout<<"Despliegue del map en pantalla"<<endl;
	for(i = valores.begin(); i != valores.end(); i++)
	{
		cout<<"Clave:"<< i->first <<" | Valor: "<< i->second <<endl;
	}
	cout<<endl;
	
	//Insertar claves duplicadas
	valores.insert(par(1, "Kangreburguito"));
	cout<<"Duplicacion de claves (sin exito)"<<endl;
	for(i = valores.begin(); i != valores.end(); i++)
	{
		cout<<"Clave:"<< i->first <<" | Valor: "<< i->second <<endl;
	} //No se pueden duplicar claves con el mismo numero cuando utilizamos map
	cout<<endl;
	
	//Modificar un valor de una clave existente
	valores[1] = "Karla";//Sintaxis para poder cambiar unicamente el valor de una clave existente (recordar que no pudemos DUPLICAR la misma clave pero si podemos crear y modificar otras).
	valores[8] = "Beatriz"; //Creamos otra clave y valor, aunque tambien lo podemos hacer utilizando " valores.insert(par (8,"Beatriz")); ". Cabe mencionar que la primera se utiliza comunmente cuando se desea crear nuevas claves y valores. Pero en el caso de la segunda, se utilizan normalmente par modificar algo.
	cout<<"Modificacion y adicion de el valor de una clave"<<endl;
	for(i = valores.begin(); i != valores.end(); i++)
	{
		cout<<"Clave:"<< i->first <<" | Valor: "<< i->second <<endl;
	}
	cout<<endl;
	
	//Buscar un elemento en el map
	i = valores.find(2);
	if(i != valores.end())
	{
		cout<<"Valor encontrado "<< i->second <<endl;
	}
	
	else
	{
		cout<<"Valor no encontrado"<<endl;
	}
	
	//Eliminar un elemento del map
	valores.erase(1);
	cout<<"\nEliminacion de valor"<<endl;
	for(i = valores.begin(); i != valores.end(); i++)
	{
		cout<<"Clave:"<< i->first <<" | Valor: "<< i->second <<endl;
	} 
	cout<<endl;
	
	
	
	return 0;
}
