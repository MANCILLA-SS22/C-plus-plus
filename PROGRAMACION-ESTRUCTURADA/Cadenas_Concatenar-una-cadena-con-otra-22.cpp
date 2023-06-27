#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	char frase1[]="Hola que tal ";
	char nombre[20];
	
	cout<<"Dime tu nombre: "; 
	cin.getline(nombre,40);
	
	strcat(frase1,nombre);
	
	cout<<"\n"<<frase1<<endl;
	
	system("pause");
	return 0;
}
