/*8. Defina una estructura que sirva para representar a una persona. La estructura 
debe contener dos campos: el nombre de la persona y un valor de tipo l�gico que indica
si la persona tiene alg�n tipo de discapacidad. Realice un programa que dado un vector
de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ninguna discapacidad y otro que contenga las personas con discapacidad.*/

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Persona
{
	char nombre[30];
	bool discapacidad;
};

int main()
{
	int n_personas,j=0,k=0;
	
	cout<<"Digite el numero de personas: ";
	cin>>n_personas;
	struct Persona personas[n_personas];
	struct Persona personasConD[n_personas];
	struct Persona personasSinD[n_personas];

	for (int i = 0; i < n_personas; i++)
	{
		fflush(stdin);
		cout<<"Nombre: "; cin.getline(personas[i].nombre,30,'\n');
		cout<<"Discapacidad (1/0)?: "; cin>>personas[i].discapacidad;
		
		if(personas[i].discapacidad == 1)
		{
			strcpy(personasConD[j].nombre, personas[i].nombre);
			j++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
		}

		else
		{
			strcpy(personasSinD[k].nombre,personas[i].nombre);
			k++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
		}
		cout<<"\n";
	}
	
	//Mostrar las personas con Discapaciadad
	cout<<"\nLa cantidad de personas con discapacidad son: "<<j<<endl;
	for(int i=0;i<j;i++)
	{
		cout<<"- "<<personasConD[i].nombre<<endl;
	}
	//Mostrar las personas sin Discapacidad
	cout << "\nLa cantidad de personas sin discapacidad son: " << k << endl;
	for(int i=0;i<k;i++)
	{
		cout<<"- "<<personasSinD[i].nombre<<endl;
	}
	getch();
	return 0;
}
