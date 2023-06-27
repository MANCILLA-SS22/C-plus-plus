/*3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados 
de la empresa y que imprima los datos del empleado con mayor y menor salario. */

#include<iostream>
#include<conio.h>
using namespace std;

struct Empleado{
	char nombre[20];
	float salario;	
};

int main(){
	int n_empleados,mayor=0,menor=999999,posM,posm;
	
	cout<<"Digite el numero de empleados: "; 
	cin>>n_empleados;
	struct Empleado e[n_empleados];
	for(int i=0;i<n_empleados;i++)
	{
		fflush(stdin); //Vacias el buffer y poder digitar mas valores
		cout<<"Nombre: "; cin.getline(e[i].nombre,20,'\n');
		cout<<"Salario: "; cin>>e[i].salario;
		
		//Empleado con mayor salario
		if(e[i].salario > mayor)
		{
			mayor = e[i].salario;
			posM = i; //Se guarda la posicion del valor mas grande para que sea posible imprimir los resultados abajo
		}
		//Empleado con menor salario
		if(e[i].salario < menor)
		{
			menor  = e[i].salario;
			posm = i; //Se guarda la posicion del valor mas chico para que sea posible imprimir los resultados abajo
		}		
		cout<<"\n";
	}
	
	cout<<"\nEmpleado con mayor salario: "<<endl;
	cout<<"Nombre: "<<e[posM].nombre<<endl;
	cout<<"Salario: "<<e[posM].salario<<endl;
	
	cout<<"\nEmpleado con menor salario: "<<endl;
	cout<<"Nombre: "<<e[posm].nombre<<endl;
	cout<<"Salario: "<<e[posm].salario<<endl;
	
	getch();
	return 0;
}
