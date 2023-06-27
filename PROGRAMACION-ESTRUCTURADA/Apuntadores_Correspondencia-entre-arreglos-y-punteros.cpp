#include<iostream>
#include<conio.h>

using namespace std;


int main()
{
	int n[100],t;
	int *dir_n;
	
	dir_n = &n[0];
	cout<<"Digite el Tamano del arreglo: ";cin>>t;
	
	for(int i=0;i<t;i++)
	{
			cout<<"Digite un Numero ["<<i<<"]: ";
			cin>>n[i];
		}
		cout<<"\n";
		
		for(int i=0;i<t;i++)
		{
          cout<<"Posicion de Memoria "<<"["<<n[i]<<"]"<<" es: "<<dir_n++<<endl;
          /*Se coloca ++ a la direccion de memoria debido a que esta guardara los valores en distintas memorias. 
		  De lo contrario, guardara todos los valores en una sola direccion de memoria*/
		}
		
	getch();
	return 0;
}
