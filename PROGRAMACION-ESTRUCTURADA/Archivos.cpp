#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir();

int main()
{
	escribir();
	
	system("pause");
	return 0;
}

void escribir()
{
	ofstream archivo,ios;
	string nombreArchivo, frase;
	
	cout<<"Digite el nombre del archivo (seguido de .txt): ";
	getline(cin,nombreArchivo);
	archivo.open(nombreArchivo.c_str(), ios::out);
	
	//ofstream permite escribir en el archivo que deseemos crear
	//.open se usa para abrir el archivo 
	//c_str permite copiar el nombre que seleccionamos ingresamos arriba, para nombrar el archivo .txt creado
	// ios::out permite crear el archivo si no existe o sobreescribirlo si es que ya existe otro.
	//archivo.open("c://SS22//ejemplo.txt", ios::out);si queremos guardarlo en otra carpeta, debemos usar la siguiente sintaxis
    //.fail se usa si es que no existe el archivo
    //se usa para cerrar la ventana cmd
    // .close se usa para cerrar el archivo
    
	if ( archivo.fail() )
	{
		cout<<"No se pudo abrir el archivo.";
		exit(1);
	}
	
	cout<<"\nDigite el nombre del archivo: ";
	getline(cin,frase);
	
	archivo<<frase;
	
	archivo.close();
}
