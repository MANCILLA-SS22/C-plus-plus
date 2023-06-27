#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;


int main() 
{
	char palabra[30];
	char recurso[30];
	
	cout << "Escriba una palabra: ";
	cin.getline(palabra,30);	
	strcpy(recurso,palabra);
	
	// strriv = Revierte todo caracteres en string(excepto el nulo)
	strrev(recurso);
	
	// 0 indica si ambas palabras son iguales. 1 indica si son diferentes
	if (strcmp(palabra,recurso) == 0)
	{
		cout << "\nLa palabra '" << palabra << "' es polindroma." << endl;
	}
	else
	{
		cout << "\nLa palabra '" << palabra << "' no es polindroma." << endl;
	}
	
	cout << "\nPresione cualquier tecla para salir del programa.";
	getch();
	return 0;
}







