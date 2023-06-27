#include <iostream>
#include <conio.h>
using namespace std;

int hallarMax(int *,int );

int main()
{
	const int longitud = 5;
	int numero[longitud] = {1,2,8,4,5};

	cout << "El mayor elemento del vector es: " << hallarMax(&numero[0], longitud) << endl; // numero = &numero[0]

    getch ();
	return 0;
}

int hallarMax(int *numero, int longitud)
{
	int max = -9999;
	for (int i = 0; i < longitud; i++)
	{
		if ( *(numero + i) > max)
		{
			max = *(numero + i);
		}
	}
	return max;
}



/* OPCION ALTERNA 2
int hallarMax(int *numero, int longitud)
{
	int max = -9999;
	for (int i = 0; i < longitud; i++)
	{
		if (numero [i] > max)
		{
			max = numero [i];
		}
	}
	return max;
}
*/

/* OPCION ALTERNA 3
int hallarMax(int *numero, int longitud)
{
	int max = -9999;
	for (int i = 0; i < longitud; i++)
	{
		if (*numero > max)
		{
			max = *numero ;
		}
		numero++;
	}
	return max;
}
*/
