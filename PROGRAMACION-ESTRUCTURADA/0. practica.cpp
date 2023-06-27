#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void busca (string*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,const int,const float, const string);
void cambio_flotante (float*Elemento1,float*Elemento2);
void cambio_cadena (string*Elemento1,string*Elemento2);
void seleccion (string*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,float*const,const int);
int main()
{
    system("mode con: cols=200 lines=100 ");
    char resp;
    float lan;
    string carrera;
    int x;
    cout << "Ingrese la carrera: ";
    getline(cin,carrera,'\n');
    cout << "Ingrese el numero de alumnos: ";
    cin >> x;
    float unidad1[x];
    float unidad2[x];
    float unidad3[x];
    float unidad4[x];
    float unidad5[x];
    float unidad6[x];
    float promedio[x];
    float regula1[x];
    float regula2[x];
    float regula3[x];
    float regula4[x];
    float regula5[x];
    float regula6[x];
    string nombre[x];
    
    for(int i=0;i<x;i++)
	{
        regula1[i]=0;
        regula2[i]=0;
        regula3[i]=0;
        regula4[i]=0;
        regula5[i]=0;
        regula6[i]=0;
    }
    
    for(int i=0;i<x;i++)
	{
        cout << "Ingrese el nombre del alumno: (Terminar nombre con .)"<< endl;
        getline(cin,nombre[i],'.');
        cout << "Ingrese la calificacion de la 1era unidad: ";
        cin >> unidad1[i];
        cout << "Ingrese la calificacion de la 2da unidad: ";
        cin >> unidad2[i];
        cout << "Ingrese la calificacion de la 3era unidad: ";
        cin >> unidad3[i];
        cout << "Ingrese la calificacion de la 4ta unidad: ";
        cin >> unidad4[i];
        cout << "Ingrese la calificacion de la 5ta unidad: ";
        cin >> unidad5[i];
        cout << "Ingrese la calificacion de la 6ta unidad: ";
        cin >> unidad6[i];
        
        if(unidad1[i]<70)
		{
            cout << "Ingrese la calificacion de la 1era unidad en regularizacion: ";
            cin >> regula1[i];
            
            if(regula1[i]>unidad1[i])
			{
                promedio[i]+=regula1[i];
            }
            
            else
			{
                promedio[i]+=unidad1[i];
            }
        }
        
        else
		{
            promedio[i]+=unidad1[i];
        }
        
        if(unidad2[i]<70)
		{
            cout << "Ingrese la calificacion de la 2da unidad en regularizacion: ";
            cin >> regula2[i];
            if(regula2[i]>unidad2[i])
			{
                promedio[i]+=regula2[i];
            }
            
            else
			{
                promedio[i]+=unidad2[i];
            }
        }
        
    
        else
		{
            promedio[i]+=unidad2[i];
        }
        
        if(unidad3[i]<70)
		{
            cout << "Ingrese la calificacion de la 3era unidad en regularizacion: ";
            cin >> regula3[i];
            if(regula3[i]>unidad3[i])
			{
                promedio[i]+=regula3[i];
            }
            
            else{
                promedio[i]+=unidad3[i];
            }
        }
        else{
            promedio[i]+=unidad3[i];
        }
        if(unidad4[i]<70){
            cout << "Ingrese la calificacion de la 4ta unidad en regularizacion: ";
            cin >> regula4[i];
            if(regula4[i]>unidad4[i]){
                promedio[i]+=regula4[i];
            }
            else{
                promedio[i]+=unidad4[i];
            }
        }
        else{
            promedio[i]+=unidad4[i];
        }
        
        if(unidad5[i]<70)
		{
            cout << "Ingrese la calificacion de la 5ta unidad en regularizacion: ";
            cin >> regula5[i];
            if(regula5[i]>unidad5[i])
			{
                promedio[i]+=regula5[i];
            }
            
            else
			{
                promedio[i]+=unidad5[i];
            }
        }
        
        else
		{
            promedio[i]+=unidad5[i];
        }
        
        if(unidad6[i]<70)
		{
            cout << "Ingrese la calificacion de la 6xta unidad en regularizacion: ";
            cin >> regula6[i];
            
            if(regula6[i]>unidad6[i])
			{
                promedio[i]+=regula6[i];
            }
            
            else
			{
                promedio[i]+=unidad6[i];
            }
        }
        
        else
		{
            promedio[i]+=unidad6[i];
        }
            promedio[i]=promedio[i]/6;          
    }
        system("cls");
        cout << "Lista sin ningun orden." << endl;
        cout << setw(78) <<" " << "| Unidad 1 | Unidad 2 | Unidad 3 | Unidad 4 | Unidad 5 | Unidad 6 |" << endl;
        cout << "# |" << " Carrera" << setw(20) << "| Nombre"<< setw(52) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(7) << "| R  |" << " Final |" << endl;
        
		for(int i=0;i<x;i++)
		{
        cout << i+1 << setw(2) << "|" << setw(20) << left << carrera <<  "|" << setw(54) << left << nombre[i] << "|" << setw(5) << left <<  unidad1[i] << "|" << setw(4) << left <<  regula1[i] <<  "|" << setw(5) << left << unidad2[i] <<  "|" << setw(4) << left << regula2[i] << "|" << setw(5) << left << unidad3[i]  << "|" << setw(4) << left << regula3[i] << "|" << setw(5) << left << unidad4[i] << "|" << setw(4) << left << regula4[i] << "|" << setw(5) << left << unidad5[i] <<  "|" << setw(4) << left << regula5[i] << "|" << setw(5) << left << unidad6[i] << "|" << setw(4) << left << regula6[i] << "|" << setw(7) << left << promedio[i] << "|" << endl;
        }
        
        seleccion(nombre,unidad1,unidad2,unidad3,unidad4,unidad5,unidad6,regula1,regula2,regula3,regula4,regula5,regula6,promedio,x);
        cout << " Acomodado por promedio Final mas alto al menor." << endl;
        cout << setw(78) <<" " << "| Unidad 1 | Unidad 2 | Unidad 3 | Unidad 4 | Unidad 5 | Unidad 6 |" << endl;
        cout << "# |" << " Carrera" << setw(20) << "| Nombre"<< setw(52) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(7) << "| R  |" << " Final |" << endl;
        
		for(int i=0;i<x;i++)
		{
        cout << i+1 << setw(2) << "|" << setw(20) << left << carrera <<  "|" << setw(54) << left << nombre[i] << "|" << setw(5) << left <<  unidad1[i] << "|" << setw(4) << left <<  regula1[i] <<  "|" << setw(5) << left << unidad2[i] <<  "|" << setw(4) << left << regula2[i] << "|" << setw(5) << left << unidad3[i]  << "|" << setw(4) << left << regula3[i] << "|" << setw(5) << left << unidad4[i] << "|" << setw(4) << left << regula4[i] << "|" << setw(5) << left << unidad5[i] <<  "|" << setw(4) << left << regula5[i] << "|" << setw(5) << left << unidad6[i] << "|" << setw(4) << left << regula6[i] << "|" << setw(7) << left << promedio[i] << "|" << endl;
        }
        cout << "¿Desea buscar por promedio?(S/N)";
        cin >> resp;
        
        while(resp=='S'||resp=='s')
		{
        cout << "¿Que promedio?" << endl;
        cin >> lan;
        busca(nombre,unidad1,unidad2,unidad3,unidad4,unidad5,unidad6,regula1,regula2,regula3,regula4,regula5,regula6,promedio,x,lan,carrera);
        cout << "Desea buscar por otro promedio? (S/N)" << endl;
        cin >> resp;
        }
    return 0;
}

void seleccion(string*const nomb,float*const un1,float*const un2,float*const un3,float*const un4,float*const un5,float*const un6,float*const re1,float*const re2,float*const re3,float*const re4,float*const re5,float*const re6,float*const prom,const int cont)
{
    float temp;
    int may;
    
    for(int i=0;i<cont-1;i++)
	{
        for(int j=i;j<cont;j++)
		{
            if(j==i)
			{
             may=j;
            }
            else
			{
                if(prom[j]>prom[may])
				{
                    may=j;
                }
            }
        }
        cambio_flotante(&un1[may],&un1[i]);
        cambio_flotante(&un2[may],&un2[i]);
        cambio_flotante(&un3[may],&un3[i]);
        cambio_flotante(&un4[may],&un4[i]);
        cambio_flotante(&un5[may],&un5[i]);
        cambio_flotante(&un6[may],&un6[i]);
        cambio_flotante(&re1[may],&re1[i]);
        cambio_flotante(&re2[may],&re2[i]);
        cambio_flotante(&re3[may],&re3[i]);
        cambio_flotante(&re4[may],&re4[i]);
        cambio_flotante(&re5[may],&re5[i]);
        cambio_flotante(&re6[may],&re6[i]);
        cambio_flotante(&prom[may],&prom[i]);
        cambio_cadena(&nomb[may],&nomb[may]);
    }
}

void cambio_flotante(float*Elemento1, float*Elemento2)
{
    float almacena=*Elemento1;
    *Elemento1=*Elemento2;
    *Elemento2=almacena;
}
void cambio_cadena(string*Elemento1, string*Elemento2)
{
    string almacena=*Elemento1;
    *Elemento1=*Elemento2;
    *Elemento2=almacena;
}

void busca(string*const nomb,float*const un1,float*const un2,float*const un3,float*const un4,float*const un5,float*const un6,float*const re1,float*const re2,float*const re3,float*const re4,float*const re5,float*const re6,float*const prom,const int cont,const float m,  const string dame)
{
    bool band=false;
    int conta=0;
    string vicius[cont];
    float ust1[cont];
    float ust2[cont];
    float ust3[cont];
    float ust4[cont];
    float ust5[cont];
    float ust6[cont];
    float irl1[cont];
    float irl2[cont];
    float irl3[cont];
    float irl4[cont];
    float irl5[cont];
    float irl6[cont];
    float iten[cont];
    for(int i=0;i<cont;i++)
	{
        if(prom[i]==m){
            band=true;
            vicius[conta]=nomb[i];
            ust1[conta]=un1[i];
            ust2[conta]=un2[i];
            ust3[conta]=un3[i];
            ust4[conta]=un4[i];
            ust5[conta]=un4[i];
            ust6[conta]=un5[i];
            irl1[conta]=re1[i];
            irl2[conta]=re2[i];
            irl3[conta]=re3[i];
            irl4[conta]=re4[i];
            irl5[conta]=re5[i];
            irl6[conta]=re6[i];
            iten[conta]=prom[i];
            conta++;
        }
    }
    
    if(band==false)
	{
        cout << "El promedio " << m << " no se encuentra." << endl;
    }
    
    else
	{
	    cout << "Alumnos con el promedio de " << m << endl;
        cout << setw(78) <<" " << "| Unidad 1 | Unidad 2 | Unidad 3 | Unidad 4 | Unidad 5 | Unidad 6 |" << endl;
        cout << "# |" << " Carrera" << setw(20) << "| Nombre"<< setw(52) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(7) << "| R  |" << " Final |" << endl;

        for(int i=0;i<conta;i++)
	       {
		      cout << i+1 << setw(2) << "|" << setw(20) << left << dame <<  "|" << setw(54) << left << vicius[i] << "|" << setw(5) << left <<  ust1[i] << "|" << setw(4) << left <<  irl1[i] <<  "|" << setw(5) << left << ust2[i] <<  "|" << setw(4) << left << irl2[i] << "|" << setw(5) << left << ust3[i]  << "|" << setw(4) << left << irl3[i] << "|" << setw(5) << left << ust4[i] << "|" << setw(4) << left << irl4[i] << "|" << setw(5) << left << ust5[i] <<  "|" << setw(4) << left << irl5[i] << "|" << setw(5) << left << ust6[i] << "|" << setw(4) << left << irl6[i] << "|" << setw(7) << left << iten[i] << "|" << endl;
           }

    }
}
