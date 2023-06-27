#include<iostream>
#include "alumno.h"
using namespace std;

void alumno::pedirDatos()
{
	cout<<"Digite la calificacion de matematicas: "; cin>>calMate;
	cout<<"Digite la calificacion de programacion: "; cin>>calProgra;
}

void alumno::mostrarDatos()
{
	cout<<"Nota de matematicas: "<<calMate<<endl;
	cout<<"Nota de programacion: "<<calProgra<<endl;
	cout<<"Promedio: "<<(calMate+calProgra)/2<<endl;
}





