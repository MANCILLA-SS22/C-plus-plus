/*12. Realice una funci�n que tome como par�metros un vector y su tama�o y diga si el vector est� ordenado crecientemente. 
Sugerencia: compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual que el 
elemento que le precede en el vector.*/

#include<iostream>
#include<conio.h>
using namespace std;

void PedirDatos();
void Comprobacion(int vec[],int);

int vec[100], tam;

int main()
{
 
 PedirDatos();
 Comprobacion(vec,tam);
 
 getch();
 return 0;
}

void PedirDatos()
{
 cout<<"Digite el tama�o del vector: ";
 cin>>tam; cout<<"\n";
 
 for(int i=0;i<tam;i++)
 {
  cout<<i+1<<". Digite un numero: ";
  cin>>vec[i];
 }
}

void Comprobacion(int vec[],int tam)
{
 int aux,i = 1;
 
 for(i=1;i<tam;i++)
 {
  if(vec[i] >= vec[i+1])
  {
   aux += 1;
  }
 }
 
 if(aux == tam)
 {
  cout<<"\nEl arreglo esta ordenado crecientemente."<<endl;
 }
 else
 {
  cout<<"\nEl arreglo NO esta ordenado crecientemente."<<endl;
 }
}
