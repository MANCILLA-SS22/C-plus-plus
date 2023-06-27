/*
    Hacer una estructura llamada alumno, en la cual se tendrán
    los siguientes Campos: Nombre, edad, promedio, pedir datos
    al usuario para 3 alumnos, comprobar cuál de los 3 tiene el
    mejor promedio y posteriormente imprimir los datos del
    alumno.
    NOTA: Usar punteros a estructura
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
#define CLS "clear"
#define CNT 3

using namespace std;

//Declaramos la estructura de datos a utilizar
typedef struct 
{
    char nombre[30];
    int edad;
    float promedio;
} Alumno;

//Declaramos un arreglo del tipo de la estructura declarada
Alumno alumno[CNT];
//Declaramos un apuntador al arreglo de estructuras
Alumno *ptrAlumno = alumno;

//Prototipos de funciones
void pedirDatos();
void calcularMejorPromedio(Alumno *);

int main(int argc, char **argv)
{
    pedirDatos();
    calcularMejorPromedio(ptrAlumno);

    cout<<"\n\nPROGRAMA FINALIZADO!"<<endl;
    return 0;
}

void pedirDatos()
{
    for(int i=0; i<CNT; i++)
	{
        cout<<"\nDigite el nombre del alumno "<<(i+1)<<": ";
        cin.getline((ptrAlumno+i)->nombre,30,'\n');

        cout<<"Digite la edad: ";
        cin>>(ptrAlumno+i)->edad;

        cout<<"Digite su promedio: ";
        cin>>(ptrAlumno+i)->promedio;

        cin.clear(); //con estas instrucciones
        cin.ignore(256,'\n'); //limpiamos el buffer de entrada
    }
}

void calcularMejorPromedio(Alumno *ptrAlumno)
{
    float mayor = 0.0;
    int pos=0;

    for(int i=0;i<CNT;i++)
	{
        if((ptrAlumno+i)->promedio > mayor)
		{
            mayor = (ptrAlumno+i)->promedio;
            pos = i;
        }
    }

    //Imprimir los datos del alumno con mejor promedio
    cout<<"\n\n******************************************"<<endl;
    cout<<"** El alumno con mejor promedio es: ****\n";
    cout<<"******************************************"<<endl;
    cout<<"Nombre: "<<(ptrAlumno+pos)->nombre<<endl;
    cout<<"Edad: "<<(ptrAlumno+pos)->edad<<endl;
    cout<<"Promedio: "<<(ptrAlumno+pos)->promedio<<endl;
    cout<<"******************************************"<<endl;
}
