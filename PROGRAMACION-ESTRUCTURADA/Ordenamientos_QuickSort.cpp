#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;


void quickSort(float [], int, int);
void intercambio(float &, float &);

int main()
{
    float array[] = {4,7,1,8,2,10,5,9,3};

    quickSort(array, 0, 8);

    /* cout<<"Arreglo Ordenado - Forma Ascendente"<<endl;
    for (int i = 0; i < 9; i++)
    {
        cout << array[i] << "|";
    }

    cout << "\n\nArreglo Ordenado - Forma Descendente" << endl;
    for (int i = 8; i >= 0; i--)
    {
        cout << array[i] << "|";
    } */

    getch();
    system("cls");
    return 0;
}
                                                   //        i           j                      i     j                        i  j                           j  i
void quickSort(float a[], int primero, int ultimo) // n=9   {4, 7, 1, 8, 2, 10, 5, 9, 3},   {2, 7, 1, 8, 4, 10, 5, 9, 3},  {2, t, 1, 8, 4, 10, 5, 9, 3},  {2, 1, 7, 8, 4, 10, 5, 9, 3},   {2, 1} {7, 8, 4, 10, 5, 9, 3}
{                  
    int i, j;
    int central;  //Pertenece a la posicion intermedia del arreglo.
    float pivote; //Pertenece al valor que hay en la posicion de la variable central

    central = (primero + ultimo)/2;  // (0 + 8)/2 = 4    Posicion
    pivote = a[central];             // a[4]      = 2    Valor dentro de la posicion
    i = primero;                     // Almacenamos el valor de primero (0) en i.
    j = ultimo;                      // Almacenamos el valor de ultimo  (8) en j.

    do{
        while (a[i] < pivote) i++;  //Este primer while va a iterar hasta que uno de los valores a la izquierda de 2, sea mayor a este numero. Como en este caso, el primer numero que pertenece a 4, es mayor a 2, entonces el cicli while no se ejecuta y "i" se mantiene en esa posicion.
        while (a[j] > pivote) j--;  //Este segundo while va a iterar hasta que uno de los valores a la derecha de 2, sea menor a este numero. Aqui se puede observar que todos los valores de "j" son mayores a 2, por lo que si entrara al ciclo while e iterara hasta que llegue al valor central.
        if (i<=j)
        {
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
    }while (i<=j);

    if (primero < j)
    {
        quickSort(a, primero, j);
    }

    if (i < ultimo)
    {
        quickSort(a, i, ultimo);
    }
}

void intercambio(float &x, float &y)
{
    float aux;

    aux = x;
    x = y;
    y = aux;
}
