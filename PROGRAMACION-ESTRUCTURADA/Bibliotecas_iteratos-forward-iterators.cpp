#include <iostream>
#include <fstream> //para archivos
#include <iterator>//para streams_iterator
#include <vector>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream archivo;
	archivo.open("AgendaTelefonica.txt", ios::in);
	
	if(archivo.fail())
	{
		cout<"No se pudo abrir el archivo";
		exit(1);
	}
	
	istream_iterator<char> p(archivo);// Iterador para char
    vector<char> frase;
    
    while(!archivo.eof())//Mientras no sea el final del archuvo
    {
    	frase.push_back(*p);//Almacenamos el caracter por el que vamos
    	p++;
    }
    
    //Mostramos el vector frase
    for(int i=0;i<frase.size(); i++)
    {
    	cout<<frase[i];
    }
    cout<<endl;
    
    archivo.close();
    
    return 0;
}
