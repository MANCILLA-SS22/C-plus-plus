//Busqueda Secuencial

//a[5] = {3,4,2,1,5}; dato = 4;

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[] = {3,4,2,1,5};
	int i,dato;
	char band = 'F';
	
	dato = 4; 
	//Busqueda Secuencial
	i=0;
	while((band == 'F') && (i<5))
	{
		if(a[i] == dato)
		{
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F')
	{
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'V')
	{
		cout<<"El numero a sido encontrado en la posicion: "<<i-1<<endl;
	}
	
	
	getch();
	return 0;
}




/*
//Busqueda Binaria

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int numeros[] = {1,2,3,4,5,6,7,8,9,10};
	int inf,sup,mitad,dato,i;
	char band='F';
	
	dato = 8;
	
	/* //Algoritmo de la Busqueda Binaria 
	inf=0;
	sup=10;
	i=0;
	
	while((inf<=sup)&&(i<10))
	{
		mitad = (inf+sup)/2;
		if(numeros[mitad] == dato)
		{
			band='V';
			break;
		}
		
		if(numeros[mitad]>dato)
		{
			sup = mitad;
			mitad = (inf+sup)/2;
		}
		
		if(numeros[mitad]<dato)
		{
			inf = mitad;
			mitad = (inf+sup)/2;
		}
		i++;
	}
	
	if(band == 'V')
	{
		cout<<"El numero se encontro en la pos: "<<mitad<<endl;
	}
	else{
		cout<<"El numero NO se encontro";
	}
	
	getch();
	return 0;
}
*/

