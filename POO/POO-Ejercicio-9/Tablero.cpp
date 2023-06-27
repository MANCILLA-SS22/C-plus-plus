#include<iostream>
#include "Tablero.h"
using namespace std;

void Tablero::moverArriba(int n)
{
	y += n;
	//y = y + n;
}

void Tablero::moverAbajo(int n)
{
	y -= n;
	//y = y - n;
}

void Tablero::moverDerecha(int n)
{
	x += n;
	//x = x + n;
}

void Tablero::moverIzquierda(int n)
{
	x -= n;
	//x = x - n;
}

int Tablero::getX()
{
	return x;
}

int Tablero::getY()
{
	return y;
}
