#include <iostream>
#include "Personaje.h"
using namespace std;

int main(int argc, char** argv) 
{
	Personaje *character = new Personaje(100,90);
	character->mostrarDatos();
	
	modificar(*character, 60,50);
	character->mostrarDatos();
	
	return 0;
}

void modificar(Personaje &character, int atack, int defense)
{
	character.ataque = atack;
	character.defensa = defense;
}
