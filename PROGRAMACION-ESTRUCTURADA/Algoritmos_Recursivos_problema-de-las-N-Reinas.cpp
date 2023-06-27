#include <iostream>
using namespace std;

const int N=4;
int reinas[N];

void PonerReina(int, bool &);
bool valido(int);
void MostrarTablero();

int main()
{
	bool solucion = false;
	
	PonerReina(0, solucion);
	
	if(solucion)
	{
		cout<<"Si existe combinacion de reinas"<<endl;
		MostrarTablero();
	}
	else
	{
		cout<<"No existe combinacion de reinas"<<endl;
	}

    return 0;
}

void PonerReina(int i, bool &solucion)
{
	int k = 0;//Inicializamos el conteo de movimientos.	
	do
	{
		reinas[i] = k; //Copiamos la reina "i" en la fila "k".
		k++;
		
		MostrarTablero();
		
		if( valido(i) )
		{
			if( i<(N-1) )
			{
				PonerReina(i+1, solucion);
				
				if(!solucion)
				{
					 reinas[i] = 0;
				}
			}
			else
			{   //Ya agregamos todas las reinas.
				solucion = true;				
			}
		}	
	}while(k<N && !solucion);
}

bool valido(int i)//Comprobamos si la reina de la columna "i" que estamos agregando, no se amenaza con ninguna reina ya puesta.
{
	bool v = true;
	
	for(int r=0; r<i; r++)
	{
		v = v && (reinas[i] != reinas [r] ); //Comprobar si no hay nadie mas en la fila
		v = v && ( reinas[i] - i != (reinas[r]-r) ); //Verificar si hay una reina en la diagonal 1
		v = v && ( reinas[i] + i != (reinas[r]+r) ); //Verificar si hay una reina en la diagonal 2
	}
	
	return v;
}

void MostrarTablero()
{
	int tablero[N][N];
	for(int i=0; i<N; i++)//Asignamos los valores del tablero a 0;
	{
		for(int j=0; j<N; j++)
		{
			tablero[i][j] = 0;
		}
	}
	
	cout<<"\nMostrando arreglo"<<endl;
	for(int i=0; i<N; i++)
	{
		cout<<reinas[i]<<"|";
	}
	cout<<endl;
	
	//Ahora asignamos el valor del arreglo hacia el tablero.
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			tablero[reinas[j]][j] = 1;
		}
	}
	
	cout<<"\nMostrando el tablero"<<endl;
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<N; j++)
		{
			cout<<tablero[i][j]<<"|";
		}
		cout<<endl;
	}
}
