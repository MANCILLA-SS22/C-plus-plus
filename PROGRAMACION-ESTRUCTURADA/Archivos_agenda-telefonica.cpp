/*Ejercicio 4: Hacer un programa en C++. Para guardar numeros telefonicos que
muestre un menu con las siguientes opciones:
	
	1. Crear(nombre,apellidos,telefono)
	2. Agregar mas contactos(nombre,apellidos,telefono)
	3. Visualizar contactos existentes
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void menu();
void crear_contacto();
void agregar_contacto();
void visualizar_contacto();
struct Datos
{
	string nombre, apellidos, telefono;
}datos; //variable de tipo estructura que posee las variables internas en "struct Datos"

int main()
{
	menu();

	system("pause");
	return 0;
}

void menu()
{
	int opcion;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Crear Agenda Telefonica"<<endl;
		cout<<"2. Agregar mas contactos"<<endl;
		cout<<"3. Visualizar contactos existentes"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion)
		{
			case 1: crear_contacto();
					cout<<"\n";
					system("pause");
					break;
			case 2: agregar_contacto();
					cout<<"\n";
					system("pause");
					break;
			case 3: visualizar_contacto();
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opcion!=4);
}

void crear_contacto()
{
	ofstream archivo;
	char res;
	 
	archivo.open("AgendaTelefonica.txt", ios::out);
	
	if (archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"\tAgenta Telefonica"<<endl;//crear la agenda telefonica
	
	do{
		fflush(stdin);
		cout<<"Digite su nombre: ";
		getline(cin, datos.nombre);
		cout<<"Digite su apellido: ";
		getline(cin, datos.apellidos);
		cout<<"Digite su numero de telefono: ";
		getline(cin, datos.telefono);
		 
		//se usa esto para guardar la informacion dentro del archivo. Si no se utiliza, solo se guardarian la informacion dentro de las variables.
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellidos<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		cout<<"Desea agregar otro contacto?(s\n): ";
		cin>>res;
	}while(res == 'S' || res == 's');
	
	archivo.close();
}

void agregar_contacto()
{
	ofstream archivo;
	char res;
	
	archivo.open("AgendaTelefonica.txt", ios::app);// abriendo el archivo en modo anadir
	
	if (archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nDigite su nombre: ";
		getline(cin, datos.nombre);
		cout<<"Digite su apellodo: ";
		getline(cin, datos.apellidos);
		cout<<"\nDigite su telefono: ";
		getline(cin, datos.telefono);
		cout<<"\n";
		
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido "<<datos.apellidos<<endl;
		archivo<<"Telefono "<<datos.telefono<<endl;
		
		cout<<"Desea agregar otro contacto?(s/n)";
		cin>>res;
	}while(res == 's' || res == 'S');
	
	archivo.close();
}

void visualizar_contacto()
{
	ifstream archivo;
	string texto;
	
	archivo.open("AgendaTelefonica.txt", ios::in);//abrir el arhcivo en modo lectura
	
	if (archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while( !archivo.eof() )//mientras no sea el final del archivo
	{
		getline(archivo, texto);
		cout<<texto<<endl;
	}
	
	archivo.close();
}

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
