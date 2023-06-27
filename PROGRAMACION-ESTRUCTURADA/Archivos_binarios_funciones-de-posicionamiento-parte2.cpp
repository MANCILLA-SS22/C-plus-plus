#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>
using namespace std;

void escribir();
void lectura();

int main()
{
	escribir();
	lectura();
	system("pause");
	return 0;
}

void escribir()
{
	ofstream archivo;
	
	archivo.open("posicion.txt", ios::out);
	
	if (archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Posicion actial: "<<archivo.tellp()<<endl;
	
	//archivo.seekp(5);
	
	archivo<<"Hola como estas?";
	cout<<"Posicion actial: "<<archivo.tellp()<<endl;
	
	archivo.close();
}

void lectura()
{
	ifstream archivo;
	
	archivo.open("posicion.txt", ios::in);
	
	if (archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	string linea;
	
	archivo.seekg(5);
	
	cout<<"Posicion actial: "<<archivo.tellg()<<endl;
	
	getline(archivo, linea);
	
	cout<<linea<<endl;
	
	archivo.close();
}

//.txt es para archivos de texto y .dat para archivos binarios
//ifstream permite leer el contenido de un archivo creado
//fflush(stdin); permite vaciar el buffer y permitir que se sigan introduciento mas datos (caractereres) al archivo//fflush(stdin); permite vaciar el buffer y permitir que se sigan introduciento mas datos (caractereres) al archivo
//ifstream permite leer el contenido de un archivo creado
//ofstream permite escribir en el archivo que deseemos crear o en un archivo ya existente
//.open se usa para abrir el archivo 
//c_str permite copiar el nombre que seleccionamos ingresamos arriba, para nombrar el archivo .txt creado
// ios::out permite crear el archivo si no existe o sobreescribirlo si es que ya existe otro.
// ios::in permite abrir el archivo en modo lectura
// ios::app permite agregar mas texto al fianl de un archivo
//archivo.open("c://SS22//ejemplo.txt", ios::out);si queremos guardarlo en otra carpeta, debemos usar la siguiente sintaxis
//.fail se usa para verificar si es que no existe el archivo
//exit(1); se usa para cerrar la ventana cmd (funcion de la libreria #include<stdlib.h>)
// .close se usa para cerrar el archivo
//.eof() permite recorrer todo el contenido del archivo hasta el final
//ios::out,in,app | ios::binary  es la estructura para los archivos binarios 

/*.write( (tipo_de_dato *)&posicion_de_memoria, sizeof(tipo de dato que posee &posicion_de_memoria) ); 
se utiliza en archivos binarios. El primer parametro, posee dos cosas. El primer dato es para apuntar hacia donde se desea escribir,
y el segundo es la direccion de memoria donde esta lo que quieres escribir en el archivo. En pocas palabras, es para guardar lo que
vamos a leer o escribir. El segundo parametro (sizeof), es para especidicar el tamano de lo que quieres escribir en el archivo binario*/

//.tellp() sirve para mostrar la posicion actual del cursor en el archivo (y funciona con la funcion "ofstream")
//.seekp(#) sirve para poder escribir sobre una posicion especifica. Dentro del parentesis se pone el numero exacto de la posicion donde se desea comenzar a escribir
//.tellg() sirve para mostrar la posicion actual del cursor en el archivo en modo lectura
//.seekg(#) sirve para poder escribir sobre una posicion especifica en modo lectura
