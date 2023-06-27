//Ordenamiento por Seleccion

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int num[] = {4,3,1,5,2};
	int i,j,aux,min;
	
	//Algoritmo del Ordenamiento por Seleccion
	for(i=0;i<5;i++) //Tomamos de ejemplo que estamos en i=0
	{
		min = i; //Asignamos el valor minimo del arreglo a la variable min. En este caso, es 4.
		for(j=i+1;j<5;j++) //Se coloca j=i+1 porque iniciamos en la segunda posicion del arrglo. Ya que se asume que el primer valor es el menor.
		{
			if(num[j] < num[min]) //Verificamos si el valor en la posicion 1 (que es 3) es menor a la posicion 0 (que es 4).
			{
				min = j; //Si cumple el con el condicional, entonces min ahora vale j+1, o sea, 3. 
			}
		}  //Realizamos la iteracion hasta llegar a j=2+1 (posicion 3, que tiene el valor de 5). Al llegar aqui, min esta en la posicion 2 (con valor de 1).
		   //Como sabemos 1 es el valor mas chico, entonces al iterar el segundo for, ya no entra en el condicional porque ni 5 ni 2 son menores a 1.

		/* Como estamos en la primera iteracion del primer bucle for, tenemos que i=0. Entonces, el valor de num[i], es 4 porque aun seguimos en la primera
		iteracion. Y ese valor lo guardamos en la variable aux.
		Despues, en la siguiente linea, el valor de num[min] (num[2]), que pertenece a 1, lo almacenamos en la variable num[i] (num[0]), porque es el valor que
		vamos a mandar al inicio. En este caso, el numero uno.
		Finalmente, en la ultima linea, el valor que tiene aux, que es el de num[0] o el 4, lo vamos a mandar a la posicion en la que se encuentra el 1, que en
		este caso, es el de num[min] (num[2]). Y entonces nos quedara: {1,2,4,5,2}            */
		aux = num[i]; 
		num[i] = num[min];
		num[min] = aux;
	}
	
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<num[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i=4;i>=0;i--){
		cout<<num[i]<<" ";
	}
	
	getch();
	return 0;
}
