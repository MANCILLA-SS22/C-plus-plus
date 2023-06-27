/*Ejercicio 21: Escriba una funci�n recursiva que calcule un n�mero elevado a una 
potencia entera mayor o igual que cero: x^y. 

	potencia(x,y) = x                  , y=1
				    x*potencia(x,y-1)  , y>1
*/

#include<iostream>
#include<conio.h>
using namespace std;

int potencia(int,int);
int base,exponente;

int main()
{	
	cout<<"Digite numero base: ";
	cin>>base;
	cout<<"Digite exponente: ";
	cin>>exponente;
	
	cout<<"\nResultado: "<<potencia(base,exponente)<<endl;	
	
	getch();
	return 0;
}

int potencia(int x,int y)
{
	int res;
	if(y==1){//Caso base
		res = x;
	}
	else{//Caso general
		res = x*potencia(x,y-1);
	}
	return res;
}
/*
3^3
3 --> 3
3 --> 2 
3 --> 1 = 3  Una vez que el exponente es igual a 1, entonces res devuelve un 3 a la funcion, el cual es el de la base

res = base*potencia(base,exponente-1)
res = 3*3 = 9

3 - 2  = 9
res = 3*9 = 27

3 - 3 = 27

*/
