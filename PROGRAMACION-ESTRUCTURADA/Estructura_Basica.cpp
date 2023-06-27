#include <iostream>
#include <conio.h>

using namespace std;
struct persona
{
    char nombre[20];
    int edad;
}persona2 = {"German", 24}, persona1 = {"Karla", 23};

int main()
{
    cout << "Nombre de la persona 1: " << persona1.nombre << endl;
    cout << "Edad de la persona 1: " << persona1.edad << endl;

    cout << endl;

    cout << "Nombre de la persona 2: " << persona2.nombre << endl;
    cout << "Edad de la persona 2: " << persona2.edad << endl;
    getch();
    return 0;
}

/* #include<iostream>
#include<conio.h>

using namespace std;
struct persona
{
	char nombre[30];
    int edad;
}persona2, persona1;

int main()
{
    
    cout<<"Digite el nombre: ";
    cin.getline(persona1.nombre,30,'\n');
    cout<<"\nDigite la edad: ";cin>>persona1.edad;
    
    
    cout<<"\nDigite el nombre: ";
    fflush(stdin); //Esta instruccion borra los residuos almacenados en cin. 
    cin.getline(persona2.nombre,30,'\n');
    
    cout<<"\nDigite la edad: ";cin>>persona2.edad;
    
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;
    
    cout<<endl;
    
    cout<<"Nombre: "<<persona2.nombre<<endl;
    cout<<"Edad: "<<persona2.edad<<endl;
    getch();
    return 0;
} */


