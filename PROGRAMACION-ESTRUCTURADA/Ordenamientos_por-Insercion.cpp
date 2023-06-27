//Ordenamiento por Insercion
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int i, pos, aux;
    int num[] = {9,7,8,5,6};
    
    for(i = 0; i < 5; i++)
    {
        pos = i;          // i = 1
        aux = num[i]; // num[1] = 7

        while (pos > 0 && num[pos - 1] > aux) // num[pos-1] > aux    =>    4 > 2     entra el bucle while
        {
            num[pos] = num[pos - 1]; //Igualamos el valor anterior con el actual puesto que es mayor. Qudaria: {9,9,8,5,6}
            pos--;                   //Disminuimos la posicion, en este caso a cero, para ver si en ese numero (9), hay otro numero mas grande que el del lado
        }                            //izquierdo. Como sabemos que esta en la posicion inicial (0), entonces ya no se ejecuta el while y pasa a la linea 22.

        num[pos] = aux; //En esta linea se actualizan los valores puesto que aun tenemos repetido el valor de 9. Como la variable aux (linea 14) tiene asignado
    }                   //el valor de 7 cuando i=1, y como sabemos que se redujo el valor de "pos" hasta 0, entonces ahora tendremos  {7,9,8,5,6}

    cout << "\nMatriz actual: 9,7,8,5,6";
    cout << "\nOrden Ascendente: ";
    for(i = 0; i < 5; i++)
    {
        cout << num[i] << " ";
    }

    cout<<"\nOrden Descente: ";
    for(i = 4; i >= 0; i--)
    {
        cout << num[i] << " ";
    }
    cout<<"\n";

    getch();
    return 0;
}
