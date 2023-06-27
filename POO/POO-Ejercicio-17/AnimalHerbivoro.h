#include <iostream>
#include "Animal.h"
using namespace std;

class AnimalHerbivoro: public Animal
{
	public:
		void alimentarse()
		{
			cout<<"El animal herbivoro se alimenta de hiervas"<<endl;
		}
};
