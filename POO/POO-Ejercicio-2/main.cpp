#include <iostream>
#include "persona.h"

int main(int argc, char** argv) 
{
	persona* persona1 = new persona("german", 22);
	persona1->correr();
	
	persona*  persona2 = new persona("123456789");
	persona2->correr(4);
	
	return 0;
}
