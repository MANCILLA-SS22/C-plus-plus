#include<iostream>
#include<conio.h>
using namespace std;

struct Persona
{
	char nombre[30];
	int edad;
}res, *puntero_persona = &res;

void pedirDatos(); //Prototipo de funcion
void mostrarDatos(Persona *puntero_persona);

int main()
{
	pedirDatos();
	mostrarDatos(puntero_persona);
	
	getch();
	return 0;
}

void pedirDatos()
{
	cout<<"Digite su nombre: ";
	cin.getline(puntero_persona->nombre,30,'\n'); // (*puntero_persona).nombre = puntero_persona->nombre
	cout<<"Digite su edad: ";                     
	cin>>puntero_persona->edad;                   // (*puntero_persona).edad = puntero_persona->edad
}

void mostrarDatos(Persona *puntero_persona)
{
	cout<<"\nSu nombre es: "<<puntero_persona->nombre<<endl;
	cout<<"Su edad es: "<<puntero_persona->edad<<endl;
}
