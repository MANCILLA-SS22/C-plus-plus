#include <iostream>
#include <math.h>
#include"Poligono.h"
using namespace std;

class Rectangulo : public Poligono
{
	private:
		float base,altura;
		
	public:
		Rectangulo(float base, float altura)
		{
			this->base = base;
			this->altura = altura;
		}
		
		float perimetro()
		{
			float perimetroRec = 2*base+2*altura;
			return perimetroRec;
		}
		
		float area()
		{
			float areaRec = base*altura;
			return areaRec;
		}
};
