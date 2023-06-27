/* Construye un programa que, al recibir como datos el peso, altura y genero de N personas que pertenecen a un estado de un pais, obtenga
el promedio de la altura y el peso, tanto de la poblacion masculina como femenina.*/

#include <iostream>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n, i, contadorH = 0, contadorM = 0;
    bool x;

    double weight_men;
    double weight_women;
    double height_men;
    double height_women;

    double acum_weight_men = 0;
    double acum_weight_women = 0;
    double acum_height_men = 0;
    double acum_height_women = 0;

    double prom_weight_men = 0;
    double prom_weight_women = 0;
    double prom_height_men = 0;
    double prom_height_women = 0;

    cout<<"A cuantas peronas desea entrevistar? ";
    cin>>n;

    for (i = 1; i <= n; i++)
    {
        cout<<"La persona es hombre? (si=1, no=0) R= ";
        cin>>x;

        if (x==1)
        {
            cout<<"\nEs hombre"<<endl;
            cout<<"Dijite el peso del hombre: ";
            cin>>weight_men;
            acum_weight_men += weight_men;

            cout << "Dijite la altura del hombre: ";
            cin >> height_men;
            acum_height_men += height_men;

            contadorH++;
        }

        else if (x == 0)
        {
            cout << "\nEs mujer" << endl;
            cout << "Dijite el peso de la mujer: ";
            cin >> weight_women;
            acum_weight_women += weight_women;

            cout << "Dijite la altura de la mujer: ";
            cin >> height_women;
            acum_height_women += height_women;

            contadorM++;
        }

        else
        {
            cout<<"Lo que ingreso no es correcto!!";
        }
    }
    
    prom_height_men = acum_height_men / contadorH;
    prom_weight_men = acum_weight_men / contadorH;
    prom_height_women = acum_height_women / contadorM;
    prom_weight_women = acum_weight_women / contadorM;

    cout << "\nEl promedio del peso de todos los hombre es: " << prom_weight_men<<endl;
    cout << "El promedio de la altura de todos los hombre es: " << prom_height_men << endl;
    cout << "El promedio del peso de todos las mujeres es: " << prom_weight_women << endl;
    cout << "El promedio de la altura de todas los mujeres es: " << prom_height_women << endl;

    getch();
    system("cls");
    return 0;
}
