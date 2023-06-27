#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int i,j,k,n;
    cout<<"ingrese la altura de la piramide: ";
    fflush(stdin);
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }

        for (k = 1; k <= (2*i)-1; k++)
        {
            cout<<"*";
        }

        cout<<"\n";
    }
    getch();
    return 0;
}


