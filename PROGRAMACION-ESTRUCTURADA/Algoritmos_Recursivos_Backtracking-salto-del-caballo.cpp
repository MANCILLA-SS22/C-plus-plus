//Algoritmo del problema del salto del caballo.
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

const int N = 5;//Al utilizar const, especificamos que el valor de N jamas va a cambiar y se mantendra fijo
int tablero [N][N];//Creamos la matriz de 64 casillas
int d[8][2] = { {2,1}, {1,2}, {-1,2}, {-2,1}, {-2,-1}, {-1,-2}, {1,-2}, {2,-1}  };//Aarreglo con los 8 posibles movimientos que puede realizar el caballo a su alrededor. 8 = movimientos, 2 = direccion en X y Y del tablero.

void EscribirTablero();//Funcion para desplegar el tablero.
void SaltoCaballo(int, int, int, bool &); 

int main()
{
	bool exito = false; //"exito" sera falso mientras aun no se termine el proceso.
	int fila = 2; //El caballo se encuentra en la fila 2 del tablero
	int columna = 2; //El caballo se encuentra en la columna 2 del tablero
	tablero[fila][columna] = 1; //Especificamos la posicion en la que se encuentra el caballo en la matriz y lo igualamos a 1, que es el movimiento inicial.
	
	SaltoCaballo(2, fila, columna, exito); //Le enviamos primero los movimientos. Pero como ya tenemos elmovimiento 1 definido arriba, entonces le mandaremos el siguiente, que es 2. Despues le enviamos las posiciones en la que se encuentra el caballo y finalmente si es falso o verdadero.
    
    if(exito)//Si exito es verdadero
	{
		cout<<"Camino encontrado"<<endl;//Entonces hemos terminado
		EscribirTablero();//Mandamos a llamar a la funcion para que muestre el tablero hasta donde haya llegado.
    }
    
    else
    {
    	cout<<"Camino no encontrado"<<endl;
    }
	
	getch();
    return 0;
}

void SaltoCaballo(int i, int x, int y, bool &exito) /*"i" es el numero de movimientos que se van a copiar en la matriz. "x" y "y" son las coordenadas INICIALES que tiene el caballo en  el tablero y "bool &exito" ayudara a saber si ya se recorrio todo el tablero o si aun no se ha terminado. Es decir, dentro de la  función se modifica su valor y también se modifica la variable original. */ 
{
	int nx, ny; //Estas variables almacenaran las siguientes coordenadas de los siguientes movimientos que hara el caballo.
	int k = 0;// Este iterador serivra para controlar los 8 desplazamientos del caballo.

	do
	{
		k++; 
		nx = x + d[k-1][0]; /*[k-1] es para seleccionar cual movimiento seleccionar de los 8 que hay en el arreglo "d". Posteriormente, se coloca [0]  porque 0 es la posicion del primer valor que en el eje x. Despues, se coloca [1] porque 1 es la posicion del segundo valor  que en el eje y. Si tenemos, por ejemplo, {2,1}, entonces 2 pertenece a "x" y 1 pertenece al eje "y". Se deben sumar esas nuevas coordenadas a las coordenadas iniciales porque si no las sumamos, el caballo se colocaria en otra posicion diferente a la de donde se ecuentra en el lugar que definimos arriba (columna = 2 y fila = 2).*/
		ny = y + d[k-1][1];
		
		if( (nx>=0) && (nx<N) && (ny>=0) && (ny<N) && (tablero[nx][ny] == 0) ) /*Verificar si las coordenadas son correctas. Verificar que las coordenadas tanto para filas y columnas esten dentro del  rango permitido. Es decir, no pueden tener numeros negativos, por eso se dice que es =>0, y tampoco debe estar en una posicion fuera de N^2. Finalmente, si la posicion en la que se encuentre el caballo o la nueva coordenada sea 0, es decir, que esa posicion todavia no haya sido visitada, entocnes se hace lo siguiente. Recordar que no se pueden volvver a visitar las mismas casillas. */
		{
			//Guardamos el movimiento
			tablero[nx][ny] = i;//Almacenamos el valor de "i" que mandamos desde la funcion principal, el cual primeramente empezaria valiedo 2 y despues ese valor ira cambiando cada que hagamos la recursividad.
			EscribirTablero();//Mostrar como se esta moviendo el caballo por todo el tablero.
			
			if(i < N*N) //5*5=25     Si el numero de movimientos es menor al numero de casillas que tiene el tablero (definido arriba),
			{
				SaltoCaballo(i+1, nx, ny, exito); // hacemos recursividad mandando a llamar a la misma funcion pero ahora le mandamos i+1, que representa un siguiente movimiento, luego las nuevas cordenadas y finalmente "exito" para verificar si aun no se ha completado.
				if( !exito )// Si exito sigue siendo falso, entonces el movimiento que acabmos de realizar no alcanzo la solucion.
				{
					tablero[nx][ny] = 0;// se borra la anotacion y lo igualamos a 0. Es decir, el movimiento que acabamos de hacer no nos dio un buen resultado, o sea, necesitamos regresar y hacer otro movimiento porque por el que ibamos no nos llevo a ningun sitio correcto. Por ejemplo, si en la matriz nuestro ultimo resultado fue un 15 en cualquier posicion de la matriz, pero despues de esa movimento, nos es imposible poder desplazarnos en "L", entonces borramos ese 15, saliendo de la recursividad en la que estemos y al 14 en el que nos quedamos, buscamos otra posicion que nos permita seguir moviendonos en "L" de manera continua.
				}
			}
			
			else //Si lo de arriba no se cumple, significa que ya se llenaron todas las 25 casillas. O sea, finalizamos y exito cambia a true. Lo que significa que, como exito se paso por referencia, al haber cambiado su estado de false a true, se actualizara en la funcion main, lo que provocara que despliegue el mensaje final.
			{
				exito = true;
			}
		}
	}while( (k<8) && !exito );//Hacer mientras el iterador k sea menor al numero de movimientos, que son 8, y mientras no haya tenido exito, o sea, que no este lleno el tablero.
    
}


void EscribirTablero()
{
	int i,j;
	for(i=0; i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			cout<<tablero[i][j]<<"|";
		}
		cout<<endl;
	}
	cout<<endl;
}
