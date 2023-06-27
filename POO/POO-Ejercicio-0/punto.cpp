#include "punto.h"// dentro de las comillas se coloca el nombre de la clase creada. En el se indica que se utiliza el archivo .h

void punto::setX(int valorX) //Esta sintaxis se usa para indicar a que clase pertenece dicho metodo
{
	x = valorX;
}

void punto::setY(int valorY)
{
	y = valorY;
}

int punto::getX()
{
	return x;
}

int punto::getY()
{
	return y;
}
