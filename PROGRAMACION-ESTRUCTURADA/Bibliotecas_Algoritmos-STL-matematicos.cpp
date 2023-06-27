#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric> //Para utilizar su funcion acumulate.
#include <iterator>
#include <cstdlib>
#include <fstream>
using namespace std;

//Funcion logica para comprobar si un numero es positivo
template<class T>
bool EsPositivo(T valor)
{
	return (valor>=0);
}

template<class T>
bool EsNegativo(T valor)
{
	return (valor<=0);
}

int main()
{
	vector<float> numeros;
	
	ifstream archivo("posicion.txt", ios::in);//Abrir archivo en modo lectura
	 
	copy(istream_iterator<float>(archivo), istream_iterator<float>(), back_inserter(numeros)); //Copiamos los elementos del archivo hacia el vector de numeros. Cabe mencionar que en istream_iterator<float>(), si no le ponemos nada en los parentesis, se dice que el iterador llegara hasta el final. Es decir, hasta que sea NULL, lo que quiere decir que ya no habra nada. back_incerter sirve para copiar todos los elementos de mi archivo (desde principio a fin) en el vector numeros. Esta recive un contenedor y funciona comno un iterador. 
	
	//Calculamos el maximo y el minimo de los elementos del vector. *max_element y *min_element son ITERADORES.
	cout<<"Maximo: "<<*max_element(numeros.begin(), numeros.end())<<endl;
	cout<<"Maximo: "<<*min_element(numeros.begin(), numeros.end())<<endl;
	
	//Calculamos el valor promedio de los elementos del vector
	cout<<"\nValor promedio: "
	<<accumulate(numeros.begin(), numeros.end(), 0.0)/numeros.size()<<endl;//Calculamos la suma de todos los elementos del bector y despues la dividimos entre la cantidad de valores que posee el vector. El tercer parametro (0.0) indica el valor inicial con el que comienza la suma.
	
	//Calculamos el conteo de los numeros positivos
	cout<<"Numeros positivos: "
	<<count_if(numeros.begin(), numeros.end(), EsPositivo<float>);//cuenta todos los elementos que cumplen con un criterio que nosotros definimos.
	
	cout<<"\nNumeros negativos: "
	<<count_if(numeros.begin(), numeros.end(), EsNegativo<float>);
	
	return 0;
}
