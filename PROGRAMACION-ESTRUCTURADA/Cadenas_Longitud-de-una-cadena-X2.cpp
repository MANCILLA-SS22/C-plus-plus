#include<iostream>
#include<conio.h>
#include<string.h> 

using namespace std;
int main () {
  char cadena[100];
  int longitud;
    cout<<"CADENA DE CARACTERES\n";
    cout<<"Digite su cadena: ";
    cin.getline(cadena,100,'\n');
    longitud=strlen(cadena);
      if (longitud>10)
	  {
         cout<<"N° de caracteres: ";
         cout<<longitud;
      }
 cin.get();
    return 0;
}
