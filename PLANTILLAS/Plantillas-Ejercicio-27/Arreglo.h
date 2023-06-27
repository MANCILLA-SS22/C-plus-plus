#include <iostream>
using namespace std;

template<class T>//Plantilla de clase de tipo de dato generico
class Arreglo
{
	private:
		T* ArregloDinamico;//Arreglo dinamico que tendra tipos de datos genericos y sera de tipo puntero porque sera un arreglo dinaico.
		int indice;//Como todo arreglo debe tener un iterador, entonces esta varaible servira como eso, y sera de tipo entero.
		int nElementos;//Tambien se debera tener una varaible para el numero de elementos del arreglo dinamico.
	
	public:
		Arreglo(int n)//Metodo constructor, al que le vamos a pasar el numero de elementos del arreglo, digitado en la funcion main por el usuario.
		{
			ArregloDinamico = new T[n];//Creacion de arreglo dinamico y de tipo generico.
			indice = 0;//Se define el indice, el cual debe iniciar en cero porque todo arreglo comienza desde cero.
			nElementos = n;//El numero de elementos es igual a "n", que es la cantidad de numeros para el arreglo digitado en la funcion main. 
		}
		
		~Arreglo()//Metodo destructor que servira para liberar memoria utilizada al crear los objetos cuando el programa finaliza. Es decir, para destruir nuestro arreglo dinamico
		{
			delete[] ArregloDinamico;
		}
		
		void Agregar(T elemento)//Metodo que permitira agregar un elemento al arreglo de tipo de dato generico. Le ponemos de nombre "elemento", el cual sera el mismo que se utilizo en la funcion main.
		{
			ArregloDinamico[indice++] = elemento;//El iterador (indice) comienza en 0 y finalizara cuando llegue a la posicion 4. Por eso se coloca dentro de los corchetes de lo que viene siendo el arreglo dinamico. Y finalmente, todo eso se iguala a "elemento", que es el valor que el usuario digitara y se ira almacenando en cada espacio de memoria del arreglo hasta llegar a 5.
		}
		
		bool ArregloLleno()//Funcion para verificar si el arreglo esta lleno.
		{
			if(indice>=nElementos)//El iterador (indice), que inicializa en 0, sebe ser mayor o igual al numero de elementos que tiene el arreglo. O sea, cinco.
			{
				return true;//Retorna verdadero en caso de que este lleno
			}
			else
			{
 				return false;//Retorna verdadero en caso de que aun le falten valores.
			}
		}
		
		void MostrarArreglo()//Funcion para visualizar el arreglo
		{
			for(int i=0;i<indice;i++)//Se coloca "indice" en lugar de "nElementos" porque nosotros podemos crear nuestro arreglo y decirle que ese arreglo tendra 8 elementos, pero en algun momento el usuario podria digitar 3 elementos y querra ver el arreglo. Entoces, no servira de nada imprimir 8 posiciones si solo hay 3 posiciones llenas.
			{
				cout<<"Elemento ["<<i<<"]: "<<ArregloDinamico[i]<<endl;//Imprime el arreglo dinamico de los valores ingresados en cada posicion de memoria
			}
		}
		
		void VaciarArreglo()//Funcion para vaciar el arreglo y no ocupar ningun espacio de memoria.
		{
			for(int i=0;i<indice;i++)//Recorremos todas las posiciones del arreglo para ver los espacios ocupados.
			{
				ArregloDinamico[i] = NULL;//Dependiendo en la posicion del arreglo en la que estemos, el valor que se encuentre dentro, se hara NULL. Es decir, quedara vacio.
			}
			indice=0;//Se coloca esto porque una vez que se eliminen todos y cada uno de los valores dentro del arreglo dinamico, el iterador (indice), debe volver a su posicion inicial.
		}
};
