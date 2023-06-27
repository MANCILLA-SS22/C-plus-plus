#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;

//Funcion template para mostrar los elementos de un contenedor
template <class iter>
void MostrarEnPantalla(iter inicio, iter final)
{
	while (inicio != final)
	{
		cout<<*inicio<<"|";
		inicio++;
	}
}

int main()
{
	vector<char> letras(10);//Creando el vector de 10 elementos char
	 
	//Aregando elementos aleatorios al vector
	//srand(time(NULL));
	for(int i=0; i<10; i++)
	{
		letras[i] = 'A' + (rand() % 26);
	}
    
    //Visualizar los elementos del vector
    MostrarEnPantalla(letras.begin(), letras.end());
	cout<<endl;
	
    //Visualizar los elementos del vector al reves
    MostrarEnPantalla(letras.rbegin(), letras.rend());
    cout<<endl;
    
    //Visualizar los elementos del medio del vector (1-8)
    MostrarEnPantalla(letras.begin()+1, letras.end()-1);
    cout<<endl;
    
    return 0;
}
