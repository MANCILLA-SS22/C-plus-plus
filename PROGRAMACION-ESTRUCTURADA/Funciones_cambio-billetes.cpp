/*Ejercicio 8: Escriba una funcin nombrada cambio() que tenga un parmetro en nmero
entero y seis parmetros de referencia en nmero entero nombrados cien, cincuenta,
veinte, diez, cinco y uno, respectivamente. La funcin tiene que considerar el
valor entero transmitido como una cantidad en dlares y convertir el valor en el nmero
menor de billetes equivalentes. */

#include<iostream>
#include<conio.h>
using namespace std;

void cambio(int,int&,int&,int&,int&,int&,int&);
int valor,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
int main()
{	
	
	cout<<"Digite un valor: ";
	cin>>valor;
	cambio(valor,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<"Cantidad de billetes a entregar como cambio:"<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Uno: "<<uno<<endl;
	
	getch();
	return 0;
}

void cambio(int valor,int& cien,int& cincuenta,int& veinte,int& diez,int& cinco,int& uno)
{    // valor=895
	cien = valor/100; //8
	valor = valor%100; //95
	
	cincuenta = valor/50; //1
	valor %= 50;          //45
	
	veinte = valor/20; //2
	valor %= 20;       //5
	
	diez = valor/10; // 0
	valor %= 10;     //5
	
	cinco = valor/5; //1
	uno = valor%5;   //0
}
