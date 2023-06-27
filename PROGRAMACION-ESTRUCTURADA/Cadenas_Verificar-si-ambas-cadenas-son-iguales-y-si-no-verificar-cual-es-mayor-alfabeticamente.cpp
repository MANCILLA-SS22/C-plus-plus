#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

/*Ejercicio 3: Pedir al usuario que digite 2 cadenas de caracteres, e indicar 
si ambas cadenas son iguales, en caso de no serlo,indicar cual es mayor alfabeticamente.*/
int main()
{
    char string1[1000];
    char string2[1000];

    cout<<"Digite el 1er string: ";
    cin.getline(string1, 1000, '\n');

    cout<<"Digite el 2do string: ";
    cin.getline(string2, 1000, '\n');

    if(strcmp(string1, string2) == 0)
        cout<<"\nAmbos strings son iguales\n";
        
    else if(strcmp(string1, string2) > 0)
        cout<<"\n"<<"*"<<string1<<"*"<<" es mayor alfabeticamente que "<<string2<<"\n"; 
		 
    else
        cout<<"\n"<<"*"<<string2<<"*"<<" es mayor alfabeticamente que "<<string1<<"\n";

    getch();
    return 0;
}
