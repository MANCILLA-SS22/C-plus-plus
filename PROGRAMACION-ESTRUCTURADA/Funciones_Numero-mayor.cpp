#include<iostream>
#include<conio.h>
using namespace std; 

int EncMax(int x, int y);
int n1, n2;

int main()
{
    cout<<"Digite 2 numeros: "<<endl;
    cin>>n1>>n2;
    
    EncMax(n1, n2);
	cout<<"El mayor de los dos numero es: "<<EncMax(n1, n2);
 
 getch();
 return 0;
}


int EncMax(int x, int y)
{
	int nmax;
	if(x>y)
	{
	    nmax=x;
	}
	else
	{
	    nmax=y;
	}

	return nmax;
}

