//Busqueda Secuencial

//a[5] = {3,4,2,1,5}; dato = 4;

#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int a[] = {3,4,2,1,5}, dato;

	char band = 'F';
	
	cout<<"Dijite el numero o la letra que quiere buscar en el arreglo: ";
	cin>>dato;

	//Busqueda Secuencial
	int i=0;
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
		cout<<"El numero a sido encontrado en la posicion: "<<"["<<i-1<<"]"<<endl;
	}
	
	
	getch();
	return 0;
}

