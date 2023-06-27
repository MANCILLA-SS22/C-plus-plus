//Devolver valores múltiples
//Sumar, Restar, Multiplicar y Dividir 2 numeros
#include <iostream>
#include <conio.h>
using namespace std;

void calcular(int, int, int&, int&, int&, float&);

int num1, num2, sum = 0, res = 0, prod = 0;
float div = 0;
int main()
{
    cout<<"Digite 2 numeros: "<<endl;
    cin>>num1>>num2;

    calcular(num1, num2, sum, res, prod, div);
    
    /*NOTA: Los resultados se estan ACTUALIZANDO y no se esta devolviendo ningun valor, puesto que la funcion void por ley no 
    cumple con esa caracteristica de devolver un valor.*/
    cout<<"\nLa suma de los 2 numeros es: "<<sum<<endl;
    cout<<"La resta de los 2 numeros es: "<<res<<endl;
    cout<<"El producto de los 2 numeros es: "<<prod<<endl;
    cout<<"La division de los 2 numeros es: "<<div<<endl;

    getch();
    return 0;
}

void calcular(int num1, int num2, int& suma, int& restar, int& producto, float& dividir)
{
    suma = num1 + num2;
    restar = num1 - num2;
    producto = num1 * num2;
    dividir = num1 / num2;
}
