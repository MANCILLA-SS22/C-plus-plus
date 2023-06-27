#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos(int [4][4],int ,int);
void MostrarMatriz(int [4][4],int ,int);
void cuadrado(int [4][4],int ,int);
void MostrarMatrizCuadrado(int [4][4],int ,int);
int i,j, numFilas, numColumnas, matriz[4][4];;

int main () 
{
    cout <<"Digite el numero de filas: ";
    cin>>numFilas;
    cout <<"Digite el numero de columnas: ";
    cin>>numColumnas;

    pedirDatos(matriz, numFilas, numColumnas);
    MostrarMatriz(matriz, numFilas, numColumnas);
    cuadrado(matriz, numFilas, numColumnas);
    MostrarMatrizCuadrado(matriz, numFilas, numColumnas);

    getch();
    return 0;
}

void pedirDatos(int matriz[4][4], int numFilas, int numColumnas)
{
    for (i = 1; i <= numFilas; i++)
    {
        for (j = 1; j <= numColumnas; j++)
        {
            cout <<"Digite el numero "<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin >> matriz[i][j];
        }
    }
}

void MostrarMatriz(int matriz[4][4], int numFilas, int numColumnas)
{
    cout <<"\nMatriz original"<<endl;
    for (i = 1; i <= numFilas; i++)
    {
        for (j = 1; j <= numColumnas; j++)
        {
            cout <<matriz[i][j]<<" ";
        }
        cout <<"\n";
    }
}

void cuadrado(int matriz[4][4], int numFilas, int numColumnas)
{
    for (i = 1; i <= numFilas; i++)
    {
        for (j = 1; j <= numColumnas; j++)
        {
         matriz[i][j] *= matriz[i][j];
        }
    }
}

void MostrarMatrizCuadrado(int matriz[4][4], int numFilas, int numColumnas)
{
    cout <<"\nMatriz al cuadrado"<<endl;

    for (i = 1; i <= numFilas; i++)
    {
        for (j = 1; j <= numColumnas; j++)
        {
            cout <<matriz[i][j]<<" ";
        }
        cout <<"\n";
    }
}

