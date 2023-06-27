/* Construye un programa que al recibir como datos dos numeros enteros positivos, obtenga e imprima todos los numeros primos gemelos comprendidos entre dichos numeros */

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{
    int n1, n2, i, aux, b, a=0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n1;
    cout << "Ingrese un segundo entero positivo: ";
    cin >> n2;

    if (n1 == n2)
    {
        cout<<"Error";
    }

    else
    {
        if (n1 > n2)
        {
            aux = n1;
            n1 = n2;
            n2 = aux;
        }

        for (i = n1; i <= n2; i++) // 10 -> 2,3,5,7
        {
            int creciente = 2;
            bool esPrimo = true;
    
            while (esPrimo && creciente < i)
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

            if (esPrimo && a == 0)
            {
                a = i; 
            }
            
            else if (esPrimo && a != 0)
            {
                b = i;
                if ( (b-a) == 2)
                {
                    cout<<a<<" y " <<b<<" son primos gemelos."<<endl;
                }
                a = i;
            }
        }
    }
    getch();
    system("cls");
    return 0;
}
