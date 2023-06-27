/*Ejercicio 19: Realice una funci�n recursiva que sume los primeros n enteros positivos. 
Nota: para plantear la funci�n recursiva tenga en cuenta que la suma puede expresarse 
mediante la siguiente recurrencia:

	suma(n) = 1            , si n=1
			  n+suma(n-1)  , si n>1
*/

#include<iostream>
#include<conio.h>
using namespace std;

//Prototipo de Funci�n
int sumar(int n);

int main()
{
	int numero;
	do{
		cout<<"Digite un numero: ";
		cin>>numero;
	}while(numero<=0);
	
	cout<<"La suma es: "<<sumar(numero)<<endl;
	
	getch();
	return 0;
}

//Definici�n de Funci�n
int sumar(int n)
{
	int suma=0;
	
	if(n==1){//Caso base
		suma = 1;
	}
	else{//Caso general
		suma = n + sumar(n-1);
	}
	
	return suma;
}
/*
return 1
2 + 1 = 3
3 + 3 = 6
4 + 6 = 10

*/
