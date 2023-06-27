#include <iostream>
#include "Planta.h"
#include "AnimalCarnivoro.h"
#include "AnimalHerbivoro.h"
using namespace std;

int main(int argc, char** argv) 
{
	Planta *planta1 = new Planta();
	planta1->alimentarse();
	
	AnimalCarnivoro *animal1 = new AnimalCarnivoro();
	animal1->alimentarse();
	
	AnimalHerbivoro *animal2 = new AnimalHerbivoro();
	animal2->alimentarse();
	
	return 0;
}
