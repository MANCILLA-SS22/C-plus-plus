//Declaracion de una clase

class punto 
{   //Atributos
	protected: /*Con esta funcion le puedo decir que solamente los metodos de esta misma clase pueden acceder al
	           contenido previo (que son "x" y "y").*/
		int x,y;
		
	//Metodos
	public: //Todos los metodos de cualquier clase pueden acceder a este contenido
	
	    /*Constructor 1: Nosotros definimos el valor de x y y en el otro archivo fuente. Dentro del constructor colocamos variables
	    diferentes a las definidas en los atributos. Esto se hace para evitar confuciones entre las variables de la clase como 
		atributo o las variables del constructor que estan como parametro.*/
		punto(int X, int Y)
		{
			x = X;
			y = Y;
		}
		
		punto() //Constructor 2: Nosotros definimos el valor de x y y con el valor de 0. (podemos usar este o el constructor 1)
		{
			x = 0;
			y = 0;
		}
		
		void setX(int valorX); //Establecemos el valor de x
		void setY(int valorY); //Establecemos el valor de y
		int getX(); //Obtener el valor de x
		int getY(); //Obtener el valor de y

};
