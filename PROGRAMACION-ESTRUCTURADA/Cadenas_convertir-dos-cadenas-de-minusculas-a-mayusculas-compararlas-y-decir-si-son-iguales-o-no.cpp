#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
	char cad[30]; 
	char cad2[30];
	
	cout<<"Ingrese el primer nombre: ";
	cin.getline(cad,30);
	cout<<"Ingrese el segundo nombre: ";
	cin.getline(cad2,30);
	
	//strupr(); Convierte el contenido de un apuntador a caracteres a mayusculas
	strupr(cad);
    strupr(cad2);
 
    if (strcmp(cad, cad2)==0)
	{
	   cout<<"La palabra "<<cad<<" y "<<"la palabra "<<cad2<<" son iguales"<<endl;
	}
    else
	{
		cout<<"La palabra "<<cad<<" y "<<"la palabra "<<cad2<<" son diferentes"<<endl;
        getch();
        return 0;
    }
  
	
	
	
	
	
	
	
	
	
	
	
	
}


 
 

