/*Escribe un numero que, al escribir como dato un numero entero positivo N, calcule el resultado de la siguiente serie:

                            1 + (1/2) + (1/3) + (1/4)+... + (1/N)    */
#include <iostream>
using namespace std;

int n,i;
double resultado;

int main()
{
    cout<<"Introduzca el numero de elementos: ";
    cin >>n;

    resultado=0;
    for (i=1; i <= n; i++)
    {
        resultado = resultado + (1.0/i);
    }
    cout << "El resultado es: " <<resultado << endl;

    return 0;
}
