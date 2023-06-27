#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;

//Funcion para determinar numeros aleatorios 
int NumerosAleatorios()
{
	return rand()%30;
}

//Funcion logica para calcular si un numero es par
template <class T>
bool EsPar(T x)
{
	return ((x%2) == 0);//Si el residuo de la division de este valor es igual a 0, entonces retorna true. Si no, no retorna nada
}

int main()
{
	vector<int> valores (10);
	//srand(time(NULL));
	generate(valores.begin(), valores.end(), NumerosAleatorios);//Generamos numeros aleatorios y los guardamos dentro de vector.
	
	cout<<"Mostrando elementos del vector"<<endl;
	copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|")); //Mostrando en pantalla el vector
	
	vector<int> pares;//Creamos un nuevo vector para almacenar los elementos pares
	
    vector<int>::iterator i = valores.begin();//Iterador para recorrer el vector de valores
    while( (i = find_if( i, valores.end(), EsPar<int> )) != valores.end() )//El iterador "i" se iguala con find_if porque con esta funcion, vamos a buscar no solo un valor, sino todos los que se requieren para obtener los numeros pares. Los dos primeros son los intervalos del punto inicial y el punto final del vector, mientras que EsPar<int> es la funcion a la cual le mendaremos un valor de tipo int para que haga la verificacion de si es para o no lo es.
    {
    	pares.push_back(*i);//Agregamos los nuevos numeros pares al vector pares
    	i++;
    }
    
    //Ordenar el vector pares de menor a mayor
    sort(pares.begin(), pares.end());
    
    //Mostramos el vector pares en pantalla
    cout<<"\n\nArreglo de numeros pares"<<endl;
    copy(pares.begin(), pares.end(), ostream_iterator<int>(cout,"|") );

	return 0;
}
