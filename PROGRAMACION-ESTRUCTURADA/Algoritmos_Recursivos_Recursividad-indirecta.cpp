/*Ejemplo: Hacer un programa que muestre el alfabeto, caracter a caracter, utilizando recursividad mutua o indirecta*/

#include<iostream>
using namespace std;

void funcionA(char);
void funcionB(char);

int main()
{
	cout<<"Alfabeto: ";
	funcionA('Z');// A la funcionA le mandamos la letra Z para verificar el orden alfabetico
	cout<<endl;

	return 0;
}

void funcionA(char letra)//Aqui entra la letra que asignamos arriba. O sea, 'Z'.
{
	if(letra> 'A')//Si 'Z' es mayor que 'A', entonces mandamos a llamar a la funcionB
	{
		funcionB(letra);// y le mandamos el valor de la letra 'Z'
	}
	
	cout<<letra<<" ";/*Esta linea entra en accion cuando if(letra = letra 'A'), o sea, se dice que sera el caso base y ahi frena 
	                 la recursividad. Posteriormente se imprimira primero el valor de A, y despues imprimira todos aquellos valores 
					 que "quedaron en el aire". */
}

void funcionB(char letra)//Le mandamos la letra 'Z' a esta funcion
{
	funcionA(--letra);/*Volvemos a llamar a la funcionA, pero ahora en vez de mandarle la letra 'Z', le mandamos la letra 
	                   anterior a ella, o sea, 'Y'. */
	                   
}//Esto se repetira hasta que la letra llegue hasta su punto minimo, que es el de la laeta 'A'.
