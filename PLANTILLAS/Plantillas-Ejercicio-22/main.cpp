#include <iostream>
#include "Mayor.h"
using namespace std;
int main(int argc, char** argv) 
{
	cout<<"El mayor de 2 numeros enteros es: "<<mayor(5,60.6)<<endl;
	cout<<"El mayor de 2 numeros reales es: "<<mayor(9.8,4)<<endl;
	cout<<"El mayor de 2 caracterers es: "<<mayor('r','z')<<endl;
	
	return 0;
}
