#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
using namespace std; 

void llenaArreglo (int num [], int digitos, int base1);
int convertirAdecimal (int num [], int digitos, int base1, int base2);
void convertirAbase (int decimal, int base2);
int checabase ();
int checabase2 ();

int main()
{
    int digitos;
    int base1, base2;
    int decimal;

    cout<<"Este programa convierte numeros de ciertabase a una distinta."<<"\n\n";
    cout<<"La base maxima de conversion es Hexadecimal (16)."<<"\n\n";

    base1 = checabase ();

    cout<<"\nDe cuantos digitos es el numero a convertir?\n=> ";
    cin>>digitos;
    int num [digitos];

    cout<<"\nIntroduce el numero entero a convertir, digito a digito comenzando con la cifra más significativa"<<endl;

    llenaArreglo (num, digitos, base1);
    decimal = convertirAdecimal (num, digitos, base1, base2);
    base2 = checabase2();
    
    cout<<"\n";
    
    convertirAbase (decimal, base2);
    system ("PAUSE");
    return 0;
}

int checabase ()
{
    int x;
    cout<<"De que base es el numero a convertir?\n=>";
    cin>>x;
    if(x >=17)
    {
        cout<<"\n\n**El numero insertado excede la capacidad de por favor ingrese una base menor a 16**\n";
        cout<<"De que base es el numero a convertir?\n";
        cin>>x;
    }

    if(x <=-1)
    {
        cout<<"\n\n**El numero insertado excede la capacidad, por favor ingrese una base mayor a cero**\n";
        cout<<"De que base es el numero a convertir?\n";
        cin>>x;
    }
    return x;
}

int checabase2 ()
{
    int x;
    cout<<"\n\nA que base desea convertirlo? \n";
    cin>>x;
    if(x >=17)
    {
        cout<<"\n\n**El numero insertado excede la capacidad, por favor ingrese una base menor a 16**\n";
        cout<<"\nA que base desea convertirlo?\n";
        cin>>x;
    }

    if(x <=-1)
    {
        cout<<"\n**El numero insertado excede la capacidad por favor ingrese una base mayor a cero**\n\n";
        cout<<"\n\nA que base desea convertirlo? \n";
        cin>>x;
    }
    return x;
}

void llenaArreglo (int num [], int digitos, int base1)
{
    for (int i=0; i<digitos; i++)
    {
        cout<<"\nIntroduce el digito numero ["<<i+1<<"]: ";
        cin>>num[i];
        if (num[i]>=base1 || num[i]<0)
        {
            cout<<"\n**Numero no valido para esta base**\n";
            cout<<"\nIntroduce el digito numero %d\n"<<i+1;
            cin>>num[i];
        }
    }

    cout<<"\nEl numero que deseas convertir es: ";
    for (int i=0; i<digitos; i++)
        cout<<num [i];
}

int convertirAdecimal (int num [], int digitos, int base1, int base2)
{
    int pot, i;
    int x=0;
    for (i=digitos-1, pot=0; i>=0, pot<digitos; i--, pot++)
    {
        x+= (pow (base1, pot)*num[i] );
    }
    return x;
}

void convertirAbase (int decimal, int base2)
{
    int cociente,residuo,cont, i,j;
    int conv [50];
    i=0;
    do{
        cociente = decimal/base2;
        residuo = decimal%base2;
        conv[i] = residuo;
        decimal = cociente;
        i+=1;
    }while (cociente>0);

    cout<<"La conversion es: ";
    for (cont=i-1; cont>=0; cont--)
    {
        cout<<conv[cont];
    }
    cout<<"\n";
}
