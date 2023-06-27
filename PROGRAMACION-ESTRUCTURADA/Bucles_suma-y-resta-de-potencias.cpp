/* Escribir un programa que, al recibir ocmo dato un numero entero N, obtenga el resultado del a siguiente serie:
                     1^1 - 2^2 + 3^3 - . . . ± N^N */

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;


int main()
{
    int n, res=0;

    cout<<"Dijite el numero de N numeros: ";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0)
        {
            res = res - pow(i,i);
        }

        else
        {
            res = res + pow(i, i);
        }
    }

    cout<<"El resultado final es: "<<res;
    

    getch();
    system("cls");
    return 0;
}
