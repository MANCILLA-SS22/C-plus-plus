#include <stdlib.h>
#include <iostream>
#include<conio.h>
using namespace std;

void Valnuevo(int&,int&);
int xnum,ynum;
int main()
{
	cout<<"Digite dos numeros: "; 
	cin>>xnum>>ynum;
	Valnuevo(xnum,ynum);
	
	cout<<"El nuevo valor del primer numero es: "<<xnum<<endl;
	cout<<"El nuevo valor del segundo numero es: "<<ynum<<endl;
	getch();
	return 0;
}

void Valnuevo(int& xnum, int& ynum)
{
	cout<<"El valor del primer numero es: "<<xnum<<endl;
	cout<<"El valor del segundo numero es: "<<ynum<<endl;
	
	xnum=89;
	ynum=45;
}
