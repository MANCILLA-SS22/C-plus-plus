/*Ejercicio 4: Rellenar un arreglo con n numeros, posteriormente utilizando punteros
determinar el menor elemento del vector.*/
#include<iostream>
#include<conio.h>
using namespace std;

void Datos(int,int*,int []); 
void Proceso(int,int*,int[]);//prototipos de funciones declaradas
int main()
{
	int n,i,ChainNumber[100],*dir_num;
	
	printf("Ingrese la cantidad de numeros que desee analizar: "); cin>>n;
	
	Datos(n,dir_num,ChainNumber);
	Proceso(n,dir_num,ChainNumber);
	
	getch();
	return 0;
}
void Datos(int a,int *m,int x[])
{//Pedir n numeros para ser analizados
	for(int i=0;i<a;i++)
	{
		printf("\n%d.Ingrese Un numero: ",i+1); cin>>x[i];
	}
}

void Proceso(int a,int *m,int x[])
{
	int aux=0; 
	m=x;
	for(int i=0;i<a;i++)
	{     //Algoritmo de ordenamiento
      for(int j=0;j<a-1;j++)
	  {		
		if(x[j]>x[j+1])
		{
    		aux=x[j];
    		x[j]=x[j+1];
    		x[j+1]=aux;
		}
	  }
    }
    for(int i=0;i<a;i++)
	{
    	printf("\n%d y su posicion en la memoria es: 0x%x",x[i],m); m++;
	}	
}
