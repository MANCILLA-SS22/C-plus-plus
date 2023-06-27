//Clase padre

/*Guardian de inclusion multiple, que evita que C++ se confunda al momento de poner la misma clase en diferentes 
archivos (error de redefinicion). En este caso, vehiculo.h, que se utiliza dos veces. Al hacer esto, se dice que 
la clase "vehiculo", ya existe. Por lo tanto, cada que se llame a esta clase, ya no se necesita que se vuelva a compilar 
desde 0, porque ya se compilo una vez, asi que simplemente utiliza los datos que ya tiene.*/
#ifndef ClasePadre_H 
#define ClasePadre_H 

#include <iostream>
using namespace std;

class vehiculo
{
	private:
		string marca;
		string color;
		
	protected:
		string modelo;
		
		string getX()//Obtener el modelo
		{ 
			return modelo;
		}
		
	public:
		vehiculo(string marca, string color, string modelo) //Constructor 1
		{
			this->marca = marca;
			this->color = color;
			this->modelo = modelo;
		}
		 
		/*Lo privado de la clase base, no se hereda, pero podemos manipularlo a traves de los metodos. Los miembros privados solo 
		se pueden manipular desde el metodo de la misma clase. Si fueran publico, podrian ser manipulados cualquier otra clase*/
		string getW() //Obtener la marca
		{
			return marca;
		}
		
		string getV() //Obtener el color
		{
			return color;
		}
		
		
		void setZ(string color)
		{
			this->color = color;
		}
		

};
#endif

