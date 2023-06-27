#include<iostream>
#include<conio.h>
using  namespace std;

//nombre_función(tipo_de_dato nombrevector[], int tamaño];
void cuadrado(int [], int); 
void mostrar(int [], int);

const int TAM=5;
int VEC[TAM]={1,2,3,4,5};
int main()
{ 
    cout<<"vector inicial: { ";
    for(int i=0;i<TAM;i++)
	{
        cout<<VEC[i]<<" ";
    }
    cout<<"}";
    cuadrado(VEC,TAM);

	cout<<"\nCuadrado del vector inicial: { ";
	mostrar(VEC,TAM);
    cout<<"}";

	getch();
    return 0;

}

void cuadrado(int VEC[], int TAM)
{
    for (int i=0;i<TAM;i++)
	{
        VEC[i]*=VEC[i];
    } 
}

void mostrar(int VEC[], int TAM)
{
    for(int i=0;i<TAM;i++)
	{
        cout<<VEC[i]<<" ";
    }
}
