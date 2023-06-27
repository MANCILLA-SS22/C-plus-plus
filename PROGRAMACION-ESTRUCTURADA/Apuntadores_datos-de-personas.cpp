#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

struct datos
{
 string *nombre;
 int *edad;
 string *naclidad;
}n;

void llenar();
void din();
void mostrar();

int tamano;

int main() 
{
 system("color 1F");
 din();
 llenar();
 mostrar();

 system("pause");
 return 0;
}

void din()
{
 
 cout << "\tDigite la longitud del arreglo: "; cin >> tamano; 
 system("cls");
 n.edad= new int[tamano];
 n.nombre = new string[tamano];
 n.naclidad = new string[tamano]; 
}

void llenar()
{
 datos *nombre, *edad, *naclidad; 
 for (int i = 0; i < tamano; i++)
 {
  cout << "\tPersona[" << i + 1 << "]:\n";
  cout << "\tNombre: "; cin >> *n.nombre;
  cout << "\tEdad: "; cin >> *n.edad;
  cout << "\tNacionalidad: "; cin >> *n.naclidad;
  cout << "\n\n";
 }cout << "\n========================================\n";
 
}

void mostrar()
{
 
 for (int i = 0; i < tamano; i++)
 {
  cout << "\tPersona[" << i + 1 << "]:\n";
  cout << "\tNombre: " << *n.nombre << endl;
  cout << "\tEdad: "<<*n.edad<<endl;
  cout << "\tNacionalidad: "<<*n.naclidad<<endl;
  cout << "\n\n";
 }
 
}
