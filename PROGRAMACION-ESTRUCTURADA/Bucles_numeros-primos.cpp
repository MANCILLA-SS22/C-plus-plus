/* Se dife que un numero N es primo si los unicos enteros positivos que lo dividen son exactamente 1 y N. 
Construye un programa que lea un numero entero positivo N y escriba todos los numeros primos menores a dicho numero */

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{

    int n;
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;

    for (int i = 2; i < n; i++)   //10 -> 2,3,5,7
    {
        int creciente = 2;
        bool esPrimo = true;

        while (esPrimo && creciente<i)
        {
            if (i % creciente == 0)
            {
                esPrimo = false;
            }

            else
            {
                creciente++;
            }
        }

        if (esPrimo)
        {
            cout<<i<<" es un numero primo."<<endl;
        }
    
    }

    getch();
    system("cls");
    return 0;
}
