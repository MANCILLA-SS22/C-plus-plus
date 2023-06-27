/*Ejercicio 6: Hacer una función para almacenar N números en un arreglo dinámico, posteriormente
en otra función buscar un número en particular.
Nota: Puedes utilizar cualquier método de búsqueda (Secuencial o Binaria). */

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void calculandoDatos(int *,int,int,int,char);

int *numeros,N,pos,dato;
char band = 'F';

int main()
{ 
 pedirDatos();
 calculandoDatos(numeros,N,pos,dato,band);
  
 delete[] numeros; 
 
 getch();
 return 0;
}

void pedirDatos()
{
 cout<<"Digite el numero de elementos: "<<endl;
 cin>>N;

 numeros = new int[N];
 
 for(int i=0;i<N;i++)
 {
  cout<<"Digite un numero ["<<i<<"]: ";
  cin>>*(numeros+i);
 }
 
 cout<<"\nIngrese el dato a buscar: ";
 cin>>dato;
}

void calculandoDatos(int *numeros,int N,int pos,int dato,char band)
{
 int i=0;
 while((band == 'F') && (i<N))
 {
  if(*(numeros+i) == dato) // numeros+i = numeros[i]
  {
   band = 'V';
  }
  i++;
 }
 
 if(band == 'F')
 {
  cout<<"\nOie we el dato no existe porque no lo ingresaste >:v"<<endl;
 }
 else
 {
  
  cout<<"\nEl dato "<<dato<<" ha sido encontrado en la posicion "<<i-1<<" en la posicion de memoria: "<<numeros+1<<endl;
 }
 
 /*cout<<"\nMostrando todos los datos del arreglo y sus posiciones: "<<endl;
 for(int i=0;i<N;i++)
 {
  cout<<"Dato: "<<numeros[i]<<endl;
  cout<<"Posicion de Memoria: "<<numeros+i<<endl;
 }*/
}
