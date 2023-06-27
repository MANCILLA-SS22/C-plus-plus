#include<iostream>
using namespace std;

class Tablero
{
	
	private:
		int x,y;
		
	public:
		Tablero(int x, int y)//Constructor
		{
			this->x = x;
			this->y = y;
		}
		
		void moverArriba(int);
		void moverAbajo(int);
		void moverIzquierda(int);
		void moverDerecha(int);
		
		int getX();//Obtener el valor actual de "x" y "y"
		int getY();
};
