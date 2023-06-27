#include<iostream>
#include<conio.h>
using namespace std;

int n1, n2, nmax;
int PedirDatos();
int EncMax(int x, int y);


int main()
{
 PedirDatos();
 EncMax(n1, n2);
 
 getch();
 return 0;
}

int PedirDatos()
{
 cout << "Ingrese 2 numeros:"; cin >> n1 >> n2;
}

int EncMax(int x, int y)
{
 if(x>y)
 {
  nmax=x;
 }
 else
 {
  nmax=y;
 }
 cout << "El mayor numero es: " << nmax << endl;
 return nmax;
}

