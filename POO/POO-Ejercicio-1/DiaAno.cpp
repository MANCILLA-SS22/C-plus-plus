#include<iostream>
#include "DiaAno.h"

using namespace std;

//Comprobamos la igualdad de las fechas
bool DiaAno::igual(DiaAno& x) 
{// Comparamos el dia y mes ingresado por el usuario, con el dia del un objeto seleccionado y el mes del otro objeto seleccionado
	if(dia == x.dia && mes == x.mes)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void DiaAno::visualizar()
{
	cout<<"Mostrando los datos: "<<endl;
	cout<<"Mes: "<<mes<<"\nDia: "<<dia<<endl;
}
