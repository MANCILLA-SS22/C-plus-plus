/* Punteros
 Crear un Arreglo dinamico con N elementos
 posteriormente buscar un elemento en particular con otra funcion
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
void CargarArreglo(int *vector, int n);
void ImprimirArreglo(int *vector,int n);
bool BuscarElemento(int *vector, int n, int x);

main()
{

 int NumElementos, ElementoX;
 cout<<"Ingrese #Elementos => ";cin>>NumElementos;
 
 int *Arreglo = new int[NumElementos];
 
 cout<<endl<<"ARREGLO ORIGINAL"<<endl<<endl;
 
 CargarArreglo(Arreglo,NumElementos);
 ImprimirArreglo(Arreglo,NumElementos);

 cout<<endl<<"Que elemento desea buscar => ";cin>>ElementoX;
 if(BuscarElemento(Arreglo,NumElementos,ElementoX)==1)
 {
  cout<<ElementoX<<" Se encuentra  en el arreglo"<<endl;
 }
 else
 {
  cout<<ElementoX<<" No se encuentra en el arreglo"<<endl;
 }
 
 system("PAUSE");
}


void CargarArreglo(int *vector, int n)
{
 srand(time(NULL));
 for(int i=0;i<n;i++)
 {
  vector[i]=1+rand()%20;
 }
}


void ImprimirArreglo(int *vector,int n)
{
 for(int i=0;i<n;i++)
 {
  cout<<vector[i]<<" ";
 }
}


bool BuscarElemento(int *vector, int n, int x)
{
 int aux=0;
 
 for(int i=0;i<n;i++)
 {
  if(vector[i]==x)
  {
   aux++;
   return 1;
   break;  
  }
 }
 
 if(aux==0)
 {
  return 0;
 }
}
