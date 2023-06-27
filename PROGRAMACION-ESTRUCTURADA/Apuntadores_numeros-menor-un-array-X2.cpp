/*Ejercicio 4: Rellenar un arreglo con n numeros, posteriormente utilizando punteros
determinar el menor elemento del vector.*/
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arreglo[100], *dir_arreglo, tam, menor=99999;
    
    cout<<"Seleccione el tamaño del arreglo: ";
    cin>>tam;
	
	dir_arreglo = &arreglo[0];
    for(int i=0;i<tam;i++)
	{
        cout<<"Ingrese valor de la posicion "<<i<<": ";
        cin>>arreglo[i];
    }
    
    
    dir_arreglo = &arreglo[0];
    for(int i=0;i<tam;i++)
	{
	    if (*dir_arreglo < menor)
	    {
            menor=*dir_arreglo;
        }
        dir_arreglo++;
    }

    cout<<"El menor es: "<<menor;
    cout<<endl;
    cout<<"Direccion: "<<dir_arreglo;

getch();
return 0;
}
