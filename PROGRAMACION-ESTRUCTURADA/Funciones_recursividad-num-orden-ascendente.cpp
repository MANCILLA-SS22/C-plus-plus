/*Ejercicio 22: Escriba una funci�n escribeNumeros(int ini, int fin) que devuelva 
en la salida est�ndar los n�meros del ini al fin. Escriba una versi�n que escriba los 
n�meros en orden ascendente.

		escribeNumeros(ini,fin) = ini                             , si ini=fin
								  escribeNumeros(ini,fin-1)       , si fin>ini
*/

#include<iostream>
#include<conio.h>
using namespace std;

int escribeNumeros(int,int);

int main(){
	int ini,fin, i;
	cout<<"Escriba el inicio: ";
	cin>>ini; 
	cout<<"Escriba el fin: "; 
	cin>>fin;

	for(i=ini;i<=fin;i++){
		cout<<escribeNumeros(i,fin)<<" ";
	}	
	
	getch();
	return 0;
} 

int escribeNumeros(int x,int y){
	if(x==y){//Caso base
		return x;
	}
	else{//Caso general
		return escribeNumeros(x,y-1);
	}
}
