/*Ejercicio 5: Crear un archivo binario donde almacenar almacenar un registro que contenga
las pulsaciones de un atleta en una determinada hora, el programa debe tener un
menu con las siguientes opciones:

       1. Comenzar a digitar las pulsaciones
       2. Anadir mas pulsaciones
       3. Mostrar las pulsaciones registradas
       4. salir
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>
using namespace std;

void menu();
void escribirPulsacion();
void anadirPulsacion();
void mostrarPulsacion();
struct registro
{
	float hora;
	int pulsaciones;
};

int main()
{
	menu();
	system("pause");
	return 0;
}

void menu()
{
	int opcion;
	
	do
	{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Comenzar a digitar las pulsaciones: "<<endl;
		cout<<"2. Anadir mas pulsaciones: "<<endl;
		cout<<"3. Mostrar las pulsaciones registradas: "<<endl;
		cout<<"4. salir: "<<endl;
		cout<<"Digite una opcion: "<<endl; cin>>opcion;
		
		switch(opcion)
		{
			case 1: escribirPulsacion();
			        break;
				
			case 2: anadirPulsacion();
			        break;
				
			case 3: mostrarPulsacion();
			        break;
				
			case 4: break;
			default: cout<<"Se qeuivoco de opcion de menu"<<endl;
		}
		system("pause");
		system("cls");
	}while(opcion!=4);
}

void escribirPulsacion()
{
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat", ios::out | ios::binary);
	
	if (archivoB.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	registro pulso;
	
	cout<<"\nDigite la hora: "; cin>>pulso.hora;
	cout<<"Digite la cantidad de pulsaciones: ";cin>>pulso.pulsaciones;
	
	archivoB.write( (char *)&pulso, sizeof(registro) );
	
	archivoB.close();
}

void anadirPulsacion()
{
	ofstream archivoB;
	
	archivoB.open("pulsaciones.dat", ios::app | ios::binary);
	
	if (archivoB.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	registro pulso;
	
	cout<<"\nDigite la hora: "; cin>>pulso.hora;
	cout<<"Digite la cantidad de pulsaciones: ";cin>>pulso.pulsaciones;
	
	archivoB.write( (char *)&pulso, sizeof(registro) );
	
	archivoB.close();
}

void mostrarPulsacion()
{
	ifstream archivoB;
	
	archivoB.open("pulsaciones.dat", ios::in | ios::binary);
	
	if (archivoB.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	registro pulso;
	
	cout<<"\nMostrando pulsaciones registrada: "<<endl;
	while( !archivoB.eof() )
	{
		archivoB.read( (char *)&pulso, sizeof(registro) );
		if( !archivoB.eof() )
		{
			cout<<"Hora: "<<pulso.hora<<endl;
			cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl<<endl;
		}
	}
	
	archivoB.close();
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

