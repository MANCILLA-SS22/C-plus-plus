//Busqueda Binaria

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[] = {1,2,3,4,5,6,7,8,9,10}; 
	int half,dato;
	char band='F';

	cout << "Dijite el numero o la letra que quiere buscar en el arreglo: ";
	cin >> dato; //dato=8

	//Algoritmo de la Busqueda Binaria (Recordar que el arreglo siempre debe estar ordenado de forma ascendente)

	int buttom=0; //Posicion 0 del arreglo
	int top=10;   //Posicion 10 del arreglo
	int i=0; //Acumulador
	while((buttom<=top)&&(i<10)) //Verificamos si el valor ingresado esta dentro de top y bottom, y si i es menor a la cantidad de valores en el arreglo.
	{							 //{1,2,3,4,5,6,7,8,9,10}
		half = (buttom+top)/2;   //           b   *    t
		if(numeros[half] == dato)//Verificamos si, al momento de dividir el arreglo en 2, el valor central sea el indicado para no tener que hacer mas busquedas
		{
			band='V'; //Si cumple, entonces la bandera cambia a verdadero y se imprime el mensaje de abajo
			break; //Como ya se encontro el valor, es necesario poner break para que no se pierda tiempo buscando en las demas posicones, puesto que ya se encontro al momento de dividir el arreglo.
		}
		                        // Tomamos como ejemplo que queremos hallar 8.
		if(numeros[half]>dato)  //Verificamos si el valor que se encuentra en la mitad del arreglo, es mayor al numero que queremos encontrar. 
		{
			top = half;
			half = (buttom+top)/2;
		}
		
		if(numeros[half]<dato) //Verificamos si el valor que se encuentra en la mitad del arreglo, es menor al numero que queremos encontrar.
		{
			buttom = half;
			half = (buttom+top)/2;
		}
		i++;
	}

	if(band == 'V')
	{
		cout<<"El numero se encontro en la pos: "<<half<<endl;
	}
	else{
		cout<<"El numero NO se encontro";
	}
	
	getch();
	return 0;
}

