/*3. Realice un programa que calcule y muestre en la salida estandar la suma de 
los cuadrados de los 10 primeros enteros mayores que cero.*/

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{
	int res=0;
	for (int i = 1; i <=5; i++)
	{
		res = res + pow(i,2);
	}
	cout<<"La suma total es: "<<res;
	


	getch();
	system("cls");
	return 0;
}






/* #include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int suma=0,cuadrado;
	
	for(int i=1;i<=10;i++){
		cuadrado = i * i;
		suma += cuadrado;		
	}
	
	cout<<"\nLa suma de los cuadrados es: "<<suma;
	
	getch();
	return 0;
}
 */