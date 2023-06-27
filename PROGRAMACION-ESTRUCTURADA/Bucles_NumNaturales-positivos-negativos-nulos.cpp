/* Construye un programa que, al recibir como datos N numeros naturales, determine cuantos de ellos son positivos, negativos o nulos */

#include <iostream>
using namespace std;


int main()
{
    int n, i, res, pos=0, neg=0, null=0;

    cout<<"Cuantos numero quiere ingresar? ";
    cin>>n;

    for (i = 1; i <= n; i++)
    {
        cout << "Dijite un numero natural para verificar el tipo: ";
        cin>>res;

        if (res == 0)
        {
            null++;
        }

        else if (res < 0)
        {
            neg++;
        }

        else
        {
            pos++;
        }
    }

    cout<<"\nNumeros positivos"<<" -> "<<pos;
    cout<<"\nNumeros negativos"<<" -> "<<neg;
    cout<<"\nNumeros nulos"<<" -> "<<null;

    return 0;
}
