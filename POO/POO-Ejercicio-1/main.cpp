#include <iostream>
#include"DiaAno.h"

using namespace std;
int main(int argc, char** argv) 
{
	DiaAno* hoy;    //Objeto 1
	DiaAno* cumple; //Objeto 2
	int dia,mes;
	
	cout<<"Introduzca la fecha de hoy, dia: ";
	cin>>dia;
	cout<<"Introduzca el numero de mes: ";
	cin>>mes;
	hoy = new DiaAno(dia,mes);
	
	cout<<"\nInttroduzca la fecha de su cumpleanos, dia: ";
	cin>>dia;
	cout<<"Introduzca el numero de mes: ";
	cin>>mes;
	cumple = new DiaAno(dia,mes);
	
	//Mostrar la fehca 
	hoy->visualizar();     cout<<endl;
	cumple->visualizar();  cout<<endl;
	
	/*Verificamos si la fecha del objeto "hoy" es igual a la del objeto "cumple". Mandamos a llamar a la funcion "igual" mandandole
	el objeto (*cumple), que es por valor, porque enviaremos el contenido que se encuentra en la direccion de la memoria.*/
	if( hoy->igual(*cumple) ) 
	{
		cout<<"\nFeliz Cumpleanos!!!"<<endl;

	}
	else
	{
		cout<<"\nQue tenga un buen dia"<<endl;

	}
	
    system("pause");
	return 0;
}
