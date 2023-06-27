#include <iostream>

using namespace std;
template<class T>
class Materia
{
	private:
		string NombreMateria;
		int clave;
		T Calificacion;
		
	public:
		Materia(string NombreMateria, int clave, T Calificacion)
		{
			this->NombreMateria = NombreMateria;
			this->clave = clave;
			this->Calificacion = Calificacion;
		}
		
		void MostrarDatos()
		{
			cout<<"Nombre de la materia: "<<NombreMateria<<endl;
			cout<<"Clave: "<<clave<<endl;
			cout<<"Calificacion: "<<Calificacion<<endl;
		}
		
		void setCALIFICACION(T calificacion)
		{
			this->Calificacion = Calificacion;
		}
		
		T getCALIFICACION()
		{
			return Calificacion;
		}
};
