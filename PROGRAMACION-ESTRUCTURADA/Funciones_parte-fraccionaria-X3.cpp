#include<iostream>
#include<stdlib.h>
using namespace std;

void ask_data();
float decimal(float x);

double n;

int main()
{
    ask_data();
    decimal(n);
    cout<<"\nEl valor de los decimales de "<<n<<", es "<<decimal(n)<<endl;
    
    system("pause");
    return 0;
}

void ask_data()
{
    cout<<"Ingrese un numero con decimales: "; cin>>n;
}

float decimal(float x)
{
    while(x >= 1)
    {
        x = x-1;
    }
    return x;
}
