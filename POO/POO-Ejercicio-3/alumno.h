//Arreglo de objetos

class alumno
{
	//Atributos
	private:
		float calMate, calProgra, prom;
		
	//Metodos
	public:
        /*Cuando utilizamos un arreglo de objetos dinamico, en este caso, no se inicializan ninguno de los atributos. Es decir, 
	    anteriormente se solia inicializar los atributos al momento de crear el objeto. Pero, en este caso, lo unico que hacemos es
	    definir el tamano del arreglo de objetos dinamico. Por lo tanto, al hacer esto, entonces no necesitamos definir ningun 
		metodo constructor como en ejercicios anteriores. O bien, basta con solo poner el constructor pero vacio.		    
		
		alumno(float calMate, float calProgra) //Constructor 1: inicializamos las variables. (opcional)
		{
			calMate = calMate;
			calProgra = calProgra;
		}
		*/
		
		alumno() //Constructor 2. por defecto para la creacion de arreglo de objetos. (opcional)
		{
			
		}
		
		void pedirDatos();
		void mostrarDatos();
};

