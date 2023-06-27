#include <iostream>
#include"Estudiante.h"
using namespace std;

int main(int argc, char** argv) 
{
	Estudiante* Estudiante_1 = new Estudiante("34FG", 15.5, 56, "Calle Las Palmas #789");
	Estudiante_1->MostrarDatos();
	return 0;
}
