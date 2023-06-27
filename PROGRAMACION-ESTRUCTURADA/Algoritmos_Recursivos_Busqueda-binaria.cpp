//Busqueda binaria

#include <iostream>
using namespace std;

int busquedaBinaria(int a[], int dato, int inferior, int superior)
{
	int mitad;
	
	if(inferior > superior)// no encontradp
	{
		return -1;
	}
	
	else
	{
		mitad = (inferior+superior)/2;
		if (dato == a[mitad])
		{
			return mitad;
		}
		
		else if(dato > a[mitad])
		{
			return busquedaBinaria(a, dato, mitad+1, superior);
		}
		
		else
		{
			return busquedaBinaria(a, dato, inferior, mitad-1);
		}
	}
}

int main()
{
	int arreglo[6] = {3,4,5,8,9,10};
	int dato = 9;
	int resultado = busquedaBinaria(arreglo,dato,0,5);

	if(resultado == -1)
	{
		cout<<"El dato no ha sido encontrado"<<endl;
	}
	
	else
	{
		cout<<"El dato ha sido encontrado en la posicion: "<<resultado<<endl;
	}
	
    return 0;
}
