/*Ejercicio 6: Hacer una función para almacenar N números en un arreglo dinámico, 
posteriormente en otra función buscar un número en particular. 
NOTA: Puedes utilizar cualquier método de búsqueda(Secuencial o Binaria)*/

//CON BUSQUEDA BINARIA
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

//Prototipos de Funcion
void pedirDatos();
void buscarDato(int *elemento, int num_elementos);

int *elemento, NumElementos;

int main()
{
    pedirDatos();
    buscarDato(elemento, NumElementos);

    delete[] elemento; //Liberar la memoria utilizada para el arreglo dinamico

    getch();
    return 0;
}
//Desarrollo de Funciones
void pedirDatos()
{
    cout<<"Digite el numero de elementos que tendra el arreglo: ";
    cin>>NumElementos;
    cout<<"\n";

    elemento = new int[NumElementos]; //Creamos el arreglo

    for(int i = 0; i < NumElementos; i++)
    {
        cout<<"Ingrese el valor en la posicion "<<i<<": ";
        cin>>*(elemento + i);
    }
}

void buscarDato(int *elemento, int num_elementos)
{
    int inf, sup, mitad, dato;

    cout<<"\nDigite el dato a buscar en el arreglo: ";
    cin>>dato;

    bool igual = false;
    inf  = 0;
    sup = num_elementos;

    while(inf != sup)
    {
        mitad = (inf + sup) / 2;
        if(*(elemento + mitad) == dato)
        {
            igual = true;
            break;
        }
        if(*(elemento + mitad) > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if(*(elemento + mitad) < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    if(igual)
        cout<<"\nEl numero ha sido encontrado en la posicion "<<mitad<<endl;
    else
        cout<<"\nEl numero NO ha sido encontrado"<<endl;
}

/*
//CON BÚSQUEDA SECUENCIAL

#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

//Prototipos de Funcion
void pedirDatos();
void buscarDato(float *elemento, int num_elementos);

float *elemento;
int NumElementos;

int main()
{
    pedirDatos();
    buscarDato(elemento, NumElementos);

    delete[] elemento; //Liberar la memoria utilizada para el arreglo dinamico

    getch();
    return 0;
}
//Desarrollo de Funciones
void pedirDatos()
{
    cout<<"Digite el numero de elementos que tendra el arreglo: ";
    cin>>NumElementos;
    cout<<"\n";

    elemento = new float[NumElementos]; //Creamos el arreglo

    for(int i = 0; i < NumElementos; i++)
    {
        cout<<"Ingrese el valor en la posicion "<<i<<": ";
        cin>>*(elemento + i);
    }
}

void buscarDato(float *elemento, int num_elementos)
{
    int i = 0;
    float dato;
    bool igual = false;
    
    cout<<"\nDigite el dato a buscar en el arreglo: ";
    cin>>dato;

    while(igual == false && i < num_elementos)
    {
        if(*(elemento + i) == dato)
        {
            igual = true;
            break;
        }
        i++;
    }
    if(igual)
        cout<<"\nEl numero ha sido encontrado en la posicion "<<i<<endl;
    else
        cout<<"\nEl numero NO ha sido encontrado"<<endl;
}
*/
