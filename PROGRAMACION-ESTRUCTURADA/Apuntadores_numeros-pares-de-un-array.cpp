#include<iostream>
#include<conio.h>

using namespace std;

int numeros[10],*dir_numeros;
void pedirdatos();
void comprobarpares();

int main()
{
 
 pedirdatos();
 comprobarpares();
 
 
 getch();
 return 0;
}

void pedirdatos()
{
 dir_numeros = &numeros[0];
 for(int i=0;i<10;i++)
 {
  cout<<"Digite un numero para la posicion "<<i+1<<" del arreglo: ";
  //cin>>numeros[i];
  cin>>*dir_numeros;
  dir_numeros++; 
 }
}

void comprobarpares()
{
 cout<<"Numeros pares del arreglo y espacio ocupado en memoria: "<<endl;
 
 dir_numeros = &numeros[0];
 for(int i=0;i<10;i++)
 {
  if(*dir_numeros%2==0)
  {
  cout<<*dir_numeros<<" , "<<dir_numeros<<endl;   
  }
  *dir_numeros++;  
 }
 
}
