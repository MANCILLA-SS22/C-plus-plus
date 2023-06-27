#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main()
{
    char cadena1 [] = "Esto es una cadena ";
    char cadena2 [] = "de ejemplo ";
    char continuacion [100];
    
    //strcpy(*variable con cadena definida, *variable a la que se desea copiar el contenido*);
    //strcat(*Variable a la que se le va a anadir el primer texto*, *Variable a la que se le va a anadir la continuacion del texto*);
	
	strcpy(continuacion, cadena1);
    
    strcat(continuacion, cadena2);
    
    cout<<continuacion<<endl;
    
    getch();
    return 0;
}
