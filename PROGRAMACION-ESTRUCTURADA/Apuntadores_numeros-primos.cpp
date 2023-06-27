/*Ejercicio 2:  Determinar si un número es primo o no; con puteros y además indicar en
que posicion de memoria se guardo el número.*

punteros - declaracion de punteros

&n = La direccion de n
*n = La variable cuya direccion esta almacenada en n
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i;
	int numero,*dir_num,cont=0;
	
	cout<<"Digite un numero: "; //Pedimos y guardamos el numero
	cin>>numero;
	
	dir_num = &numero; //Almacenamos su direccion
	
	//Determinamos si es primo o no
	for(i=1;i<*dir_num;i++)
	{
		if(*dir_num%i == 0)
		{
			cont++;
		}
	}
	
	if(cont>2)
	{
		cout<<"El numero "<<*dir_num<<" NO es primo"<<endl;
	}
	else
	{
		cout<<"El numero "<<*dir_num<<" ES PRIMO"<<endl;
		cout<<"Direccion: "<<dir_num<<endl; //Mostramos su direccion en memoria
	}
	
	
	getch();
	return 0;
}
