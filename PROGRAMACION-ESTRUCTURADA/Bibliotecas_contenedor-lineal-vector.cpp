//Contenedor lineal - vector
#include <iostream>
#include <vector>

using namespace std;
int main()
{
	/* (1) Este metodo es solo si nosotros definimos la cantidad de vectores que poseeel arreglo
	vector<int> numeros(5); //Arreglos de enteros
	numeros[0]=5;
	numeros[1]=10;
	numeros[2]=1;
	numeros[3]=15;
	numeros[4]=20;*/
	
	
	/* (2) Este metodo es solo si nosotros queremos ir agregando mas valores aun arreglo que espacios indefinido.*/
	vector<int> numeros; //Arreglos de enteros
	numeros.push_back(5);  //Agrega elementos al final del arreglo
	numeros.push_back(10);
	numeros.push_back(1);
	numeros.push_back(15);
	numeros.push_back(20);
	
	/*numeros[2] = 7; //Si nosotros colocamos esto, entonces el valor que se encuentra en ese vector, cambiaria. En este caso, en lugar de 1 seria 7 ahora. */
	
	
	//Mostrar los elementos del arreglo del vector
	for(int i=0; i<numeros.size(); i++)
	{
		cout<<numeros[i]<<"|";
	}
	
	//numeros.pop_back();
	numeros.erase( numeros.begin()+1, numeros.begin()+3 );
	
	cout<<endl;
	for(int i=0; i<numeros.size(); i++)
	{
		cout<<numeros[i]<<"|";
	}
	
	
    return 0;
}
