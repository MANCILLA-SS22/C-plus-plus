//Implementacion de la clase DiaAno

class DiaAno
{
	//Atributos
	private:
		int dia,mes;
		
	//Metodos
	public:
		DiaAno(int _dia, int _mes) //Metodo constructor
		{
			dia = _dia;
			mes = _mes;
		}
		
		/* la x hace referencia al objeto que le vamos a mandar, ya sea "hoy" o "cumple". Y se le asigna & porque el objeto es de 
		tipo dinamico y lo que va a recibir es la posicion de la memoria de ese objeto*/
		bool igual(DiaAno& x); 
		void visualizar();
};
