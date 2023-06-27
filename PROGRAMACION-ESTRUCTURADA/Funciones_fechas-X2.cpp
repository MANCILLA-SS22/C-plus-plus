/*Ejercicio 18: Escriba una funci�n en C++ llamada mayor() que devuelva la fecha m�s reciente de cualquier par de fechas que se le
transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a mayor(), ser� devuelta la segunda fecha.*/

#include<iostream>
#include<conio.h>
using namespace std;

struct Fecha
{
 int dia, mes, ano;
}a,b,c; // a = primera fecha, b = segunda fecha, c = resultado de la fecha mas reciente

void pedirDatos();
Fecha mayor(Fecha,Fecha,Fecha);
void imprimiendoDatos(Fecha);

int main()
{
  pedirDatos();
 Fecha x = mayor(a,b,c);
 imprimiendoDatos(x);
 
 getch();
 return 0;
}

void pedirDatos()
{
 cout<<"Ingrese el dia de la primera fecha: ";
 cin>>a.dia;
 
 while(a.dia>31 || a.dia<1)
 {
  cout<<"Por favor, Ingrese un dia valido: ";
  cin>>a.dia;
 }
 
 cout<<"Ingrese el mes de la primera fecha: ";
 cin>>a.mes;
 
 while(a.mes>12 || a.mes<1)
 {
  cout<<"Por favor, Ingrese un mes valido: ";
  cin>>a.mes;
 }
 
 cout<<"Ingrese el a�o de la primera fecha: ";
 cin>>a.ano;
 
 cout<<"\nIngrese el dia de la segunda fecha: ";
 cin>>b.dia;
 
 while(b.dia>31 || b.dia<1)
 {
  cout<<"Por favor, Ingrese un dia valido: ";
  cin>>b.dia;
 }
 
 cout<<"Ingrese el mes de la segunda fecha: ";
 cin>>b.mes;
 while(b.mes>12 || b.mes<1)
 {
  cout<<"Por favor, Ingrese un mes valido: ";
  cin>>b.mes;
 }
 
 cout<<"Ingrese el a�o de la primera fecha: ";
 cin>>b.ano;
}

Fecha mayor(Fecha a, Fecha b, Fecha c)
{
if(a.ano>b.ano)
{
  c.dia = a.dia;
  c.mes = a.mes;
  c.ano = a.ano;
} else if(b.ano>a.ano)
{
  c.dia = b.dia;
  c.mes = b.mes;
  c.ano = b.ano;
}else
{
  if(a.mes>b.mes)
  {
    c.dia = a.dia;
    c.mes = a.mes;
    c.ano = a.ano;
  } else if(b.mes>a.mes)
  {
    c.dia = b.dia;
    c.mes = b.mes;
    c.ano = b.ano;
  } else
  {
    if(a.dia>b.dia)
    {
    c.dia = a.dia;
    c.mes = a.mes;
    c.ano = a.ano;
    } else if(b.dia>a.dia)
    {
    c.dia = b.dia;
    c.mes = b.mes;
    c.ano = b.ano;
    }
  }
}

return c;
}

void imprimiendoDatos(Fecha c)
{
 cout<<"\nLa fecha mas reciente es: "<<c.dia<<"/"<<c.mes<<"/"<<c.ano<<"."<<endl;
}
