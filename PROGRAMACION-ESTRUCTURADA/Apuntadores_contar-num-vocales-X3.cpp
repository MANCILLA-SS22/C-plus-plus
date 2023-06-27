#include <iostream>
using namespace std;

void numerovocales ();

string nombre;
int longitud, i;
char* ptro;
int vocales[5] = {0};
char vocal[5] = {'a','e','i','o','u'};

int main()
{
  numerovocales ();
  return 0;
}

void numerovocales () 
{
  cout << "Escriba su nombre: "; 
  getline (cin, nombre);
  
  // Se almacenan la cantidad de letras de la variable de tipo string
  longitud = nombre.size(); 
  
  // Se crea una matriz dinamica de "longitud" espacios. O sea la cantidad total de caracteres de la varaible de tipo string.
  ptro = new char [longitud];
  
  // Puesto que ptro es un puntero de tipo char, de "longitud" espacios, entonces a este se le asignaran los caracteres que posee
  // La varibale de tipo string "nombre"
  for (i = 0; i < longitud; i++) 
  {
      ptro[i] = nombre[i];
  }

  for (i = 0; i < longitud; i++) 
  {
      switch (ptro[i]) 
	  {
         case 'a' : case 'A' : vocales[0]++; break;
         case 'e' : case 'E' : vocales[1]++; break;
         case 'i' : case 'I' : vocales[2]++; break;
         case 'o' : case 'O' : vocales[3]++; break;
         case 'u' : case 'U' : vocales[4]++; break;
      }
  }
   cout << "\nLa cantidad de vocales seleccionadas de cada letra es: "<<endl;
   cout << vocal[0] << ": "<< vocales[0] << endl;
   cout << vocal[1] << ": "<< vocales[1] << endl;
   cout << vocal[2] << ": "<< vocales[2] << endl;
   cout << vocal[3] << ": "<< vocales[3] << endl;
   cout << vocal[4] << ": "<< vocales[4] << endl;
  
   delete[] ptro;
}
