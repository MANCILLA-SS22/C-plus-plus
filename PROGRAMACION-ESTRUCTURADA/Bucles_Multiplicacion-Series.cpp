/* Escribe un programa que, al escribir como dato un numero entero positivo N, calcule:
                    (1/1) / (1/2) * (1/3) / (1/4) * ...(* /)/(1/N)                         */
#include <iostream>
using namespace std;

int n,i;
double res;
int main()
{
    res=1;
    cout<<"Dijite un numero: ";
    cin>>n;

    for (i = 1; i <= n; i++)
    {
        if(i%2 == 0){
            res = res / (1.0/i);
        }

        else
        {
            res = res * (1.0/i);
        }
    }

    cout<<"El resultado es: "<<res;
    

    return 0;
} 