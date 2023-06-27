/*Ejercicio 4: Rellenar un arreglo con n numeros, posteriormente utilizando punteros
determinar el menor elemento del vector.*/
#include <iostream>
using namespace std;

void bubble(int *n1, int *n2);

int main()
{
 int n1[10], *n2;
 
 cout<<"Numeros:"<<endl;
 for(int i=0;i<10;i++)
 {
  cout<<i+1<<"):";
  cin>>n1[i];
 }
 
 n2 = &n1[0];
 for(int i=0;i<10-1;i++)
 {
  for(int j=0;j<10-1-i;j++)
  {
   if( n2[j] > n2[j+1] )
   {
    bubble(&n2[j],&n2[j+1]);
   }
  }
 }
 
 system("cls");
 cout<<"El Menor es: "<<*n2<<endl;
 cout<<"Su posicion es: "<<n2;
 return 0;
}

void bubble(int *n1, int *n2)
{
 int aux;
 aux = *n1;
 *n1 = *n2;
 *n2 = aux;
}
