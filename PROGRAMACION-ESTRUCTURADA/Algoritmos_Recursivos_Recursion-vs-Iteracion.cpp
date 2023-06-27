/*Ejemplo: 
Dado un numero natural N, obtener la suma de los digitos de que consta. Es decir, si tenemos 25, la suma de sus digitos es 2+5=7.
presentar un arlgoritmo recursivo y otro iterativo.*/

#include<iostream>
using namespace std;

//Solucion Recursiva
int sumaRecursiva(int n)
{
	//Case base
	if(n<=9)
	{
		return n;
	}
	
	//Caso recursivo
	else
	{
		/*En esta linea, por ejemplo, si tenemos n = 123, el resultado debe ser 1 + 2 + 3 = 6. Entonces, en la primera parte (n/10),
		dividimos el valor de 123 entre 10 y obtendremos un 12 y del lado derecho (n%10) obtendremos un 3, que es el residuo de la 
		division de 123/10, o sea, 3.
		Debido a que el 12 sigue siendo mayor a 9, entonces se vuelve a iterar pero en este caso, en la primera parte de 12/10
		obtendremos un 1, y en el lado derecho, obtendremos el residuo, que es 2. De esa manera, tendremos finalmente 1+2+3=6. */
		return sumaRecursiva(n/10) + n%10 ; 
	}
	
}

//Solucion iterativa
int sumaIterativa(int n)
{
	int suma=0;
	while(n > 9)
	{
		suma += n%10;
		n /= 10;
	}
	
	return(suma+n);
}

int main()
{
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	cout<<"\nLa suma de los digitos del numero es: "<<endl;
	cout<<"Algoritmo recursivo: "<<sumaRecursiva(numero)<<endl;
	cout<<"Algoritmo iterativo: "<<sumaIterativa(numero)<<endl;
	
	return 0;
}

