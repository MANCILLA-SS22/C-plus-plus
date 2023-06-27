
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

void pedir_datos();
void imprimir_datos(int *arreglo, int n);
void busqueda(int *arreglo, int n);
void cierto_falso();

int i,n,m,pos,*arreglo,*dir_m;
char band = 'F';

int main()
{
 pedir_datos();
 imprimir_datos(arreglo,n);
 busqueda(arreglo,n);
 cierto_falso();
 
 delete[] arreglo;
 
 getch();
 return 0;
}


void pedir_datos()
{
 cout<<"Digite la cantidad de elementos que tendra el arreglo: "; cin>>n;
 
 arreglo = new int[n];
 
 for(i=0;i<n;i++)
 {
  cout<<"Digite un numero ["<<i+1<<"]: "; cin>>*(arreglo+i);
 }
}


void imprimir_datos(int *arreglo,int n)
{
 cout<<"\nEl arreglo es: "<<endl;
 
 for(int i=0;i<n;i++)
 {
  cout<<*(arreglo+i)<<" ";
 }
 cout<<"\n";
}


void busqueda(int *arreglo, int n)
{
 cout<<"\nDigite un numero para localizarlo en el arreglo: "; 
 cin>>m;
 
 /*La posicion de m (&m) se guarda en la variable de tipo puntero dir_m. Despues, se utiliza lo que hay dentro de 
 esa posion (*dir_m), es decir, el valor de m que ahora esta dentro del puntero*/
 dir_m = &m;
 
 for(i=0;i<n;i++)
 {
  if(*(arreglo+i)==*dir_m) // arreglo+i = arreglo[i]
  {
   band = 'V';
  }
 }
}


void cierto_falso()
{
 if(band == 'V')
 {
  cout<<"El numero "<<m<<" ha sido encontrado en la posicion "<<i-1<<" de la memoria "<<arreglo+i<<endl;
 }
 else
 {
  cout<<"\nEl numero "<<*dir_m<<" no ha sido encontrado en el arreglo.";
 }
}
