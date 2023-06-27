#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{
    int n, i, j;
    cout<<"Digite un numero: ";
    cin>>n;

    for (i = 1; i <= n; i++)
    {
        cout<<endl;

        for (j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
    }

    for (i = n-1; i >= 0; i--)
    {
        cout << endl;

        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
    }

    getch();
    system("cls");
    return 0;
}
