#include<iostream>
#include<stdlib.h>
using namespace std;

void PedirDatos();
void vector(int [], int);
int numeros[10], n;

int main()
{
  PedirDatos();
  vector(numeros, n);
}

void PedirDatos()
{
  cout<<"Digite el numero de elementos del vector: ";
  cin>>n;
}

void vector(int [], int)
{
  for(int i=0;i<n;i++){
    cout<<"Digite el numero ["<<i+1<<"]: ";
    cin>>numeros[i];
  }

  cout<<"\nVisualizacion de lo que usted digito."<<endl;
  cout<<"{";
  for(int i=0;i<n;i++){
    cout<<numeros[i]<<" ";
  }
  cout<<"}";

  for(int i=0;i<n;i++){
    numeros[i]*=numeros[i];
  }

  cout<<"\nVisualizacion del vector al cuadrado."<<endl;
  cout<<"{";
  for(int i=0;i<n;i++){
    cout<<numeros[i]<<" "; 
  }
  cout<<"}";
}
