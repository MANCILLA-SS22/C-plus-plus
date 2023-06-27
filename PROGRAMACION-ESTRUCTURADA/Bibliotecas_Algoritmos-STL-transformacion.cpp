#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric> //Para utilizar su funcion acumulate.
#include <iterator>
#include <cstdlib>
#include <fstream>
using namespace std;

//Funcion para pasar las letras del vector a mayusculas
void mayusculas(char &letrita)
{
	if (letrita>='a' && letrita<='z')
	{
		letrita = letrita - ('a' - 'A');//Revisar formato ASCII para entender el numero que le pertenece a cada letra.
	}
}

//Funcion unaria para determinar si una letra es una vocal
char vocales(char &letrita)
{
	return(letrita=='A'||letrita=='E'||letrita=='I'||letrita=='O'||letrita=='U') ? letrita : '-';//Esto es un condicional
}

int main()
{
	vector<char> letras;
	
	//Generamo letras para el vector
	for(int i=0; i<10; i++)
	{
		letras.push_back('a' + i); //Cuando tenemos 'a'+ i, queremos decir que conforme vaya aumentando el iterador, el valor de i tambien, el cual representa la posicion de un valor de tipo char. 'a'=1, 'b'=2 y asi sucesivamente. 
	}
	copy( letras.begin(), letras.end(), ostream_iterator<char>(cout, "|") );
	cout<<endl;
	
	//Desordenamos el vector letras
	random_shuffle(letras.begin(), letras.end());
	cout<<"\nVector desordenado"<<endl;
	copy( letras.begin(), letras.end(), ostream_iterator<char>(cout, "|") );
	cout<<endl;
	
	//Pasamos a mayusculas las letras del vector
	for_each(letras.begin(), letras.end(), mayusculas);
	cout<<"\nVector en mayusculas"<<endl;
	copy( letras.begin(), letras.end(), ostream_iterator<char>(cout, "|") );
	cout<<endl;
	
	//Imprimiendo solo las vocales
	cout<<"\nVocales del vector"<<endl;
	transform(letras.begin(), letras.end(), ostream_iterator<char>(cout,"|"), vocales);
	
	return 0;
}
