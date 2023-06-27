#include<iostream>
#include<conio.h>
#include<string.h> 

using namespace std;
int main()
{
	//char palabra [] = "German";
	//char palabra2[] = {'G','e','r','m','a','n'};
	char nombre [30];
	
	cout<<"Digite su nombre; ";
	//cin.getline(*Nombre_Variable*,*espacio total de elementos*, '\n');
	cin.getline(nombre,30,'\n'); 
	
	cout<<nombre<<endl;
	

	
	
    getch();
    return 0;
}
