#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

void ordenacionShell(float a[], int);
void intercambio(float &, float &);

    int main()
{
    float arreglo[] = {4, 6, 1, 9, 5, 10, 2, 11, 19, 7}; // n = 10
    cout<<"Arreglo original"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arreglo[i] << "|";
    }

    ordenacionShell(arreglo, 10);

    cout << "\n\nArreglo ordenado  - Forma ascendente" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arreglo[i] << "|";
    }

    cout << "\n\nArreglo ordenado  - Forma descendente" << endl;
    for (int i = 9; i >= 0; i--)
    {
        cout << arreglo[i] << "|";
    }

    getch();
    system("cls");
    return 0;
}
                                       //   j               k             
void ordenacionShell(float a[], int n) //  {4, 6, 1, 9, 5, 10, 2, 11, 19, 7}
{                                      //      j               k
    int salto, i, j, k;              // "j" representa el valor del lado izquierdo del arreglo y "k" el valor del lado derecho

    salto = n / 2; // salto = 10/2 = 5        salto = 5/2 = 2.5 = 2          salto = 2/2 = 1         salto = 1/2 = 0.5 = 0
    while (salto>0)
    {      //      5       10
        for (i = salto; i < n; i++)  //La primer midad del arreglo es de la posicion 0 a 4, y la segunda mitad es de 5 a 9.
        {//     5 -   5  =  0
            j = i - salto;           //Inicia en la posicon 0 del arreglo porque salto=5 y i=5.
            while (j>=0)
            {
                k = j + salto;    //Este valor se usa para dividir el arreglo y hacer la comparacion con el otro extremo. En este caso, se comprueba en 0 y 5.
                if (a[j] <= a[k]) //Par de elementos en orden
                {
                    j = -1; // Cuando se cumple la condicion, entonces no hay nada que hacer porque estan ordenados, y decimos que j=-1 para salgamos del bucle while, 
                            // y el bucle for vuelva a iterar para avanzar una posicion. La cual ahora sera j=6-5 = 1, Y k=1+5 = 6.
                }           

                else //Par de elementos en desordenados
                {                                                                                                                                                                                                                                                                                                                                    
                    intercambio(a[j], a[k]); /* Realizamos el cambio del valor ubicado en la posicion k, con la posicion j. Cuando se realice la segunda 
                                                iteracion, con i=6, j=1 y k=6, sabremos que 6 no es menor a 2, por lo que se realiza un intercambio de posiciones. 
                                                Despues del intercambio tendremos {4, 2, 1, 9, 5, 10, 6, 11, 19, 7}.
                                                               -4  -3  -2  -1   0  1  2  3  4   5  6  7   8   9  10 */

                        j = j - salto; /* En esta linea se dice que j=1-5 = -4. Lo que quiere decir que al momento de volver a entrar al ciclo while para 
                                        verificar si el valor en posicion de j (-4) es menor al valor en posicion de k (1). Al iterar en el ciclo while, sabemos 
                                        que al no cumplir con la condicion de j>=0, entonces salimos del while e iteramos en for. */
                }
            }   
        }
        salto = salto/2; //Cuando hayamos recorrido todo el arreglo y ya no haya nada por modificar, dividimos salto/2 para volver a comprobar si el valor de un lado con
    }                    // el otro es mayor o menor. Se repite esto hasta que salto sea igual a cero.
}

void intercambio(float &x, float &y)
{
    float aux;

    aux = x;
    x = y;
    y = aux;
}