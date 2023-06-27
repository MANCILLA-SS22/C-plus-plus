/*Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A, 
convertir su nombre a minuscula, caso contrario no convertirlo.*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main()
{
 char nombre[20];
 cout<<"Ingrese su nombre en MAYUSCULA: ";
 cin.getline(nombre,20,'\n');
 cout<<"Su nombre es: "<<strupr(nombre)<<endl;
 
 if(nombre[0]=='A')
 {
  cout<<"\nSu nombre comienza con [A]"<<endl;
  //strlwr(); Convierte el contenido de un apuntador a caracteres a minusculas
  cout<<"Su nombre queda: "<<strlwr(nombre)<<endl;
 }
 
 else
 {
  cout<<"\nSu nombre no comienza con [A]"<<endl;
  cout<<"Su nombre queda: "<<strupr(nombre)<<endl;
 }
 
 system("pause");
 return 0;
}
