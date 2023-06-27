#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;

void lectura();

int main()
{
	lectura();
	system("pause");
	return 0;
}

void lectura()
{
	ifstream archivo;
	string texto;
	archivo.open("C:\\Users\\PC\\Documents\\notas\\librerias.txt", ios::in );// abrir el archivo en modo lectura
	
	if(archivo.fail()) 
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while(!archivo.eof())//mientras no sea el final del archivo
	{
		getline(archivo,texto);//copiar todo el texto del archivo en la variable "texto"
		cout<<texto<<endl;
	}
	archivo.close();
}
    //fflush(stdin); permite vaciar el buffer y permitir que se sigan introduciento mas datos (caractereres) al archivo
	//ifstream permite leer el contenido de un archivo creado
	//ofstream permite escribir en el archivo que deseemos crear
	//.open se usa para abrir el archivo 
	//c_str permite copiar el nombre que seleccionamos ingresamos arriba, para nombrar el archivo .txt creado
	// ios::out permite crear el archivo si no existe o sobreescribirlo si es que ya existe otro.
	//archivo.open("c://SS22//ejemplo.txt", ios::out);si queremos guardarlo en otra carpeta, debemos usar la siguiente sintaxis
    //.fail se usa para verificar si es que no existe el archivo
    //exit(1); se usa para cerrar la ventana cmd (funcion de la libreria #include<stdlib.h>)
    // .close se usa para cerrar el archivo
    //.eof() permite recorrer todo el contenido del archivo hasta el final
