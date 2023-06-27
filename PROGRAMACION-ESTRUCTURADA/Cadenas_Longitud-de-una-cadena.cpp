#include<iostream>
#include<conio.h>
#include<string.h> 

using namespace std;
int main()
{
	char palabra [] = "German";
	int longitud = 0;
	
	//strlen(*variable*); permite determinar la cantidad elementos que tiene una cadena de caracteres
	longitud = strlen(palabra);
	
	cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;
	
	
	
    getch();
    return 0;
}
