/*
 Maximo elemento de un arreglo con punteros
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void CargarDatos(int *vector,int num_elementos);
void MostrarDatos(int *vector,int num_elementos);
int HallarMax(int num_elementos, int *vector);

int num;
main()
{
 
 srand(time(NULL));
 
 cout<<"Ingrese el #Elementos => ";cin>>num;
 int *vector = new int[num];//Reservamos espacio de memoria para el arreglo dinamico
 
 CargarDatos(vector,num);
 MostrarDatos(vector,num);
 int mayor = HallarMax(num,vector);
 
 cout<<endl<<"El maximo elemento => "<<mayor<<endl;
 delete[] vector;//Liberamos memoria
 
 system("PAUSE");
 return 0;
}


void CargarDatos(int *vector,int num_elementos)
{
 for(int i=0;i<num_elementos;i++)
 {
  vector[i]=rand()%11;
 }
}


void MostrarDatos(int *vector,int num_elementos)
{
 for(int i=0;i<num_elementos;i++)
 {
  cout<<vector[i]<<" ";
 }
}


int HallarMax(int num_elementos, int *vector)
{
 int mayor=vector[0];
 for(int i=0;i<num_elementos;i++)
 {
  if(vector[i]>mayor)
  {
   mayor=vector[i];
  }
 }
 return mayor;
}
