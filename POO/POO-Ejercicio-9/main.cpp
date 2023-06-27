/*Ejercicio 3: Construir un programa que permita dirigir el movimiento ed un objeto
dentro de un tablero y actualice su posicion dentro de lmismo. Los movimientos posibles
son ARRIBA, ABAJO, IZQUIERDA y DERECHA. Tras cada movimeitn el programa mostrara la
nueva direccion elegida y las coordenadas de situacion del objeto dentro del tablero*/

#include <iostream>
#include "Tablero.h"
using namespace std;


int main(int argc, char** argv) 
{
	int x,y, opcion,n;
	Tablero *ob1;
	cout<<"Dijite cualquier posicion inicial del objeto en el plano cartesiano: "<<endl;
	cout<<"Posicion X: ";cin>>x;
	cout<<"Posicion Y: ";cin>>y;
	
	ob1 = new Tablero(x,y);//Objeto 1
	/*
	int x,y, opcion,n;
	cout<<"Dijite cualquier posicion inicial del objeto en el plano cartesiano: "<<endl;
	cout<<"Posicion X: ";cin>>x;
	cout<<"Posicion Y: ";cin>>y;
	Tablero *ob1 = new Tablero(x,y);//Objeto 1
	*/
	do
	{
		cout<<"\n\t.:MENU:."<<endl;
		cout<<"1. Mover Arriba"<<endl;
		cout<<"2. Mover Abajo"<<endl;
		cout<<"3. Mover Derecha"<<endl;
		cout<<"4. Mover Izquierda"<<endl;
		cout<<"5. Salir"<<endl;
		cout<<"Digite una opcion: ";
		cin>>opcion;
		
		if(opcion>=1 && opcion<=4)
		{
			cout<<"\nDigite cuantas posiciones desea mover: "<<endl;
			cin>>n;
		}
		
		
		switch(opcion)
		{
			case 1: ob1->moverArriba(n); break;
				
			case 2: ob1->moverAbajo(n); break;
				
			case 3: ob1->moverDerecha(n); break;
				
			case 4: ob1->moverIzquierda(n); break;
				
			case 5: break;
			
			default: cout<<"\nSe equivoco de opcion"<<endl;
		}
		
		cout<<"\nPosicion actual (X,Y): ("<<ob1->getX()<<","<<ob1->getY()<<")"<<endl;
	
	}while(opcion != 5);
	
	return 0;
}
