//Torres de Hanoi

#include <iostream>
using namespace std;

/*Varilla izquierda = 1, Varilla Central = 2, Varilla derecha = 3
  Disco pequeno = 1, Disco mediano = 2, Disco grande = 4, */
void hanoi(char varillaInicial, char varillaCentral, char varillaFinal, int n)
{
	//Caso base
	if(n==1)//Cuando quede mover solamente un disco, es decir, cuando sea el ultimo movimiento, quiere decir que moveremos desde la varilla inicial hasta la varilla final.
	{
		cout<<"Mover disco "<<n<<" desde la varilla "<<varillaInicial<<" a la varilla "<<varillaFinal<<endl;
	}
	
	//Caso recursivo
	else
	{
		hanoi(varillaInicial, varillaFinal, varillaCentral, n-1);
		cout<<"Mover disco "<<n<<" desde la varilla "<<varillaInicial<<" a la varilla "<<varillaFinal<<endl;
		hanoi(varillaCentral,varillaInicial,varillaFinal,n-1);
	}
}

int main()
{
	int n;
	cout<<"Digite el numero de discos para las torres de Hanoi: ";
	cin>>n;
		
	hanoi('A','B','C',n);
    return 0;
}

