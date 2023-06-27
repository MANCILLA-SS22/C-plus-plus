#include <iostream>
#include <stdlib.h>
#include <time.h>

void generar(int n, int arreglo[]);
void mostrar(int n, int arreglo[]);
using namespace std;

int main()
{

int n, *puntero;

cout<<"Digita el tamano del arreglo: ";
cin>>n;

puntero = new int [n];
generar(n, puntero);
cout<<"\n";
mostrar(n, puntero);

delete [] puntero;

system("pause>NULL");
    return 0;
}

void generar(int n, int arreglo[])
{
   srand(time(NULL));
   int aleatorio;
   for (int  i = 0; i < n; i++)
   {
       aleatorio=1+rand()%20;
       arreglo[i]=aleatorio;
       cout<<aleatorio<<"\n";
   }
}

void mostrar(int n, int arreglo[])
{
   for (int  i = 0; i < n ; i++)
   {
       cout<<i+1<<" - "<< arreglo[i]<<"\n"; 
   }
}
