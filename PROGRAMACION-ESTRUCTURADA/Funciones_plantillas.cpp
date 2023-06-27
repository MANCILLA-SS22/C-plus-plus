/* sacar el valor absoluto de un numero*/

#include<iostream>
#include<conio.h>
using namespace std; 

/*template <class *variable*> permite recibir un tipo de dato, ya sea, bouble, int, float, etc. y de esa manera
evita que pongamos mas funciones para cada tipo de dato*/
template <class TIPOD>
void mostrarAbs(TIPOD);

int main()
{  
    int num1 = 4;
    float num2 = 56.56;
    double num3 = 123.43534;
    int num4 = -8;
    
    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);
    mostrarAbs(num4);

getch();
return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero)
{
	if (numero<0)
	{
		numero = numero * -1;
	}
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}


