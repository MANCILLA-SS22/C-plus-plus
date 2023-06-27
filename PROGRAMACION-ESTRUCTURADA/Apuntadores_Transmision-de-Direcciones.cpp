//Ejemplo : Vamos a cambiar el valor de 2 variables

#include<iostream>
#include<stdlib.h>
using namespace std;

void intercambio(float *, float *);//Prototipo
float numero1, numero2, aux;

int main()
{
    cout<<endl<<"Digite el numero 1: ";
    cin>>numero1;
    cout<<endl<<"Digite el numero 2: ";
    cin>>numero2;

    intercambio(&numero1,&numero2); //SIEMPRE EL AMPERSAND ANTE DEL NOMBRE DE LA VARIABLE


    system("pause");
    return 0;
}

void intercambio(float *numero1, float*numero2)
{
    aux = *numero1;
    *numero1 = *numero2;
    *numero2 = aux;

    cout<<endl<<"Ahora el numero 1 es : "<<*numero1;
    cout<<endl<<"Ahora el numero 2 es : "<<*numero2<<endl;
}
