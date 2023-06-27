#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

struct Persona
{
    char nombre[50];
    int edad;
} p1[10];

void pedirDatos(struct Persona[], int);
void mostrar(struct Persona[], int);
int main()
{
    int num;
    
    cout<<"Ingrese Numero de Miembros: ";cin>>num;
    cout<<endl;
    fflush(stdin);
    pedirDatos(p1, num);
    mostrar(p1,num);
    
    return 0;
}

void pedirDatos(Persona p1[10], int num)
{
    for(int i=0;i<num;i++)
	{
        fflush(stdin);
        cout<<"Ingrese Nombre: ";
        cin.getline(p1[i].nombre,50,'\n');
        cout<<"Ingrese Edad: ";
        cin>>p1[i].edad;
    }
    cout<<endl;
}

void mostrar(Persona p1[10], int num)
{	
    cout<<"The A-Team"<<endl;
    for (int i = 0; i < num; i++)
    {
        cout << "Nombre: " << p1[i].nombre << endl;
        cout << "edad: " << p1[i].edad << endl;
    }
    cout<<endl;
}

