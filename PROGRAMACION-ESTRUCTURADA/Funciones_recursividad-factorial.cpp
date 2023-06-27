/*Recursividad

factorial de un numero 3¡=3*2¡

 0¡=1
 
 factorial(n)=1         ,si n=0
        n*factorial(n-1),si n>0
 
*/
#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int n);

int main()
{	
	cout<<"Factorial: "<<factorial(10)<<endl;
	
	getch();
	return 0;
}

int factorial(int n)
{
	if(n==0){//Caso Base
		n=1;
	}
	else{//Caso General
		n = n * factorial(n-1);//n=n*factorial(n-1)
	}
	return n;
}
