#include <iostream>
#include <iterator>
#include <map> //para set y multiset
using namespace std;

typedef pair<int, string> par;//Usamos esto para crear un alias y asi tener que evitar poner pair<int, string> tantas veces, tal y como se muestra en la linea 17 a 19

int main()
{
	multimap<int,string> valores;//Creamos un multimap <clave,valor>. Recordar que "clave" = "first", y "valor" = second
	
	//Insertar valores
	valores.insert(par(3, "Chavez"));
	valores.insert(par(1, "German"));
	valores.insert(par(5, "Asesino"));
	valores.insert(par(2, "Mancilla"));
	
	//Insertar claves duplicadas
	valores.insert(par(1, "Kangreburguito"));
	valores.insert(par(5, "Dui"));
	valores.insert(par(5, "AMLO"));
	cout<<"Duplicacion de claves"<<endl;
	
	multimap<int, string>::iterator i;
	for(i = valores.begin(); i != valores.end(); i++)
	{
		cout<<"Clave:"<< i->first <<" | Valor: "<< i->second <<endl;
	} //Con multimap si podemos duplicar y tener las mismas claves
	cout<<endl;
	
	//Conteo de las claves
	int clave = 1;
	cout<<"Conteo de la clave "<<clave<<": "<<valores.count(clave)<<endl;
	for( i=valores.lower_bound(clave); i!=valores.upper_bound(clave); i++)
	{
		cout<< i->second <<" | ";
	}
	
	return 0;
}
