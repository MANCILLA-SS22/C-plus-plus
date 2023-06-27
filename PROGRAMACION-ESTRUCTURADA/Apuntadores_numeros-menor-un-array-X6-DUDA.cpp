#include <iostream>
#include <conio.h>
using namespace std;

void ingreso();
int menor();
int num[100], *dir_num;
int i, tam;

int main()
{

    ingreso();
    menor();

    getch();
    return 0;
}

void ingreso()
{
    cout << "Cantidad de numeros a ingresar: ";
    cin >> tam;
    for (i = 0; i < tam; i++)
    {
        cout << "Numero: ";
        cin >> num[i];
    }
    dir_num = num;
}

int menor()
{
    int min = num[0];
    int *posicion;  //Usado para almacenar la posicion correcta del numero menor
    for (i = 0; i < tam; i++)
    {
        if (*dir_num < min)
        {
            min = *dir_num;
            posicion = dir_num; //Guardamos la posicion
        }
        dir_num++;
    }
    cout << "El minimo es: " << min;
    /*La direccion supuesta corresponde a la que veo que toman de los ejercicios y doy enfasis en que no seria esta
    pues es la posicion final en la que queda dir_num y no la correspondiente al numero mostrado*/
    cout << "\nDireccion supuesta: " << dir_num; //PARA MI ESTA ESTARIA MAL
    /*La direccion corresponde a mi proposicion para la direccion correcta que seria el dato almacenado de 
	la posicion en el momento en que se guarda el valor del minimo*/
    cout << "\nDireccion: " << posicion;
}
//Si se dan cuenta las dos direcciones son diferentes debido a que nunca se guardo la posicion de memoria de 
//dir_num y lo corregi mediante *posicion almacenando su valor
