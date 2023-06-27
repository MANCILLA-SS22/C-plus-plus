#include<iostream>
#include<conio.h>
using namespace std;

struct Imaginario{
    int real,img;
}z1,num[100];

int i,n;

void PedirDatos();

Imaginario Suma(Imaginario,Imaginario[100]);

void MuestraDatos(Imaginario);

int main()
{
    PedirDatos();
    Imaginario res = Suma(z1,num);
    MuestraDatos(res);
    
    system("pause");
    return 0;
}

void PedirDatos()
{
    cout<<"Digite la cantidad de numeros a sumar: ";cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\nParte real: "<<endl; 
        cin>>num[i].real;
        cout<<"Parte imaginaria: "<<endl;
        cin>>num[i].img;
    }
}

Imaginario Suma(Imaginario z1, Imaginario num[100])
{
    z1.real = 0; // 1  3  6
    z1.img = 0;  // 3  7  13
    for(i=0; i<n; i++)
    {//    3         3          3
        z1.real = z1.real + num[i].real;
        z1.img = z1.img + num[i].img;
    }//    7         7          6
    return z1;
}

void MuestraDatos(Imaginario res)
{
    cout<<"\nEl resultado es: ";
    cout<<"("<<res.real<<"+"<<res.img<<"i"<<")"<<endl;
}
