//Arreglo de objetos

#include<iostream>
#include "alumno.h"
using namespace std;

int main(int argc, char** argv){
	alumno alumnos[4];
	alumno* alumnos2 = new alumno[3];
	
	for (int i=0; i<3; i++){
		(alumnos2 + i)->pedirDatos();
		cout<<endl;
	}
	
	cout<<"Mostrando las notas: "<<endl;
	
	for(int i=0; i<3; i++){
		(alumnos2 + i)->mostrarDatos();
		cout<<endl;
	}
}




