#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);
int **puntero_matriz,nFilas,nCol;

int main()
{
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
	
	for (int i=0;i<nFilas;i++)
	{
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite el numero de Filas: ";
	cin>>nFilas;
	cout<<"Digite el numero Columnas: ";
	cin>>nCol;
	
	puntero_matriz = new int*[nFilas];
	for (int i=0;i<nFilas;i++)
	{
		puntero_matriz[i] = new int [nCol];
	}
	
	cout<<"\nDigitand elementos de la matriz: "<<endl;
	for(int i=0;i<nFilas;i++)
	{
		for(int j=0;j<nCol;j++)
		{
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j); //*(*(puntero_matriz+i)+j) = puntero_matriz[i][j]
		}
	}
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol)
{
	cout<<"\n\nImprimiendo matriz:\n";
	for(int i=0;i<nFilas;i++)
	{
		for(int j=0;j<nFilas;j++)
		{
			cout<<*(*(puntero_matriz+i)+j)<<" ";
		}
		cout<<"\n";
	}
	
}
