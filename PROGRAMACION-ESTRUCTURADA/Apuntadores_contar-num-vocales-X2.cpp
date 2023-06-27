/* Pedir su nombre al usuario y devolver el número de vocales que hay. 
NOTA: Recuerda que debes utilizar punteros */
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void in(char *, int *);
void out(char *, int *);

char cadena[100]; /*tamaño maximo cadena*/
int cont[5]; /*conteo de caracteres a,e,i,o,i*/

using namespace std;
int main()
{ 
    in(cadena, cont);
    out(cadena, cont);
    
    getch();
    return 0;
}

void in(char *cadena, int *cont)
{
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena, 100, '\n');
    system ("cls");
    
    cout<<"La cadena de caracteres que ha seleccionado es: "<<strupr(cadena);
	    
    for (int i = 0; i < 5; i++)  //Limpiando valores basura del puntero
    {
        *(cont + i) = 0;
    }
    
    while (*cadena)  //conteo de valores y almacenado en puntero
    {
        switch (*cadena)
        {
        case 'A':
            *(cont + 0) = *(cont + 0) + 1;
            break;
        case 'E': 
            *(cont + 1) = *(cont + 1) + 1;
            break;
        case 'I': 
            *(cont + 2) = *(cont + 1) + 1;
            break;
        case 'O': 
            *(cont + 3) = *(cont + 1) + 1;
            break;
        case 'U': 
            *(cont + 4) = *(cont + 1) + 1;
            break;
        }
        cadena++;
    }
}

void out(char *cadena, int *cont)
{
	
    /*while (*cadena) //Mostrando la cadena
    {
        cout << *cadena;
        cadena++;
    }*/
    
    cout << "\nTotal vocales"
         << "\nCantidad (a): " << *(cont + 0)
         << "\nCantidad (e): " << *(cont + 1)
         << "\nCantidad (i): " << *(cont + 2)
         << "\nCantidad (o): " << *(cont + 3)
         << "\nCantidad (u): " << *(cont + 4);

}
