#include<iostream>
#include<conio.h>
#include<string.h> 

using namespace std;
int main () 
{
	char nombre[] = "German";
	char nombre2 [20];
	
	//strcpy(*variable con cadena definida, *variable a la que se desea copiar el contenido*);
	strcpy(nombre2,nombre);
	
	cout<<nombre2<<endl;
	
	
	
    getch();
    return 0;
}
