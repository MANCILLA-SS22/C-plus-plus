/*
new: Reserva el numero de bytes solicitados por la declaracion
delete: Libera un bloque de bytes reservado con anterioridad
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirNotas();
void mostrar();

int nCalificaciones,*Calif;

int main ()
{
 pedirNotas();
 mostrar();
 
 delete []Calif;//Liberacion de bytes usados anteriormente
 system ("pause");
 return 0;
}

void pedirNotas()
{
 cout<<"Digite el numero calificaciones: ";
 cin>>nCalificaciones;
 
 Calif = new int [nCalificaciones];//Creando el arreglo dinamico
 
 for (int i=0; i<nCalificaciones;i++)
 {
   cout<<"Ingrese una nota: ";
   cin>>Calif[i];
 }
 
}

void mostrar()
{
 cout<<"\nMostrando Notas: "<<endl;
 for(int i=0; i<nCalificaciones;i++)
 {
  cout<<Calif[i]<<endl;
 }
}
