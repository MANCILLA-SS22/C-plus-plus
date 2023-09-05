//         $$$$$$$$$$$$$$$ Chars $$$$$$$$$$$$$$$


/* // Ejercicio teorico: Cadenas
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
    // char palabra [] = "German";
    // char palabra2[] = {'G','e','r','m','a','n'};
    char nombre[30];

    cout << "Digite su nombre; ";
    // cin.getline(*Nombre_Variable*,*espacio total de elementos*, '\n');
    cin.getline(nombre, 30, '\n');

    cout << nombre << endl;

    getch();
    return 0;
} */

/* // Ejercicio 1: Longitud de una cadena
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
    char palabra[] = "German";
    int longitud = 0;

    // strlen(*variable*); permite determinar la cantidad elementos que tiene una cadena de caracteres
    longitud = strlen(palabra);

    cout << "Numero de elementos de la cadena es: " << longitud << endl;

    getch();
    return 0;
} */

/* // Ejercicio 2: Longitud de una cadena x2
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;
int main(){
    char cadena[100];
    int longitud;
    cout << "CADENA DE CARACTERES\n";
    cout << "Digite su cadena: ";
    cin.getline(cadena, 100, '\n');
    longitud = strlen(cadena);

    if (longitud > 10){
        cout << "No. de caracteres: ";
        cout << longitud;
    }
    cin.get();
    return 0;
} */

/* // Ejercicio 3: Invertir cadena de caracteres y verificar si son iguales o no
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char palabra[30];
    char recurso[30];

    cout << "Escriba una palabra: ";
    cin.getline(palabra, 30);
    strcpy(recurso, palabra);

    // strriv = Revierte todo caracteres en string(excepto el nulo)
    strrev(recurso);

    // 0 indica si ambas palabras son iguales. 1 indica si son diferentes
    if (strcmp(palabra, recurso) == 0)
    {
        cout << "\nLa palabra '" << palabra << "' es polindroma." << endl;
    }
    else
    {
        cout << "\nLa palabra '" << palabra << "' no es polindroma." << endl;
    }

    cout << "\nPresione cualquier tecla para salir del programa.";
    getch();
    return 0;
} */

/* // Ejercicio 4: Copiar el contenido de una cadena a otra
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
int main (){
    char nombre[] = "German";
    char nombre2 [20];

    //strcpy(*variable con cadena definida, *variable a la que se desea copiar el contenido*);
    strcpy(nombre2,nombre);
    cout<<nombre2<<endl;

    getch();
    return 0;
} */

/* // Ejercicio 5: Copiar el contenido de una cadena a otra x2
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main()
{
    char ptx[100]; // Primer texto [ptx]
    char stx[100]; // Segundo texto [stx]

    cout << "Escriba el texto que desee: ";
    cin.getline(ptx, 100, '\n');

    strcpy(stx, ptx);

    cout << "\nSu texto fue: " << stx << endl;
    cout << "\n";

    cin.get();
    return 0;
} */

/* // Ejercicio 6: Verificar si ambas cadenas son iguales y si no, verificar cual es mayor alfabeticamente
// Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo,indicar cual es mayor alfabeticamente.
#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main(){
    char string1[1000];
    char string2[1000];

    cout << "Digite el 1er string: ";
    cin.getline(string1, 1000, '\n');

    cout << "Digite el 2do string: ";
    cin.getline(string2, 1000, '\n');

    if (strcmp(string1, string2) == 0) cout << "\nAmbos strings son iguales\n";

    else if (strcmp(string1, string2) > 0) cout << "\n"<< "*" << string1 << "*"<< " es mayor alfabeticamente que " << string2 << "\n";

    else cout << "\n"<< "*" << string2 << "*"<< " es mayor alfabeticamente que " << string1 << "\n";

    getch();
    return 0;
} */

/* // Ejercicio 7: Convertir variable tipo caracter a un numero (atoi y atof)
// Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y otro real, convertirlos a sus respectivos valores y por ultimo sumarlos.

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main(){
    char cadena_entero[20];
    char cadena_real[20];
    int entero;
    float real;
    float suma;

    cout << "Digite un numero entero: ";
    cin >> cadena_entero;
    cout << "Digite un numero real: ";
    cin >> cadena_real;

    // Convierte un string a entero.
    entero = atoi(cadena_entero);
    // Convierte un string a decimal.
    real = atof(cadena_real);

    suma = entero + real;

    cout << "Suma: " << suma << endl;

    system("pause");
    return 0;
} */

/* // Ejercicio 8: Convertir mayusculas a minusculas solo si la primer etra del nombre comienza con A 
// Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A, convertir su nombre a minuscula, caso contrario no convertirlo.
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(){
    char nombre[20];
    cout << "Ingrese su nombre en MAYUSCULA: ";
    cin.getline(nombre, 20, '\n');
    cout << "Su nombre es: " << strupr(nombre) << endl;

    if (nombre[0] == 'A'){
        cout << "\nSu nombre comienza con [A]" << endl;
        // strlwr(); Convierte el contenido de un apuntador a caracteres a minusculas
        cout << "Su nombre queda: " << strlwr(nombre) << endl;
    }

    else{
        cout << "\nSu nombre no comienza con [A]" << endl;
        cout << "Su nombre queda: " << strupr(nombre) << endl;
    }

    system("pause");
    return 0;
} */

/* // Ejercicio 9: Convertir int a char
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){
	int N = 65;
    char c = N;
    cout << c;
    return 0;
    
    getch();
    return 0;
} */

/* // Ejercicio 10: Convertir char a int
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

int main(){
    char ch = 'a';
    int N = int(ch);
    cout << N;

    char ch = '5';

    // Subtracting 48 will produce desired results
    cout << int(ch) - 48 << "\n";

    // Also subtracting '0' will result in same output
    cout << int(ch - '0');
    return 0;

    getch();
    return 0;
}
 */

/* // Ejercicio 11: Convertir dos cadenas de minusculas a mayusculas compararlas y decir si son iguales-o-no
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){
    char cad[30];
    char cad2[30];

    cout << "Ingrese el primer nombre: ";
    cin.getline(cad, 30);
    cout << "Ingrese el segundo nombre: ";
    cin.getline(cad2, 30);

    // strupr(); Convierte el contenido de un apuntador a caracteres a mayusculas
    strupr(cad);
    strupr(cad2);

    if (strcmp(cad, cad2) == 0){
        cout << "La palabra " << cad << " y "<< "la palabra " << cad2 << " son iguales" << endl;
    }
    else{
        cout << "La palabra " << cad << " y "<< "la palabra " << cad2 << " son diferentes" << endl;
        getch();
        return 0;
    }
} */

/* // Ejercicio 12: Contando cada vocal en una frase
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main(){
    char frase[30];
    int i, voc_a=0 ,voc_e=0, voc_i=0, voc_o=0, voc_u=0;

    cout<<"Digite una frase: ";
    cin.getline(frase,30,'\n');

    for(i=0; i<30; i++){
        switch(frase[i]){
            case 'a': voc_a++; break;
            case 'e': voc_e++; break;
            case 'i': voc_i++; break;
            case 'o': voc_o++; break;
            case 'u': voc_u++; break;
        }
    }
    cout<<"Vocal a: "<<voc_a<<endl;
    cout<<"Vocal e: "<<voc_e<<endl;
    cout<<"Vocal i: "<<voc_i<<endl;
    cout<<"Vocal o: "<<voc_o<<endl;
    cout<<"Vocal u: "<<voc_u<<endl;

    getch();
    return 0;
} */

/* // Ejercicio 12.1: Contando cada vocal en una frase
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main(){
    char palabra[50];
    int a = 0, e = 0, i = 0, o = 0, u = 0, vocal = 0, consonante = 0;
    int nletras, r;

    cout << "Digite una palabra: ";
    cin.getline(palabra, 30, '\n');
    nletras = strlen(palabra);

    for (r = 0; r < nletras; r++){
        strlwr(palabra);
        switch (palabra[r]){
        case 'a':
            a++;
            vocal++;
            break;
        case 'e':
            e++;
            vocal++;
            break;
        case 'i':
            i++;
            vocal++;
            break;
        case 'o':
            o++;
            vocal++;
            break;
        case 'u':
            u++;
            vocal++;
            break;
        default:
            consonante++;
            break;
        }
    }

    cout << "El numero de caracteres es de: " << nletras << endl;
    cout << "El numero de consonantes son: " << consonante << endl;
    cout << "El numero de vocales son: " << vocal << endl;
    cout << "Letra a: " << a << endl;
    cout << "Letra e: " << e << endl;
    cout << "Letra i: " << i << endl;
    cout << "Letra o: " << o << endl;
    cout << "Letra u: " << u << endl;

    getch();
    return 0;
} */

/* // Ejercicio 13: Concatenar una cadena con otra
#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main(){
    char cadena1[] = "Esto es una cadena ";
    char cadena2[] = "de ejemplo ";
    char continuacion[100];

    strcpy(continuacion, cadena1); // strcpy(*variable con cadena definida, *variable a la que se desea copiar el contenido*);
    strcat(continuacion, cadena2); // strcat(*Variable a la que se le va a anadir el primer texto*, *Variable a la que se le va a anadir la continuacion del texto*);
    cout << continuacion << endl;

    getch();
    return 0;
} */

/* // Ejercicio 13.1: Concatenar una cadena con otra
#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    char frase1[] = "Hola que tal ";
    char nombre[20];

    cout << "Dime tu nombre: ";
    cin.getline(nombre, 40);

    strcat(frase1, nombre);

    cout << "\n"
         << frase1 << endl;

    system("pause");
    return 0;
} */



//         $$$$$$$$$$$$$$$ Loops $$$$$$$$$$$$$$$



/* // Ejercicio 1: Series
// Escribe un numero que, al escribir como dato un numero entero positivo N, calcule el resultado de la siguiente serie: 1 + (1/2) + (1/3) + (1/4)+... + (1/N)
#include <iostream>
using namespace std;

int n, i;
double resultado;

int main()
{
    cout << "Introduzca el numero de elementos: ";
    cin >> n;

    resultado = 0;
    for (i = 1; i <= n; i++)
    {
        resultado = resultado + (1.0 / i);
    }
    cout << "El resultado es: " << resultado << endl;

    return 0;
} */

/* // Ejercicio 2: Info de personas (promedio, edad, alturas)
// Construye un programa que, al recibir como datos el peso, altura y genero de N personas que pertenecen a un estado de un pais, obtenga el promedio de la altura y el peso, tanto de la poblacion masculina como femenina.

#include <iostream>
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main(){
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

    for (i = 1; i <= n; i++){
        cout<<"La persona es hombre? (si=1, no=0) R= ";
        cin>>x;

        if (x==1){
            cout<<"\nEs hombre"<<endl;
            cout<<"Dijite el peso del hombre: ";
            cin>>weight_men;
            acum_weight_men += weight_men;

            cout << "Dijite la altura del hombre: ";
            cin >> height_men;
            acum_height_men += height_men;

            contadorH++;
        }

        else if (x == 0){
            cout << "\nEs mujer" << endl;
            cout << "Dijite el peso de la mujer: ";
            cin >> weight_women;
            acum_weight_women += weight_women;

            cout << "Dijite la altura de la mujer: ";
            cin >> height_women;
            acum_height_women += height_women;

            contadorM++;
        }

        else{
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
} */

/* // Ejercicio 3: Multiplicacion de series
// Escribe un programa que, al escribir como dato un numero entero positivo N, calcule: (1/1) / (1/2) * (1/3) / (1/4) * ...(* /)/(1/N)
#include <iostream>
using namespace std;

int n,i;
double res;
int main(){
    res=1;
    cout<<"Dijite un numero: ";
    cin>>n;

    for (i = 1; i <= n; i++){
        if(i%2 == 0){
            res = res / (1.0/i);
        }

        else{
            res = res * (1.0/i);
        }
    }

    cout<<"El resultado es: "<<res;

    return 0;
} */

/* // Ejercicio 4: Numeros primos
// Se dife que un numero N es primo si los unicos enteros positivos que lo dividen son exactamente 1 y N. Construye un programa que lea un numero entero positivo N y escriba todos los numeros primos menores a dicho numero

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){

    int n;
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;

    for (int i = 2; i < n; i++){   //10 -> 2,3,5,7
        int creciente = 2;
        bool esPrimo = true;

        while (esPrimo && creciente<i){
            if (i % creciente == 0){
                esPrimo = false;
            }

            else{
                creciente++;
            }
        }

        if (esPrimo){
            cout<<i<<" es un numero primo."<<endl;
        }

    }

    getch();
    system("cls");
    return 0;
} */

/* // Ejercicio 5: Numeros primos gemelos
// Construye un programa que al recibir como datos dos numeros enteros positivos, obtenga e imprima todos los numeros primos gemelos comprendidos entre dichos numeros

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){
    int n1, n2, i, aux, b, a=0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n1;
    cout << "Ingrese un segundo entero positivo: ";
    cin >> n2;

    if (n1 == n2){
        cout<<"Error";
    }

    else{
        if (n1 > n2){
            aux = n1;
            n1 = n2;
            n2 = aux;
        }

        for (i = n1; i <= n2; i++){ // 10 -> 2,3,5,7
            int creciente = 2;
            bool esPrimo = true;

            while (esPrimo && creciente < i){
                if (i % creciente == 0){
                    esPrimo = false;
                }

                else{
                    creciente++;
                }
            }

            if (esPrimo && a == 0){
                a = i;
            }

            else if (esPrimo && a != 0){
                b = i;
                if ( (b-a) == 2)
                {
                    cout<<a<<" y " <<b<<" son primos gemelos."<<endl;
                }
                a = i;
            }
        }
    }
    getch();
    system("cls");
    return 0;
} */

/* // Ejercicio 6: Numeros naturales positivos, negativos y nulos
// Construye un programa que, al recibir como datos N numeros naturales, determine cuantos de ellos son positivos, negativos o nulos
#include <iostream>
using namespace std;

int main(){
    int n, i, res, pos=0, neg=0, null=0;

    cout<<"Cuantos numero quiere ingresar? ";
    cin>>n;

    for (i = 1; i <= n; i++){
        cout << "Dijite un numero natural para verificar el tipo: ";
        cin>>res;

        if (res == 0){
            null++;
        }

        else if (res < 0){
            neg++;
        }

        else{
            pos++;
        }
    }

    cout<<"\nNumeros positivos"<<" -> "<<pos;
    cout<<"\nNumeros negativos"<<" -> "<<neg;
    cout<<"\nNumeros nulos"<<" -> "<<null;

    return 0;
} */

/* // Ejercicio 7: Suma y resta de potencias
// Escribir un programa que, al recibir ocmo dato un numero entero N, obtenga el resultado del a siguiente serie: 1^1 - 2^2 + 3^3 - . . . ± N^N

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;


int main(){
    int n, res=0;

    cout<<"Dijite el numero de N numeros: ";
    cin>>n;

    for (int i = 1; i <= n; i++){
        if (i%2 == 0){
            res = res - pow(i,i);
        }

        else{
            res = res + pow(i, i);
        }
    }

    cout<<"El resultado final es: "<<res;

    getch();
    system("cls");
    return 0;
} */

/* // Ejercicio 8: Tabla de multiplicar de un numero positivo
#include <iostream>
using namespace std;

int main(){
    int n,N;
    cout<<"Digite un numero: ";
    cin>>n;

    cout << "\nDigite el numero de veces a muliplicar ese numero: "<< endl;
    cin>>N;

    for (int i = 1; i <= N; i++){
        cout<<n<<" x " <<i<<" = "<<n*i<<endl;
    }

    return 0;
} */

/* // Ejercicio 9: Tabla de multiplicar del 1 al 10.
// Realice un programa que solicite de la entrada est�ndar un entero del 1 al 10 y muestre en la salida est�ndar su tabla de multiplicar.

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int numero;


    do{
        cout<<"Digite un numero[1-10]: "; cin>>numero;
    }while((numero<1) || (numero>10));


    for(int i=1;i<=20;i++){
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }

    getch();
    return 0;
} */

/* // Ejercicio 10: Contando numeros mayores a 0
// Realice un programa que lea de la entrada est�ndar n�meros hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida est�ndar el n�mero de valores mayores que cero le�dos.

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int numero, conteo = 0;

    do{
        cout << "Digite un numero: ";
        cin >> numero;
        if (numero > 0){
            conteo++; // aumentamos el conteo cada vez que encuentra un numero mayor a 0
        }
    } while (numero != 0);

    cout << "\nEl total de numeros mayores que 0 es: " << conteo;

    getch();
    system("pause");
    return 0;
} */

/* // Ejercicio 11: Suma de cuadrados
// Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados de los 10 primeros enteros mayores que cero.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){
    int res=0;
    for (int i = 1; i <=5; i++){
        res = res + pow(i,2);
    }
    cout<<"La suma total es: "<<res;

    getch();
    system("cls");
    return 0;
} */

/* // Ejercicio 12: Temperaturas
// Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un per�odo de 24 horas. Es decir, debe leer 6 temperaturas.
// Calcule la temperatura media del d�a, la temperatura m�s alta y la m�s baja.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    float temperatura,suma_temperatura=0,temperatura_media;
    float temperatura_alta=0,temperatura_baja=999;

    for(int i=0; i<24; i+=4){ //vamos aumentando de 4 en 4 horas
        cout<<"Digite la temperatura a las "<<i<<": ";
        cin>>temperatura;

        if(temperatura > temperatura_alta){
            temperatura_alta = temperatura;
        }
        if(temperatura < temperatura_baja){
            temperatura_baja = temperatura;
        }

        suma_temperatura += temperatura;
    }

    temperatura_media = suma_temperatura / 6; //entre 6 porque son 6 temperaturas al dia

    cout<<"\nLa temperatura media del dia es: "<<temperatura_media<<endl;
    cout<<"La temperatura mas alta es: "<<temperatura_alta<<endl;
    cout<<"La temperatura mas baja es: "<<temperatura_baja<<endl;

    getch();
    return 0;
} */

/* // Ejercicio 13: Sumar dentro de un rango
// Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){
    int n, suma=0;

    do{
        cout<<"Ingresa un numero: ";
        cin>>n;

        if (n>0){
            suma = suma + n;
        }

    }while(( (n < 20) || (n > 30)) && (n!=0) );

    cout<<"La suma total es: "<<suma;

    getch();
    return 0;
} */

/* // Ejercicio 14: Elevacion de x a la y potencia
// Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la funcion pow.

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){
    int x, y, res = 1;

    cout << "Digite el numero: ";
    cin >> x;
    cout << "Digite el exponente de ese numero: ";
    cin >> y;

    for (int i = 1; i <= y; i++){
        res = res * x;
    }

    cout << "El resultado es: " << res;

    getch();
    system("cls");
    return 0;
} */

/* // Ejercicio 15: Sumar 1+2+3+...+n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int n,suma=0;

    cout<<"Digite el total de numeros a sumar: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        suma += i;
    }

    cout<<"\nLa suma es: "<<suma<<endl;

    system("pause");
    return 0;
}*/

/* // Ejercicio 16: Suma de numeros impares
// Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){
    int n, res=0;

    cout<<"Dijite el limite y que sea numero impar: "; cin>>n;

    if (n%2 == 1){
        for (int i = 1; i <= n; i += 2){
            res = res + i;
        }

        cout << "La suma de los numeros impares es: " << res;
    }

    else{
        cout<<"El numero ingresado no es valido.";
    }

    getch();
    system("cls");
    return 0;
} */

/* // Ejercicio 17: Factorial de un numero
// Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){

    int n, res = 1;

    cout << "Dijite el valor limite: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        res = res * i;
    }

    cout << "El resultado final es: " << res;

    getch();
    system("cls");
    return 0;
} */

/* // Ejercicio 18: Suma de factoriales
// Escriba un programa que calcule el valor de: 1!+2!+3!+...+n!  (suma de factoriales).

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){

    int n, res = 1, suma=0;

    cout << "Dijite el valor limite: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        res = res * i;
        suma = suma + res;
    }

    cout << "El resultado final es: " << suma;

    getch();
    system("cls");
    return 0;
} */

/* // Ejercicio 19: Suma de un numero elevado a N potencia
// Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...+2^n

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){
    int n, res=0;

    cout<<"Dijite el limite: ";
    cin>>n;

    for (int i = 1; i <= n; i++){
        res = res + pow(2,i);
    }

    cout<<"El resultado final es: "<<res;

    getch();
    system("cls");
    return 0;
} */

/* // Ejercicio 20: Sumar 1-2+3-4+5-6...n
// Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){
    int n, res = 0;

    cout << "Dijite el limite: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0){
            res = res - i;
        }

        else{
            res = res + i;
        }
    }

    cout << "El resultado final es: " << res;

    getch();
    system("cls");
    return 0;
}

// #include<iostream>
// #include<stdlib.h>

// using namespace std;

// int main(){
// 	int n,suma=0,par=0,impar=0,negativo=0;

// 	cout<<"Digite el numero de elementos: ";
// 	cin>>n;

// 	for(int i=1;i<=n;i++){
// 		if(i%2==0){//los numeros pares son negativos
// 			negativo = i * -1; //los cambiamos de signo
// 			par += negativo;
// 		}
// 		else{ //los impares son positivos
// 			impar += i;
// 		}
// 	}

// 	suma = par + impar;

// 	cout<<"\nLa suma es: "<<suma<<endl;
// 	system("pause");
// 	return 0;
// } */

/* // Ejercicio 21: Serie Fiabonacci

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){
    int n, res = 0, x = 0, y = 1;

    cout << "Dijite el limite: ";
    cin >> n;

cout<<"1 ";
    for (int i = 1; i < n; i++)
    {
        res = x + y;
        cout << res << " ";
        x = y;
        y = res;
    }

    getch();
    system("cls");
    return 0;
} */

/* // Ejercicio 22: En una clase de 5 alumnos se han realizado tres ex�menes y se requiere determinar el n�mero de:
// 	a) Alumnos que aprobaron todos los ex�menes.
// 	b) Alumnos que aprobaron al menos un examen.
// 	c) Alumnos que aprobaron �nicamente el �ltimo examen.

// Realice un programa que permita la lectura de los datos y el c�lculo de las estad�sticas.


#include<iostream>

using namespace std;

int main(){
    int examen1,examen2,examen3;
    int aprobaron_todos_examenes=0,aprobaron_almenos_uno=0,aprobaron_ultimo=0;

    for(int i=1;i<=5;i++){
        cout<<i<<". Digite la nota del primer examen: "; cin>>examen1;
        cout<<i<<". Digite la nota del segundo examen: "; cin>>examen2;
        cout<<i<<". Digite la nota del tercer examen: "; cin>>examen3;
        cout<<"\n";

        //examinando la opcion a
        if((examen1>10.5)&&(examen2>10.5)&&(examen3>10.5)){
            aprobaron_todos_examenes++;
        }

        //examinando la opcion b
        if((examen1>10.5)||(examen2>10.5)||(examen3>10.5)){
            aprobaron_almenos_uno++;
        }

        //examinando la opcion c
        if((examen1<10.5)&&(examen2<10.5)&&(examen3>10.5)){
            aprobaron_ultimo++;
        }
    }

    cout<<"\na) Aprobaron todos los examenes: "<<aprobaron_todos_examenes;
    cout<<"\nb) Aprobaron almenos un examen: "<<aprobaron_almenos_uno;
    cout<<"\nc) Aprobaron unicamente el ultimo examen: "<<aprobaron_ultimo;

    return 0;
} */

/* // Ejercicio 23: Numero magico
// Realice un programa que solicite al usuario que piense un n�mero entero entre el 1 y el 100. El programa debe generar un numero aleatorio en ese mismo rango[1-100],
// e indicarle al usuario si el numero que digito es menor o mayor al numero aleatorio, as� hasta que lo adivine. y por ultimo mostrarle el numero de intentos que le llevo.
// variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);

#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main(){
    int numero,dato,contador=0;

    srand(time(NULL)); //generar un numero aleatorio entre 1-100
    dato = 1 + rand()%(101-1);

    do{
        cout<<"Digite un numero: "; cin>>numero;
        if(numero>dato){
            cout<<"Es un numero menor\n";
        }
        else if(numero<dato){
            cout<<"Es un numero mayor\n";
        }
        contador++;
    }while(numero != dato);

    cout<<"\nFELICIDADES ADIVINO EL NUMERO!"<<endl;
    cout<<"Numero de intentos: "<<contador<<endl;


    system("pause");
    return 0;
} */

/* // Ejercicio 24: Descomponer en factores primos
// Realice un programa que calcule la descomposici�n en factores primos de un n�mero entero. Por ejemplo: 20 = 2*2*5.

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numero;

    cout << "Digite un numero: ";
    cin >> numero;

    cout << "\nDescomponiendo en factores primos: ";
    for (int i = 2; numero > 1; i++){
        while (numero % i == 0){
            cout << i << " ";
            numero /= i;
        }
    }

    cout << "\n";
    system("pause");
    return 0;
} */

/* // Ejercicio 25: Triangulo de asteriscos (Piramide completa)
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(){
    int i,j,k,n;
    cout<<"ingrese la altura de la piramide: ";
    fflush(stdin);
    cin>>n;
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n-i; j++){
            cout<<" ";
        }

        for (k = 1; k <= (2*i)-1; k++){
            cout<<"*";
        }

        cout<<"\n";
    }
    getch();
    return 0;
} */

/* // Ejercicio 26: Triangulo de asteriscos(Piramide completa invertida)
#include <iostream>
using namespace std;

int main(){

    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i){
        for(int space = 0; space < rows-i; ++space){
            cout << "  ";
        }

        for(int j = i; j <= 2*i-1; ++j){
            cout << "* ";
        }

        for(int j = 0; j < i-1; ++j){
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
} */

/* // Ejercicio 27: Triangulo de asteriscos (Media piramide)
#include <iostream>
using namespace std;

int main(){
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i){
        for (int j = 1; j <= i; ++j){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
} */

/* // Ejercicio 28: Triangulo de asteriscos(Media piramide invertida)
#include <iostream>
using namespace std;

int main(){
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1; --i){
        for(int j = 1; j <= i; ++j){
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
} */

/* // Ejercicio 29: Triangulo de numeros
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main(){
    int n, i, j;
    cout<<"Digite un numero: ";
    cin>>n;

    for (i = 1; i <= n; i++){
        cout<<endl;

        for (j = 1; j <= i; j++){
            cout<<j<<" ";
        }
    }

    for (i = n-1; i >= 0; i--){
        cout << endl;

        for (j = 1; j <= i; j++){
            cout << j << " ";
        }
    }

    getch();
    system("cls");
    return 0;
} */



//         $$$$$$$$$$$$$$$ Structures $$$$$$$$$$$$$$$


/* // Ejercicio teorico: Estructura basica
#include<iostream>
#include<conio.h>

using namespace std;
struct persona
{
    char nombre[30];
    int edad;
}persona2, persona1;

int main()
{
    cout<<"Digite el nombre: ";
    cin.getline(persona1.nombre,30,'\n');
    cout<<"\nDigite la edad: ";cin>>persona1.edad;


    cout<<"\nDigite el nombre: ";
    fflush(stdin); //Esta instruccion borra los residuos almacenados en cin.
    cin.getline(persona2.nombre,30,'\n');

    cout<<"\nDigite la edad: ";cin>>persona2.edad;

    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;

    cout<<endl;

    cout<<"Nombre: "<<persona2.nombre<<endl;
    cout<<"Edad: "<<persona2.edad<<endl;
    getch();
    return 0;
} */

/* // Ejercicio teorico: Estructuras anidadas
#include <iostream>
#include <conio.h>
using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleados{
    char nombre[30];
    struct info_direccion dir_empleado;
    double salario;
};

int main(){
    int nume;
    cout << "Digite el numero de empleados:";
    cin >> nume;
    cout << "\n";

    struct empleados empleado[nume];

    for (int i = 0; i < nume; i++){
        fflush(stdin);
        cout << "Digite el nombre:";
        cin.getline(empleado[i].nombre, 30, '\n');
        cout << "Digite la direccion:";
        cin.getline(empleado[i].dir_empleado.direccion, 30, '\n');
        cout << "Digite la ciudad:";
        cin.getline(empleado[i].dir_empleado.ciudad, 20, '\n');
        cout << "Digite la provincia:";
        cin.getline(empleado[i].dir_empleado.provincia, 20, '\n');
        cout << "Salario:";
        cin >> empleado[i].salario;

        cout << "\n";
    }

    // Despliegue de los resultados en la pantalla
    for (int i = 0; i < nume; i++){
        cout << "Nombre:" << empleado[i].nombre << endl;
        cout << "Direccion:" << empleado[i].dir_empleado.direccion << endl;
        cout << "Ciudad:" << empleado[i].dir_empleado.ciudad << endl;
        cout << "Provincia:" << empleado[i].dir_empleado.provincia << endl;
        cout << "Salario:" << empleado[i].salario << endl;
        cout << "\n";
    }

    getch();
    return 0;
} */

/* // Ejercicio 1: Categoria de un corredor
// Hacer una estructura llamada corredor, en la cual se tendrin los siguientes campos: Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignarle una categoria de competicion:
// - Juvenil <= 18 anos
// - Senor <= 40 anos
// - Veterano > 40 anos
// Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion.

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Corredor{
    char nombre[20];
    int edad;
    char sexo[10];
    char club[20];
}c1;

int main(){
    char categoria[20];

    cout<<"Nombre: "; cin.getline(c1.nombre,20,'\n');
    cout<<"Edad: "; cin>>c1.edad;
    fflush(stdin);
    cout<<"Sexo: "; cin.getline(c1.sexo,10,'\n');
    cout<<"Club: "; cin.getline(c1.club,20,'\n');

    if(c1.edad <= 18){
        strcpy(categoria,"Juvenil");
    }
    else if(c1.edad <= 40){
        strcpy(categoria,"Senior");
    }
    else{
        strcpy(categoria,"Veterano");
    }

    cout<<"\n\nMostrando Datos"<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoria: "<<categoria<<endl;

    getch();
    return 0;
} */

/* // Ejercicio 2: Datos de un alumno
// Hacer una estructura llamada alumno, en la cual se tendran los siguientes Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cu�l de los
// 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.

#include<iostream>
#include<conio.h>

using namespace std;

struct Alumno{
    char nombre[20];
    int edad;
    float promedio;
}alumnos[3];

int main(){
    int mayor = 0,pos=0;

    //Pedir los datos para 3 alumnos
    for(int i=0;i<3;i++){
        fflush(stdin);
        cout<<"Nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
        cout<<"Edad: "; cin>>alumnos[i].edad;
        cout<<"Promedio: "; cin>>alumnos[i].promedio;

        if(alumnos[i].promedio > mayor){
            mayor = alumnos[i].promedio; //sacamos el mayor promedio
            pos = i; // guardamos la posicion del mayor promedio
        }
        cout<<"\n";
    }

    //Imprimimos los datos del alumno con el mejor promedio
    cout<<"\nAlumnos con el mejor Promedio: \n";
    cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
    cout<<"Edad: "<<alumnos[pos].edad<<endl;
    cout<<"Promedio: "<<alumnos[pos].promedio<<endl;

    getch();
    return 0;
} */

/* // Ejercicio 3: Empleado con mayor y menor salario
// Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima los datos del empleado con mayor y menor salario.

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
    for(int i=0;i<n_empleados;i++){
        fflush(stdin); //Vacias el buffer y poder digitar mas valores
        cout<<"Nombre: "; cin.getline(e[i].nombre,20,'\n');
        cout<<"Salario: "; cin>>e[i].salario;

        //Empleado con mayor salario
        if(e[i].salario > mayor){
            mayor = e[i].salario;
            posM = i; //Se guarda la posicion del valor mas grande para que sea posible imprimir los resultados abajo
        }
        //Empleado con menor salario
        if(e[i].salario < menor){
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
} */

/* // Ejercicio 4: Datos de un atleta
// Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, pa�s, numero_medallas. y devuelva los datos (Nombre, pa�s) del
// atleta que ha ganado el mayor n�mero de medallas.

#include <iostream>
#include <conio.h>
using namespace std;

struct Atleta
{
    char nombre[20];
    char pais[20];
    int n_medallas;
} atletas[100];

int main()
{
    int n_atletas, mayor = 0, posM = 0;

    cout << "Digite el numero de atletas: ";
    cin >> n_atletas;

    // Pedimos los datos para N atletas
    for (int i = 0; i < n_atletas; i++)
    {
        fflush(stdin);
        cout << "Nombre: ";
        cin.getline(atletas[i].nombre, 20, '\n');
        cout << "Pais: ";
        cin.getline(atletas[i].pais, 20, '\n');
        cout << "Numero de Medallas: ";
        cin >> atletas[i].n_medallas;

        // Sacando el atleta con mayor numero de medallas
        if (atletas[i].n_medallas > mayor)
        {
            mayor = atletas[i].n_medallas;
            posM = i;
        }
        cout << "\n";
    }

    cout << "\nAtleta con mas medallas ganadas: \n";
    cout << "Nombre: " << atletas[posM].nombre << endl;
    cout << "Pais: " << atletas[posM].pais << endl;

    getch();
    return 0;
} */

/* // Ejercicio 5: promedio de calificaciones
// Hacer 2 estructuras una llamada promedio que tendr� los siguientes campos: nota1, nota2, nota3; y otro llamada alumno que tendr� los siguientes miembros: nombre, sexo, edad;
// hacer que la estructura promedio este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego calcular su promedio, y por ultimo imprimir todos sus
// datos incluidos el promedio.

#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio prom;
}alumno1;

int main(){
    float promedio_alumno;

    cout<<"Nombre: "; cin.getline(alumno1.nombre,20,'\n');
    cout<<"Sexo: "; cin.getline(alumno1.sexo,10,'\n');
    cout<<"Edad: "; cin>>alumno1.edad;

    cout<<".:Notas del Examen:."<<endl;
    cout<<"Nota1: "; cin>>alumno1.prom.nota1;
    cout<<"Nota2: "; cin>>alumno1.prom.nota2;
    cout<<"Nota3: "; cin>>alumno1.prom.nota3;

    //Sacando el promedio del alumno
    promedio_alumno = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3;


    cout<<"\n\nMostrando Datos"<<endl;
    cout<<"Nombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
    cout<<"Promedio: "<<promedio_alumno<<endl;


    getch();
    return 0;
} */

/* // Ejercicio 6: Alumno con mejor promedio
// Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular cu�l de todos tiene el mejor promedio, e imprimir sus datos.

#include<iostream>
#include<conio.h>
using namespace std;

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno{
    char nombre[20];
    char sexo[10];
    int edad;
    struct Promedio prom;
};

int main(){
    int n_alumnos,posM=0;
    float promedio_alumno[100],mayor=0;

    cout<<"Digite el numero de alumnos: ";
    cin>>n_alumnos;
    struct Alumno alumnos[n_alumnos];

    for (int i = 0; i < n_alumnos; i++){
        fflush(stdin);
        cout<<"Nombre: "; cin.getline(alumnos[i].nombre,20,'\n');
        cout<<"Sexo: "; cin.getline(alumnos[i].sexo,10,'\n');
        cout<<"Edad: "; cin>>alumnos[i].edad;

        cout<<".:Notas del Examen:."<<endl;
        cout<<"Nota1: "; cin>>alumnos[i].prom.nota1;
        cout<<"Nota2: "; cin>>alumnos[i].prom.nota2;
        cout<<"Nota3: "; cin>>alumnos[i].prom.nota3;

        //Sacando el promedio del alumno
        promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3;

        if(promedio_alumno[i] > mayor)		{
            mayor = promedio_alumno[i];
            posM = i;
        }
        cout<<"\n";
    }

    cout<<"\n\nMostrando Datos del alumno con mejor Promedio"<<endl;
    cout<<"Nombre: "<<alumnos[posM].nombre<<endl;
    cout<<"Sexo: "<<alumnos[posM].sexo<<endl;
    cout<<"Edad: "<<alumnos[posM].edad<<endl;
    cout<<"Promedio: "<<promedio_alumno[posM];

    getch();
    return 0;
} */

/* // Ejercicio 7: tiempo de etapas realizadas de un ciclista
// Defina una estructura que indique el tiempo empleado por un ciclista en  una etapa. La estructura debe tener tres campos: horas, minutos y segundos. Escriba un programa que
// dado n etapas calcule el tiempo total empleado en correr todas las etapas.

#include<iostream>
#include<conio.h>

using namespace std;

struct tiempo_ciclista{
    int horas;
    int minutos;
    int segundos;
};

int main(){
    int n_etapas,horasT=0,minutosT=0,segundosT=0;

    cout<<"Digite el numero de etapas: ";
    cin>>n_etapas;
    struct tiempo_ciclista etapa[n_etapas];

    cout<<"\nDigite el tiempo Obtenido:"<<endl;

    for(int i=0;i<n_etapas;i++)	{
        //Pedimos las horas en cada etapa
        cout<<"Etapa numero: "<<i+1<<endl;
        cout<<"Horas: "; cin>>etapa[i].horas;
        cout<<"Minutos: "; cin>>etapa[i].minutos;
        cout<<"Segundos: "; cin>>etapa[i].segundos;

        horasT = horasT + etapa[i].horas;       // Sacamos las horas totales empleadas
        minutosT = minutosT + etapa[i].minutos; // Sacamos los minutos totales empleados
        segundosT = segundosT + etapa[i].segundos;

        if(minutosT>=60){ //Si los minutos son mayores a 60, significa que ha pasado

            minutosT-=60;//mas de 1 hora, entonces disminuimos en 60 los minutos
            horasT++;//y aumentamos las horas en 1
        }

        if(segundosT>=60){
            segundosT-=60;
            minutosT++;
        }
        cout<<"\n";
    }

    //Por ultimo mostramos los totales de tiempos en pantalla
    cout<<"\nEl tiempo total es: "<<endl;
    cout<<"Horas: "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl;


    getch();
    return 0;
} */

/* // Ejercicio 8: representacion de una persona
// Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el nombre de la persona y un valor de tipo l�gico que indica si la
// persona tiene alg�n tipo de discapacidad. Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen ninguna
// discapacidad y otro que contenga las personas con discapacidad.

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

struct Persona{
    char nombre[30];
    bool discapacidad;
};

int main(){
    int n_personas,j=0,k=0;

    cout<<"Digite el numero de personas: ";
    cin>>n_personas;
    struct Persona personas[n_personas];
    struct Persona personasConD[n_personas];
    struct Persona personasSinD[n_personas];

    for (int i = 0; i < n_personas; i++){
        fflush(stdin);
        cout<<"Nombre: "; cin.getline(personas[i].nombre,30,'\n');
        cout<<"Discapacidad (1/0)?: "; cin>>personas[i].discapacidad;

        if(personas[i].discapacidad == 1){
            strcpy(personasConD[j].nombre, personas[i].nombre);
            j++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
        }

        else{
            strcpy(personasSinD[k].nombre,personas[i].nombre);
            k++; //Es un nuevo arreglo por lo tanto debe iniciar en 0 y aumentar
        }
        cout<<"\n";
    }

    //Mostrar las personas con Discapaciadad
    cout<<"\nLa cantidad de personas con discapacidad son: "<<j<<endl;
    for(int i=0;i<j;i++){
        cout<<"- "<<personasConD[i].nombre<<endl;
    }
    //Mostrar las personas sin Discapacidad
    cout << "\nLa cantidad de personas sin discapacidad son: " << k << endl;
    for(int i=0;i<k;i++){
        cout<<"- "<<personasSinD[i].nombre<<endl;
    }
    getch();
    return 0;
} */


//         $$$$$$$$$$$$$$$ Functions $$$$$$$$$$$$$$$


/* // Ejercicio teorico: Devolver valores multiples. Sumar, Restar, Multiplicar y Dividir 2 numeros
#include <iostream>
#include <conio.h>
using namespace std;

void calcular(int, int, int &, int &, int &, float &);

int num1, num2, sum = 0, res = 0, prod = 0;
float div = 0;
int main(){
    cout << "Digite 2 numeros: " << endl;
    cin >> num1 >> num2;

    calcular(num1, num2, sum, res, prod, div);

    // NOTA: Los resultados se estan ACTUALIZANDO y no se esta devolviendo ningun valor, puesto que la funcion void por ley no
    // cumple con esa caracteristica de devolver un valor.
    cout << "\nLa suma de los 2 numeros es: " << sum << endl;
    cout << "La resta de los 2 numeros es: " << res << endl;
    cout << "El producto de los 2 numeros es: " << prod << endl;
    cout << "La division de los 2 numeros es: " << div << endl;

    getch();
    return 0;
}

void calcular(int num1, int num2, int &suma, int &restar, int &producto, float &dividir){
    suma = num1 + num2;
    restar = num1 - num2;
    producto = num1 * num2;
    dividir = num1 / num2;
} */

/* // Ejercicio teorico: Numero mayor
#include <iostream>
#include <conio.h>
    using namespace std;

int EncMax(int x, int y);
int n1, n2;

int main(){
    cout << "Digite 2 numeros: " << endl;
    cin >> n1 >> n2;

    EncMax(n1, n2);
    cout << "El mayor de los dos numero es: " << EncMax(n1, n2);

    getch();
    return 0;
}

int EncMax(int x, int y){
    int nmax;
    if (x > y){
        nmax = x;
    }
    else{
        nmax = y;
    }

    return nmax;
} */

/* // Ejercicio teorico: Numero mayor x2
#include <iostream>
#include <conio.h>
using namespace std;

int n1, n2, nmax;
int PedirDatos();
int EncMax(int x, int y);

int main(){
    PedirDatos();
    EncMax(n1, n2);

    getch();
    return 0;
}

int PedirDatos(){
    cout << "Ingrese 2 numeros:";
    cin >> n1 >> n2;
}

int EncMax(int x, int y){
    if (x > y){
        nmax = x;
    }
    else{
        nmax = y;
    }
    cout << "El mayor numero es: " << nmax << endl;
    return nmax;
} */

/* // Ejercicio teorico: Numero mayor x3
#include <iostream>
#include <conio.h>
using namespace std;

int n1, n2;
int datos();
int mayor(int x, int y);

int main(){
    datos();
    mayor(n1, n2);

    getch();
    return 0;
}

int datos(){
    cout << "Ingrese 2 numeros : " << endl;
    cin >> n1 >> n2;
}

int mayor(int x, int y){
    if (x == y)    {
        cout << "Los numeros son iguales " << endl;
    }
    else if (x > y)    {
        cout << "El numero mayor es: " << x << endl;
    }
    else    {
        cout << "El numero mayor es: " << y << endl;
    }
} */

/* // Ejercicio teorico: Paso de parámetros de tipo estructura
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

struct Persona{
    char nombre[50];
    int edad;
} p1[10];

void pedirDatos(struct Persona[], int);
void mostrar(struct Persona[], int);
int main(){
    int num;

    cout << "Ingrese Numero de Miembros: ";
    cin >> num;
    cout << endl;
    fflush(stdin);
    pedirDatos(p1, num);
    mostrar(p1, num);

    return 0;
}

void pedirDatos(Persona p1[10], int num)
{
    for (int i = 0; i < num; i++){
        fflush(stdin);
        cout << "Ingrese Nombre: ";
        cin.getline(p1[i].nombre, 50, '\n');
        cout << "Ingrese Edad: ";
        cin >> p1[i].edad;
    }
    cout << endl;
}

void mostrar(Persona p1[10], int num){
    cout << "The A-Team" << endl;
    for (int i = 0; i < num; i++){
        cout << "Nombre: " << p1[i].nombre << endl;
        cout << "edad: " << p1[i].edad << endl;
    }
    cout << endl;
} */

/* // Ejercicio teorico: Paso de parámetros de matriz
#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos(int [4][4],int ,int);
void MostrarMatriz(int [4][4],int ,int);
void cuadrado(int [4][4],int ,int);
void MostrarMatrizCuadrado(int [4][4],int ,int);
int i,j, numFilas, numColumnas, matriz[4][4];;

int main () {
    cout <<"Digite el numero de filas: ";
    cin>>numFilas;
    cout <<"Digite el numero de columnas: ";
    cin>>numColumnas;

    pedirDatos(matriz, numFilas, numColumnas);
    MostrarMatriz(matriz, numFilas, numColumnas);
    cuadrado(matriz, numFilas, numColumnas);
    MostrarMatrizCuadrado(matriz, numFilas, numColumnas);

    getch();
    return 0;
}

void pedirDatos(int matriz[4][4], int numFilas, int numColumnas){
    for (i = 1; i <= numFilas; i++){
        for (j = 1; j <= numColumnas; j++){
            cout <<"Digite el numero "<<"["<<i<<"]"<<"["<<j<<"]: ";
            cin >> matriz[i][j];
        }
    }
}

void MostrarMatriz(int matriz[4][4], int numFilas, int numColumnas){
    cout <<"\nMatriz original"<<endl;
    for (i = 1; i <= numFilas; i++){
        for (j = 1; j <= numColumnas; j++){
            cout <<matriz[i][j]<<" ";
        }
        cout <<"\n";
    }
}

void cuadrado(int matriz[4][4], int numFilas, int numColumnas){
    for (i = 1; i <= numFilas; i++){
        for (j = 1; j <= numColumnas; j++){
         matriz[i][j] *= matriz[i][j];
        }
    }
}

void MostrarMatrizCuadrado(int matriz[4][4], int numFilas, int numColumnas){
    cout <<"\nMatriz al cuadrado"<<endl;

    for (i = 1; i <= numFilas; i++){
        for (j = 1; j <= numColumnas; j++){
            cout <<matriz[i][j]<<" ";
        }
        cout <<"\n";
    }
} */

/* // Ejercicio teorico: Paso de parámetros de tipo vector
#include <iostream>
#include <stdlib.h>
using namespace std;

void PedirDatos();
void vector(int[], int);
int numeros[10], n;

int main(){
    PedirDatos();
    vector(numeros, n);
}

void PedirDatos(){
    cout << "Digite el numero de elementos del vector: ";
    cin >> n;
}

void vector(int[], int){
    for (int i = 0; i < n; i++){
        cout << "Digite el numero [" << i + 1 << "]: ";
        cin >> numeros[i];
    }

    cout << "\nVisualizacion de lo que usted digito." << endl;
    cout << "{";
    for (int i = 0; i < n; i++){
        cout << numeros[i] << " ";
    }
    cout << "}";

    for (int i = 0; i < n; i++){
        numeros[i] *= numeros[i];
    }

    cout << "\nVisualizacion del vector al cuadrado." << endl;
    cout << "{";
    for (int i = 0; i < n; i++){
        cout << numeros[i] << " ";
    }
    cout << "}";
} */

/* // Ejercicio teorico: Paso de parámetros de tipo vector
#include <iostream>
#include <conio.h>
using namespace std;

// nombre_funci�n(tipo_de_dato nombrevector[], int tama�o];
void cuadrado(int[], int);
void mostrar(int[], int);

const int TAM = 5;
int VEC[TAM] = {1, 2, 3, 4, 5};
int main()
{    cout << "vector inicial: { ";
    for (int i = 0; i < TAM; i++)
    {
        cout << VEC[i] << " ";
    }
    cout << "}";
    cuadrado(VEC, TAM);

    cout << "\nCuadrado del vector inicial: { ";
    mostrar(VEC, TAM);
    cout << "}";

    getch();
    return 0;
}

void cuadrado(int VEC[], int TAM){
    for (int i = 0; i < TAM; i++) {
        VEC[i] *= VEC[i];
    }
}

void mostrar(int VEC[], int TAM){
    for (int i = 0; i < TAM; i++)
    {
        cout << VEC[i] << " ";
    }
} */

/* // Ejercicio teorico: Parametros de referencia
#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;

void Valnuevo(int &, int &);
int xnum, ynum;
int main(){
    cout << "Digite dos numeros: ";
    cin >> xnum >> ynum;
    Valnuevo(xnum, ynum);

    cout << "El nuevo valor del primer numero es: " << xnum << endl;
    cout << "El nuevo valor del segundo numero es: " << ynum << endl;
    getch();
    return 0;
}

void Valnuevo(int &xnum, int &ynum){
    cout << "El valor del primer numero es: " << xnum << endl;
    cout << "El valor del segundo numero es: " << ynum << endl;

    xnum = 89;
    ynum = 45;
} */

/* // Ejercicio teorico: Plantillas
#include <iostream>
#include <conio.h>
using namespace std;

// template <class *variable*> permite recibir un tipo de dato, ya sea, bouble, int, float, etc. y de esa manera evita que pongamos mas funciones para cada tipo de dato
template <class TIPOD>
void mostrarAbs(TIPOD);

int main(){ // sacar el valor absoluto de un numero
    int num1 = 4;
    float num2 = 56.56;
    double num3 = 123.43534;
    int num4 = -8;

    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);
    mostrarAbs(num4);

    getch();
    return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
    if (numero < 0){
        numero = numero * -1;
    }
    cout << "El valor absoluto del numero es: " << numero << endl;
} */

/* // Ejercicio teorico: Recursividad

// factorial de un numero 3!=3*2�

//  0!=1

//  factorial(n)=1         ,si n=0
//         n*factorial(n-1),si n>0


#include <iostream>
#include <conio.h>

using namespace std;

int factorial(int n);

int main(){
    cout << "Factorial: " << factorial(10) << endl;

    getch();
    return 0;
}

int factorial(int n){
    if (n == 0){ // Caso Base
        n = 1;
    }
    else{// Caso General
        n = n * factorial(n - 1); // n=n*factorial(n-1)
    }
    return n;
} */

/* // Ejercicio 1 : Funciones multiplicacion de dos numeros float
// Escriba una funci�n llamada mult() que acepte dos n�meros en punto flotante como par�metros, multiplique estos dos n�meros y despliegue el resultado.

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de Funcion
void mult(float, float);
void pedirDatos();

float n1, n2;

int main(){
    pedirDatos();
    mult(n1, n2);

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite 2 numeros: " << endl;
    cin >> n1 >> n2;
}

void mult(float x, float y){
    float multiplicacion = x * y;

    cout << "La multiplicacion es: " << multiplicacion << endl;
} */

/* // Ejercicio 2: Funciones cuadrado de un numero
// Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le transmite y despliegue el resultado.
// La funcin deber ser capaz de elevar al cuadrado numeros flotantes

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
void al_cuadrado(float n);

float n;
int main(){
    pedirDatos();
    al_cuadrado(n);

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite un numero: ";
    cin >> n;
}

void al_cuadrado(float n){
    float cuadrado = 0;

    cuadrado = n * n;

    cout << "El cuadrado del numero es: " << cuadrado << endl;
} */

/* // Ejercicio 3: Potencia de un numero
// Escriba una funci�n nombrada funpot() que eleve un n�mero entero que se le transmita a una potencia en n�mero entero positivo y despliegue el resultado.
// El n�mero entero positivo deber� ser el segundo valor transmitido a la funci�n.

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
void funpot(int, int);
int x, y;
int main(){
    pedirDatos();
    funpot(x, y);

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite el numero a elevar: ";
    cin >> x;
    cout << "Digite el exponetente de elevacion: ";
    cin >> y;
}

void funpot(int x, int y){
    int i;
    long resultado = 1;
    for (i = 1; i <= y; i++){
        resultado *= x;
        // resultado = resultado * x;
    }

    cout << "El resultado de la elevacion es: " << resultado << endl;
} */

/* // Ejercicio 4: Parte fraccionaria
// Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier n�mero introducido por el usuario. Por ejemplo, si se introduce el n�mero 256.879, deber�a desplegarse el n�mero 0.879.

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();

float devolucionFraccionaria(float num);
float num, resultado;
int entero;

int main(){
    pedirDatos();
    cout << "La parte fraccionaria del numero " << num << " es: " << devolucionFraccionaria(num) << endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite un numero: ";
    cin >> num;
}

float devolucionFraccionaria(float num){
    entero = num;             // por ejemplo si el numero es 45.567 en entero solo se guardaria 45
    resultado = num - entero; // y por ultimo restamos el valor flotante menos el entero para tener la parte fraccionaria

    return resultado;
} */

/* // Ejercicio 4.1: Parte fraccionaria
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

// Prototipos de Funcion
void pedirDatos();
float fraccionaria(float n);

int parteEntera;
float parteDecimal, numero;

int main(){
    pedirDatos();
    cout << "La parte decimal de su numero es: " << fraccionaria(numero) << endl;
    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite un numero y se le entregara su parte fraccionaria (decimal): ";
    cin >> numero;
}

float fraccionaria(float n){
    parteEntera += n;
    parteDecimal = n - parteEntera;
    return parteDecimal;
} */

/* // Ejercicio 4.2: Parte fraccionaria
#include <iostream>
#include <stdlib.h>
using namespace std;

void ask_data();
float decimal(float x);

double n;

int main(){
    ask_data();
    decimal(n);
    cout << "\nEl valor de los decimales de " << n << ", es " << decimal(n) << endl;

    system("pause");
    return 0;
}

void ask_data(){
    cout << "Ingrese un numero con decimales: ";
    cin >> n;
}

float decimal(float x){
    while (x >= 1){
        x = x - 1;
    }
    return x;
} */

/* // Ejercicio 5: Plantilla de una funcion
// Escriba una plantilla de funci�n llamada despliegue() que despliegue el valor del argumento �nico que se le transmite cuando es invocada la funci�n.

#include <iostream>
#include <conio.h>
using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main(){
    int dato1 = 4;
    float dato2 = 5.678;
    double dato3 = 15.6789;
    char dato4 = 'a';

    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    getch();
    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
    cout << "El dato es: " << dato << endl;
} */

/* // Ejercicio 6: Plantilla de un valor maximo
// Escriba una plantilla de funci�n llamada maximo() que devuelva el valor maximo de tres argumentos que se transmitan a la funci�n cuando sea llamada.
// Suponga que los tres argumentos ser�n del mismo tipo de datos.

#include <iostream>
#include <conio.h>
using namespace std;

template <class Tipo>
Tipo maximo(Tipo, Tipo, Tipo);
int main(){
    char dato1 = 'e';
    char dato2 = 'f';
    char dato3 = 'a';

    cout << "El maximo valor es: " << maximo(dato1, dato2, dato3);

    getch();
    return 0;
}

template <class Tipo>
Tipo maximo(Tipo dato1, Tipo dato2, Tipo dato3){
    Tipo max;
    if ((dato1 > dato2) && (dato1 > dato3)){
        max = dato1;
    }
    else if ((dato2 > dato1) && (dato2 > dato3)){
        max = dato2;
    }
    else{
        max = dato3;
    }
    return max;
} */

/* // Ejercicio 6.1: Plantilla de un valor maximo

#include <iostream>
#include <conio.h>
using namespace std;

// Definir el Prototipo de la funcion
template <class DG>
void maximo(DG, DG, DG);
int main(){
    int valor1 = 10;
    int valor2 = 19;
    int valor3 = 18;

    maximo(valor1, valor2, valor3);

    getch();
    return 0;
}

// Definicion de la funcion
template <class DG>
void maximo(DG x, DG y, DG z){
    if (x > y and x > z){
        cout << "El numero mayor es: " << x << endl;
    }
    else if (y > z){
        cout << "El numero mayor es: " << y << endl;
    }
    else{
        cout << "El numero mayor es: " << z << endl;
    }
} */

/* // Ejercicio 6.2: Plantilla de un valor maximo
#include <iostream>
using namespace std;

template <class Tipo>
Tipo maximo(Tipo, Tipo, Tipo);
int aux;
int main(){
    int a = 15;
    int b = 20;
    int c = 19;
    maximo(a, b, c);
    cin.get();
    return 0;
}

template <class Tipo>
Tipo maximo(Tipo a, Tipo b, Tipo c){
    int i, j, arr[3];
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    for (i = 1; i < 3; i++){
        for (j = 0; j < 3 - i; j++){
            if (arr[j] > arr[j + 1]){
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }

    cout << arr[2];
} */

/* // Ejercicio 7: Funciones Intercambiar valor de 2 variables
Intercambiar el valor de 2 variables utilizando paso de parametros por referencia.

#include <iostream>
#include <conio.h>
using namespace std;

void intercambio(int &, int &);
int num1 = 10, num2 = 15;
int aux;
int main(){
    cout << "El valor almacenado en num1 es: " << num1 << endl;
    cout << "El valor almacenado en num2 es: " << num2 << endl;

    intercambio(num1, num2);

    cout << "Ahora el nuevo valor de num1 es: " << num1 << endl;
    cout << "Ahora el nuevo valor de num2 es: " << num2 << endl;

    getch();
    return 0;
}

void intercambio(int &num1, int &num2){
    // Intercambiamos ambos valores de las variables num1 y num2
    aux = num1;
    num1 = num2;
    num2 = aux;
} */

/* // Ejercicio 8: Ejercicio de cambio-billetes 
// Escriba una funcin nombrada cambio() que tenga un parmetro en nmero entero y seis parmetros de referencia en nmero entero nombrados cien, cincuenta, veinte, diez, cinco y uno, 
// respectivamente. La funcin tiene que considerar el valor entero transmitido como una cantidad en dlares y convertir el valor en el nmero menor de billetes equivalentes. 

#include <iostream>
#include <conio.h>
using namespace std;

void cambio(int, int &, int &, int &, int &, int &, int &);
int valor, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;
int main(){

    cout << "Digite un valor: ";
    cin >> valor;
    cambio(valor, cien, cincuenta, veinte, diez, cinco, uno);

    cout << "Cantidad de billetes a entregar como cambio:" << endl;
    cout << "Cien: " << cien << endl;
    cout << "Cincuenta: " << cincuenta << endl;
    cout << "Veinte: " << veinte << endl;
    cout << "Diez: " << diez << endl;
    cout << "Cinco: " << cinco << endl;
    cout << "Uno: " << uno << endl;

    getch();
    return 0;
}

void cambio(int valor, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno){ // valor=895
    cien = valor / 100;  // 8
    valor = valor % 100; // 95

    cincuenta = valor / 50; // 1
    valor %= 50;            // 45

    veinte = valor / 20; // 2
    valor %= 20;         // 5

    diez = valor / 10; // 0
    valor %= 10;       // 5

    cinco = valor / 5; // 1
    uno = valor % 5;   // 0
} */

/* // Ejercicio 9: Uso de segundos, horas y minutos
// Escriba una funci�n nombrada tiempo() que tenga un par�metro en n�mero entero llamado totalSeg y tres par�metros de referencia enteros nombrados horas, min y seg.
// La funci�n es convertir el n�mero de segundos transmitido en un n�mero equivalente de horas, minutos y segundos.

#include <iostream>
#include <conio.h>
using namespace std;

void tiempo(int, int &, int &, int &);

int main(){
    int totalSeg, horas, min, seg;

    cout << "Digita la cantidad de segundos: ";
    cin >> totalSeg;

    tiempo(totalSeg, horas, min, seg);

    cout << "\nHoras: " << horas << endl;
    cout << "Minutos: " << min << endl;
    cout << "Segundos: " << seg << endl;

    getch();
    return 0;
}

void tiempo(int totalSeg, int &horas, int &min, int &seg){
    horas = totalSeg / 3600;
    totalSeg %= 3600;
    min = totalSeg / 60;
    seg = totalSeg % 60;
} */

/* // Ejercicio 10 : dia - mes - ano
// Escriba una funci�n nombrada calc_a�os() que tenga un par�metro entero que represente el n�mero total de d�as desde la fecha 1/1/2000 y par�metros de referencia nombrados 
// anio, mes y d�a. La funci�n es calcular el a�o, mes y d�a actual para el n�mero dado de d�as que se le transmitan. Usando las referencias, la funci�n debera alterar en 
// forma directa los argumentos respectivos en la funci�n que llama. Para este problema suponga que cada a�o tiene 365 d�as y cada mes tiene 30 d�as.

#include <iostream>
#include <conio.h>
using namespace std;

void calc_anios(int, int &, int &, int &);
int totalDias, anio, mes, dia;
int main(){
    cout << "Digite el numero total de dias transcurridos: ";
    cin >> totalDias;

    calc_anios(totalDias, anio, mes, dia);

    cout << "Fecha Actual: " << dia + 1 << "/" << mes + 1 << "/" << anio + 2000 << endl;

    getch();
    return 0;
}

void calc_anios(int totalDias, int &anio, int &mes, int &dia){
    anio = totalDias / 365;
    totalDias %= 365;
    mes = totalDias / 30;
    dia = totalDias % 30;
} */

/* // Ejercicio 11: Suma de elementos de un vector 
// Realice una funcion que tome como par�metros un vector de n�meros enteros y devuelva la suma de sus elementos.

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
int calcularSuma(int vec[], int);

int vec[100], tam;

int main(){
    pedirDatos();

    cout << "\nLa suma es: " << calcularSuma(vec, tam) << endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite el numero de elementos del arreglo: ";
    cin >> tam;

    for (int i = 0; i < tam; i++){
        cout << i + 1 << ". Digite un numero [" << i + 1 << "]: ";
        cin >> vec[i];
    }
}

int calcularSuma(int vec[], int tam){
    int suma = 0;
    for (int i = 0; i < tam; i++){
        suma += vec[i];
    }
    return suma;
} */

/* // Ejercicio 12: Verificar tamano de un vector
// Realice una funci�n que tome como par�metros un vector y su tama�o y diga si el vector est� ordenado crecientemente. Sugerencia: compruebe que para todas 
// las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual que el elemento que le precede en el vector.

#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();

void comprobarOrdenamiento(int vec[],int);
int vec[100],tam;
int i;

int main(){
	pedirDatos();
	comprobarOrdenamiento(vec,tam);
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de elementos del vector: ";
	cin>>tam;
	
	for(i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>vec[i];
	}
}

void comprobarOrdenamiento(int vec[],int tam){
	char band = 'F';
	
	//1 2 3 4 5
	int i=0;
	while( (band=='F')&&(i<tam-1) ){
		if(vec[i]>vec[i+1]){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"\nEl arreglo esta ordenado en forma creciente";
	}
	else{
		cout<<"\nEl arreglo NO esta ordenado";
	}
} */

/* // Ejercicio 12.1: Verificar tamano de un vector
#include <iostream>
#include <conio.h>
using namespace std;

void PedirDatos();
void Comprobacion(int vec[], int);

int vec[100], tam;

int main(){
    PedirDatos();
    Comprobacion(vec, tam);

    getch();
    return 0;
}

void PedirDatos(){
    cout << "Digite el tama�o del vector: ";
    cin >> tam;
    cout << "\n";

    for (int i = 0; i < tam; i++){
        cout << i + 1 << ". Digite un numero: ";
        cin >> vec[i];
    }
}

void Comprobacion(int vec[], int tam){
    int aux, i = 1;

    for (i = 1; i < tam; i++){
        if (vec[i] >= vec[i + 1]){
            aux += 1;
        }
    }

    if (aux == tam){
        cout << "\nEl arreglo esta ordenado crecientemente." << endl;
    }
    else{
        cout << "\nEl arreglo NO esta ordenado crecientemente." << endl;
    }
} */

/* // Ejercicio 13: Cambio de signo de valores de vector
// Realiza una funcion que tome como parametros un vector de numeros y su tamano y cambie el signo de los elementos del vector.

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipos de Funciones
void pedirDatos();
void cambiarSigno(int vec[], int);
void mostrarVector(int vec[], int);

int tam, vec[100];

int main(){
    pedirDatos();
    cambiarSigno(vec, tam);
    mostrarVector(vec, tam);

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite el tamanio del vector: ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << ". Digite un numero: ";
        cin >> vec[i];
    }
}

void cambiarSigno(int vec[], int tam){
    for (int i = 0; i < tam; i++)
    {
        vec[i] *= -1;
    }
}

void mostrarVector(int vec[], int tam){
    cout << "\nMostrando vector con cambio de signo: " << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << vec[i] << " ";
    }
} */

/* // Ejercicio 14: Numeros impares de un vector
// Realiza una funci�n que tome como par�metros un vector de enteros y su tama�o e imprima un vector con los elementos impares del vector recibido.

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
void impares(int vec[], int tam);

int tam, vec[100];

int main(){
    pedirDatos();
    impares(vec, tam);

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite el tamanio del vector: ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << i + 1 << ". Digite un numero: ";
        cin >> vec[i];
    }
}

void impares(int vec[], int tam){
    int vecImpares[100];
    int j = 0, i = 0;
    for (i = 0; i < tam; i++){
        if (vec[i] % 2 != 0){
            vecImpares[j] = vec[i];
            j++;
        }
    }

    cout << "\nImprimiendo los elementos impares del vector: " << endl;
    for (int i = 0; i < j; i++)    {
        cout << vecImpares[i] << " ";
    }
} */

/* // Ejercicio 15: matriz simetrica
// Desarrollar una funcion que determine si una matriz es simetrica o no.

// Una matriz es simetrica: A = A^t

// - La matriz debe ser cuadrada.
// - Aij = Aji

// |2  5  9|			|2  5  9|
// |5  8 -1|     ->     |5  8 -1|
// |9 -1 10|			|9 -1 10|

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
void comprobarSimetria(int m[100][100], int, int);

int m[100][100], nfilas, ncol;
int i, j;
int main(){
    pedirDatos();
    comprobarSimetria(m, nfilas, ncol);

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite el numero de filas: ";
    cin >> nfilas;
    cout << "Digite el numero de columnas: ";
    cin >> ncol;

    // Pedimos todos los elementos de la matriz
    for (i = 0; i < nfilas; i++){
        for (j = 0; j < ncol; j++){
            cout << "Digite m[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

void comprobarSimetria(int m[100][100], int nfilas, int ncol){
    int cont = 0;
    if (nfilas == ncol){ // Si es cuadrada
        // y ademas si Aij = Aji
        for (i = 0; i < nfilas; i++){
            for (j = 0; j < ncol; j++){
                if (m[i][j] == m[j][i]) {
                    cont++; // El conteo debe ser igual al numero de elementos de la matriz
                }
            }
        }
    }

    if (cont == nfilas * ncol)    {
        cout << "\nLa matriz es Simetrica";
    }
    else    {
        cout << "\nLa matriz NO es simetrica";
    }
} */

/* // Ejercicio 16: Valor mas chico de un array
// Realice una funci�n que dada una matriz y un n�mero de fila de la matriz devuelva el menor de los elementos almacenados en dicha fila.

#include <iostream>
#include <conio.h>
using namespace std;

void pedirDatos();
int comprobarMenorElemento(int m[100][100], int, int);

int m[100][100], nfilas, ncol;

int main(){
    pedirDatos();

    cout << "\nEl menor elemento de la fila seleccionada es: " << comprobarMenorElemento(m, nfilas, ncol) << endl;

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite el numero de filas: ";
    cin >> nfilas;
    cout << "Digite el numero de columnas: ";
    cin >> ncol;

    for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncol; j++){
            cout << "Digite m[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

int comprobarMenorElemento(int m[100][100], int nfilas, int ncol){
    int i, j, fila, menor = 100;

    cout << "\nDigite el numero de la fila que desea comprobar: ";
    cin >> fila;
    for (i = 0; i < nfilas; i++){
        for (j = 0; j < ncol; j++){
            if (i == fila){
                if (m[i][j] < menor)
                {
                    menor = m[i][j];
                }
            }
        }
    }

    return menor;
} */

/* // Ejercicio 17: Suma de numeros Complejos

// z1 = 5-3i   ,  z2 = -4+2i

// z1 + z2 = (5-3i)+(-4+2i)
//         = 5-3i-4+2i
//         = 1-i

#include <iostream>
#include <conio.h>
using namespace std;

struct complejo{
    float real, imaginaria;
} z1, z2;

complejo suma(complejo, complejo);
void pedirDatos();
void muestra(complejo);

int main(){
    pedirDatos();
    complejo x = suma(z1, z2);
    muestra(x);

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite el primer numero complejo: " << endl;
    cout << "Parte Real: ";
    cin >> z1.real;
    cout << "Parte Imaginaria: ";
    cin >> z1.imaginaria;

    cout << "\nDigite el segundo numero complejo: " << endl;
    cout << "Parte Real: ";
    cin >> z2.real;
    cout << "Parte Imaginaria: ";
    cin >> z2.imaginaria;
}

complejo suma(complejo z1, complejo z2){
    z1.real = z1.real + z2.real;
    z1.imaginaria = z1.imaginaria + z2.imaginaria;
    return z1;
}

void muestra(complejo x){
    cout << "\nLa suma es: (" << x.real << ", " << "j" << x.imaginaria << ")" << endl;
} */

/* // Ejercicio 17.1: Suma de numeros Complejos
#include <iostream>
#include <stdlib.h>
using namespace std;

// Creamos la estrcutura
struct Complejos{
    float real = 0, imaginaria = 0;
} num[100];
int n, i, sumR = 0, sumI = 0;

void PedirDatos();
void suma(Complejos[100]);

int main(){
    PedirDatos();
    suma(num);

    cout << "\n";
    system("pause");
    return 0;
}

// Definimos las acciones de las funciones

void PedirDatos(){
    cout << "Ingrese la cantidad de numeros complejos a sumar: ";
    cin >> n;
    for (i = 0; i < n; i++){
        cout << "\n#" << i + 1 << endl;
        cout << "Ingrese parte real: ";
        cin >> num[i].real;
        cout << "Ingrese parte imaginaria: ";
        cin >> num[i].imaginaria;
    }
}

void suma(Complejos num[100]){
    for (i = 0; i < n; i++){
        sumR = sumR + num[i].real;
        sumI = sumI + num[i].imaginaria;
    }

    if (sumI > 0){
        cout << "Resultado: " << sumR << "+" << sumI << "i" << endl;
    }

    else{
        cout << "Resultado: " << sumR << " " << sumI << "i" << endl;
    }
} */

/* // Ejercicio 17.2: Suma de numeros Complejos
#include <iostream>
#include <conio.h>
using namespace std;

struct Imaginario{
    int real, img;
} z1, num[100];

int i, n;

void PedirDatos();

Imaginario Suma(Imaginario, Imaginario[100]);

void MuestraDatos(Imaginario);

int main(){
    PedirDatos();
    Imaginario res = Suma(z1, num);
    MuestraDatos(res);

    system("pause");
    return 0;
}

void PedirDatos(){
    cout << "Digite la cantidad de numeros a sumar: ";
    cin >> n;
    for (i = 0; i < n; i++)    {
        cout << "\nParte real: " << endl;
        cin >> num[i].real;
        cout << "Parte imaginaria: " << endl;
        cin >> num[i].img;
    }
}

Imaginario Suma(Imaginario z1, Imaginario num[100]){
    z1.real = 0; // 1  3  6
    z1.img = 0;  // 3  7  13
    for (i = 0; i < n; i++)
    { //    3         3          3
        z1.real = z1.real + num[i].real;
        z1.img = z1.img + num[i].img;
    } //    7         7          6
    return z1;
}

void MuestraDatos(Imaginario res){
    cout << "\nEl resultado es: ";
    cout << "(" << res.real << "+" << res.img << "i" << ")" << endl;
} */

/* // Ejercicio 18: Fechas
// Escriba una funci�n en C++ llamada mayor() que devuelva la fecha mas reciente de cualquier par de fechas que se le transmitan. Por ejemplo, si se transmiten las fechas
// 10/9/2005 y 11/3/2015 a mayor(), ser� devuelta la segunda fecha.

#include <iostream>
#include <conio.h>
using namespace std;

struct Fecha{
    int dia, mes, anio;
} f1, f2;

// Prototipos de Funciones
void pedirDatos();
Fecha mayor(Fecha, Fecha);
void mostrarFechaMayor(Fecha);

int main(){
    pedirDatos();
    Fecha x = mayor(f1, f2);
    mostrarFechaMayor(x);

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite la Fecha1: " << endl;
    cout << "Dia: ";
    cin >> f1.dia;
    cout << "Mes: ";
    cin >> f1.mes;
    cout << "Anio: ";
    cin >> f1.anio;

    cout << "\n\nDigite la Fecha2: " << endl;
    cout << "Dia: ";
    cin >> f2.dia;
    cout << "Mes: ";
    cin >> f2.mes;
    cout << "Anio: ";
    cin >> f2.anio;
}

Fecha mayor(Fecha f1, Fecha f2){
    Fecha mayorFecha;

    if (f1.anio == f2.anio){
        if (f1.mes == f2.mes){
            if (f1.dia == f2.dia){
                cout << "\nAmbas fechas son iguales";
            }
            else if (f1.dia > f2.dia){
                mayorFecha = f1;
            }
            else{
                mayorFecha = f2;
            }
        }
        else if (f1.mes > f2.mes){
            mayorFecha = f1;
        }else{
            mayorFecha = f2;
        }
    }
    else if (f1.anio > f2.anio){
        mayorFecha = f1;
    }
    else{
        mayorFecha = f2;
    }

    return mayorFecha;
}

void mostrarFechaMayor(Fecha x){
    cout << "\nMostrando fecha mas reciente es: " << x.dia << "/" << x.mes << "/" << x.anio << endl;
} */

/* // Ejercicio 18.1: Fechas x2
// Escriba una funci�n en C++ llamada mayor() que devuelva la fecha mas reciente de cualquier par de fechas que se le transmitan. Por ejemplo, si se transmiten las fechas
// 10/9/2005 y 11/3/2015 a mayor(), ser� devuelta la segunda fecha.

#include <iostream>
#include <conio.h>
using namespace std;

struct Fecha{
    int dia, mes, ano;
} a, b, c; // a = primera fecha, b = segunda fecha, c = resultado de la fecha mas reciente

void pedirDatos();
Fecha mayor(Fecha, Fecha, Fecha);
void imprimiendoDatos(Fecha);

int main(){
    pedirDatos();
    Fecha x = mayor(a, b, c);
    imprimiendoDatos(x);

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el dia de la primera fecha: ";
    cin >> a.dia;

    while (a.dia > 31 || a.dia < 1){
        cout << "Por favor, Ingrese un dia valido: ";
        cin >> a.dia;
    }

    cout << "Ingrese el mes de la primera fecha: ";
    cin >> a.mes;

    while (a.mes > 12 || a.mes < 1){
        cout << "Por favor, Ingrese un mes valido: ";
        cin >> a.mes;
    }

    cout << "Ingrese el a�o de la primera fecha: ";
    cin >> a.ano;

    cout << "\nIngrese el dia de la segunda fecha: ";
    cin >> b.dia;

    while (b.dia > 31 || b.dia < 1){
        cout << "Por favor, Ingrese un dia valido: ";
        cin >> b.dia;
    }

    cout << "Ingrese el mes de la segunda fecha: ";
    cin >> b.mes;
    while (b.mes > 12 || b.mes < 1){
        cout << "Por favor, Ingrese un mes valido: ";
        cin >> b.mes;
    }

    cout << "Ingrese el a�o de la primera fecha: ";
    cin >> b.ano;
}

Fecha mayor(Fecha a, Fecha b, Fecha c){
    if (a.ano > b.ano){
        c.dia = a.dia;
        c.mes = a.mes;
        c.ano = a.ano;
    }
    else if (b.ano > a.ano){
        c.dia = b.dia;
        c.mes = b.mes;
        c.ano = b.ano;
    }
    else{
        if (a.mes > b.mes){
            c.dia = a.dia;
            c.mes = a.mes;
            c.ano = a.ano;
        }
        else if (b.mes > a.mes){
            c.dia = b.dia;
            c.mes = b.mes;
            c.ano = b.ano;
        }
        else{
            if (a.dia > b.dia){
                c.dia = a.dia;
                c.mes = a.mes;
                c.ano = a.ano;
            }
            else if (b.dia > a.dia){
                c.dia = b.dia;
                c.mes = b.mes;
                c.ano = b.ano;
            }
        }
    }

    return c;
}

void imprimiendoDatos(Fecha c){
    cout << "\nLa fecha mas reciente es: " << c.dia << "/" << c.mes << "/" << c.ano << "." << endl;
} */

/* // Ejercicio 19: Suma de numeros positivos (recurcividad)
// Realice una funci�n recursiva que sume los primeros n enteros positivos. Nota: para plantear la funci�n recursiva tenga en cuenta que la suma puede expresarse
// mediante la siguiente recurrencia:

//     suma(n) = 1  , si n=1
//     n+suma(n-1)  , si n>1


#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de Funci�n
int sumar(int n);

int main(){
    int numero;
    do{
        cout << "Digite un numero: ";
        cin >> numero;
    } while (numero <= 0);

    cout << "La suma es: " << sumar(numero) << endl;

    getch();
    return 0;
}

// Definici�n de Funci�n
int sumar(int n){
    int suma = 0;

    if (n == 1){ // Caso base
        suma = 1;
    }
    else{ // Caso general
        suma = n + sumar(n - 1);
    }

    return suma;
}

// return 1
// 2 + 1 = 3
// 3 + 3 = 6
// 4 + 6 = 10 */

/* // Ejercicio 20: Series de Fibonacci (recurcividad)
// Realice una funcion recursiva para la serie Fibonacci Nota: La serie de Fibonacci est� formada por la secuencia de n�meros: 
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34... 

// 	fibonacci(n) = n               , si n<2
// 	fibonacci(n-1)+fibonacci(n-2)  , si n>=2



#include<iostream>
#include<conio.h>
using namespace std;

int fibonacci(int n);

int main(){
	int nElementos;
	do{
		cout<<"Digite el numero de elementos: ";
		cin>>nElementos;
	}while(nElementos <= 0);
	
	cout<<"Serie Fibonacci: ";
	for(int i=0;i<nElementos;i++){
		cout<<fibonacci(i)<<" , ";	
	}
	
	getch();
	return 0;
}

int fibonacci(int n){
	if(n<2){//Caso base
		return n;
	}
	else{//Caso general
		return fibonacci(n-1)+fibonacci(n-2);
	}
} */

/* // Ejercicio 21: Portencia de un numero (recurcividad)
// Escriba una funci�n recursiva que calcule un n�mero elevado a una potencia entera mayor o igual que cero: x^y.

//     potencia(x,y) = x  , y=1
//     x*potencia(x,y-1)  , y>1


#include <iostream>
#include <conio.h>
using namespace std;

int potencia(int, int);
int base, exponente;

int main(){
    cout << "Digite numero base: ";
    cin >> base;
    cout << "Digite exponente: ";
    cin >> exponente;

    cout << "\nResultado: " << potencia(base, exponente) << endl;

    getch();
    return 0;
}

int potencia(int x, int y){
    int res;
    if (y == 1){ // Caso base
        res = x;
    }
    else{ // Caso general
        res = x * potencia(x, y - 1);
    }
    return res;
}

// 3^3
// 3 --> 3
// 3 --> 2
// 3 --> 1 = 3  Una vez que el exponente es igual a 1, entonces res devuelve un 3 a la funcion, el cual es el de la base

// res = base*potencia(base,exponente-1)
// res = 3*3 = 9

// 3 - 2  = 9
// res = 3*9 = 27

// 3 - 3 = 27 */

/* // Ejercicio 22: Numeros en orden ascendente
// Escriba una funci�n escribeNumeros(int ini, int fin) que devuelva en la salida est�ndar los n�meros del ini al fin. Escriba una versi�n que escriba los
// n�meros en orden ascendente.

// escribeNumeros(ini,fin) = ini    , si ini=fin
// escribeNumeros(ini,fin-1)        , si fin>ini

#include <iostream>
#include <conio.h>
using namespace std;

int escribeNumeros(int, int);

int main(){
    int ini, fin, i;
    cout << "Escriba el inicio: ";
    cin >> ini;
    cout << "Escriba el fin: ";
    cin >> fin;

    for (i = ini; i <= fin; i++){
        cout << escribeNumeros(i, fin) << " ";
    }

    getch();
    return 0;
}

int escribeNumeros(int x, int y){
    if (x == y){ // Caso base
        return x;
    }
    else{ // Caso general
        return escribeNumeros(x, y - 1);
    }
} */



//         $$$$$$$$$$$$$$$ Arrays & vectors $$$$$$$$$$$$$$$



/* // Ejercicio 1: Mostrando la diagonal principal de una matriz.
// Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"Mostrando Matriz completa\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\n\nMostrando diagonal principal de la matriz\n";
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j)
			{
				cout<<numeros[i][j]<<endl;
			}
		}
	}
	
	getch();
	return 0;
} */

/* // Ejercicio 2: Suma de elementos de un array
// Escribe un programa que defina un vector de n�meros y calcule la suma de sus elementos.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[5] = {1, 2, 3, 4, 5};
    int suma = 0;

    for (int i = 0; i < 5; i++){
        suma = suma + numeros[i]; // Utilizamos una suma iterativa
    }

    cout << "La suma de los elementos del arreglo es: " << suma << endl;

    getch();
    return 0;
} */

/* // Ejercicio 3: Rellenado de una mtriz
// Hacer un programa para rellenar una matriz pidiendo al usuario el n�mero de filas y columnas, Posteriormente mostrar la matriz en pantalla.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100],filas,columnas, i, j;
	
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;
	
	//Rellenando la matriz	
	for(i=0;i<filas;i++){
		for( j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	} 

	cout<<"\nMostrando matriz\n\n";

	for(i=0;i<filas;i++){
		for(j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<"\n";
	}

	getch();
	return 0;
} */

/* // Ejercicio 4: Multiplicacion de los elementos de un array
// Escribe un programa que defina un vector de n�meros y calcule la
// multiplicaci�n acumulada de sus elementos.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5] = {1,2,3,4,5};
	int multiplicacion=1;

	for(int i=0;i<5;i++){
		multiplicacion *= numeros[i]; //Hacemos la multiplicacion iterativa
	}
	
	cout<<"La multiplicacion de los elementos es: "<<multiplicacion<<endl;
	
	getch();
	return 0;
} */

/* // Ejercicio 5: Copiar el contenido de una matriz a otra matriz
//Hacer una matriz de tipo entera de 2 * 2, llenarla de n�meros y luego copiar todo su contenido hacia otra matriz.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int matriz1[2][2] = {{1, 2}, {3, 4}};
    int matriz2[2][2];

    // Copiando el contenido de la matriz1 hacia matriz2
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            matriz2[i][j] = matriz1[i][j];
        }
    }

    // Mostrando matriz2
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            cout << matriz2[i][j];
        }
        cout << "\n";
    }

    getch();
    return 0;
} */

/* // Ejercicio 6: Mostrando los elementos de un arreglo con sus indices
// Escribe un programa que lea de la entrada est�ndar un vector de n�meros y
// muestre en la salida est�ndar los n�meros del vector con sus �ndices asociados.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[100], n;

    cout << "Digite el numero de elementos: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "Digite un numero: ";
        cin >> numeros[i]; // Guardamos los numeros en el arreglo
    }

    // Ahora, vamos a mostrar los numeros con sus indices asociados

    for (int i = 0; i < n; i++){
        cout << i << " -> " << numeros[i] << endl; // Mostrando los numeros
    }

    getch();
    return 0;
} */

/* // Ejercicio 7: Imprimir un arreglo en orden inverso
// Escribe un programa que defina un vector de n�meros y muestre en la salida est�ndar el vector en orden inverso�del �ltimo al primer elemento.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[5] = {1, 2, 3, 4, 5}; // Definimos el arreglo

    for (int i = 4; i >= 0; i--){
        cout << numeros[i] << endl; // Imprimimos el arreglo en orden inverso
    }

    getch();
    return 0;
} */

/* // Ejercicio 8: Llenar una matriz de numeros aleatorios
// Hacer una matriz preguntando al usuario el numero de filas y columnas,llenarla de
// numeros aleatorios, copiar el contenido a otra matriz y por ultimo mostrarla en
// pantalla.

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int matriz[100][100], matriz2[100][100], filas, columnas, dato = 0;

    cout << "Digite el numero de filas: ";
    cin >> filas;
    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    srand(time(NULL));

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            dato = 1 + rand() % (100); // numeros aleatorios de 1 a 100
            matriz[i][j] = dato;
        }
    }

    // Copiando el contenido a una nueva matriz
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            matriz2[i][j] = matriz[i][j];
        }
    }

    // Mostrando en pantalla la nueva matriz
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << matriz2[i][j] << "  ";
        }
        cout << "\n";
    }

    system("pause");
    return 0;
} */

/* // Ejercicio 9: Suma de matrices de 3x3
Realice un programa que calcule la suma de dos matrices cuadradas de 3x3.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int matriz1[3][3] = {{2, 0, 1}, {3, 0, 0}, {5, 1, 1}};
    int matriz2[3][3] = {{1, 0, 1}, {1, 2, 1}, {1, 1, 0}};

    // Mostrando las 2 matrices
    cout << "Matriz 1\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matriz1[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nMatriz 2\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matriz2[i][j] << " ";
        }
        cout << "\n";
    }

    // Sumando matrices
    cout << "\nSuma de matrices\n";
    for (int i = 0; i < 3; i++)    {
        for (int j = 0; j < 3; j++)        {
            cout << matriz1[i][j] + matriz2[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
} */

/* // Ejercicio 10: Matriz transpuesta
// Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta. La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.

// |1 2 3|       |1 4 7|
// |4 5 6|  -->  |2 5 8|
// |7 8 9|       |3 6 9|

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }

    cout << "\nMatriz Normal\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << numeros[i][j] << " ";
        }
        cout << "\n";
    }

    cout << "\nMatriz Transpuesta\n";
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << numeros[j][i] << " ";
        }
        cout << "\n";
    }

    getch();
    return 0;
} */

/* // Ejercicio 11: Mayor elemento de un array
//Desarrolle un programa que lea de la entrada est�ndar un vector de enteros y determine el mayor elemento del vector.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[100], n, mayor = 0;

    cout << "Digite el numero de elementos: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << i + 1 << ". Digite un numero: ";
        cin >> numeros[i]; // Guardamos los elementos en el arreglo

        if (numeros[i] > mayor){ // Determinamos el mayor elemento en cada
            mayor = numeros[i];  // iteracion del bucle
        }
    }

    cout << "\nEl mayor elemento del vector es: " << mayor << endl;

    getch();
    return 0;
} */

/* // Ejercicio 12: Determinar si un numero en un arreglo equivale a la suma de los demas
// Escribe un programa que defina un vector de n�meros y calcule si existe algun numero en el vector cuyo valor equivale a la suma del resto de n�meros del vector.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5] = {1,2,3,4,10}; //Definimos un arreglo
	int suma=0,mayor=0;
	
	for(int i=0;i<5;i++){
		suma += numeros[i];
		
		if(numeros[i]>mayor){ //Determinamos cual es el numero mayor, ya que
			mayor = numeros[i];//el unico numero que puede ser la suma de los
		}					  //demas es el numero mayor
	}
	
	if(mayor == suma-mayor){//comparamos si el numero mayor es igual a suma menos el numero mayor
		cout<<"El numero "<<mayor<<" es la suma de los demas";
	}
	else{
		cout<<"No existe ningun numero que sea la suma de los demas";
	}
	
	getch();
	return 0;
} */

/* // Ejercicio 13: Almacenar el contenido de 2 arrays en un solo array
// Realiza un programa que defina dos vectores de caracteres y despu�s almacene el contenido de ambos vectores en un nuevo vector, situando en primer lugar los elementos
// del primer vector seguido por los elementos del segundo vector. Muestre el contenido del nuevo vector en la salida estandar.

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    char letras1[] = {'a', 'b', 'c', 'd', 'e'};
    char letras2[] = {'f', 'g', 'h', 'i', 'j'};
    char letras3[10];

    // Copiando el contenido de letras1 hacia letras3
    for (int i = 0; i < 5; i++){
        letras3[i] = letras1[i];
    }

    // Copiando el contenido de letras2 hacia letras3
    for (int i = 5; i < 10; i++){
        letras3[i] = letras2[i - 5];
    }

    // Imprimiento el numero vector con todos los elementos
    for (int i = 0; i < 10; i++){
        cout << letras3[i] << endl;
    }

    getch();
    return 0;
} */

/* // Ejercicio 14: Matriz simetrica
// Desarrollar un programa que determine si una matriz es sim�trica o no. Una matriz es sim�trica si es cuadrada y si es igual a su matriz transpuesta.

// |8 1 3|        |8 1 3|
// |1 7 4|  -->   |1 7 4|
// |3 4 9|        |3 4 9|



#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas;
    char band = 'F';

    cout << "Digite el numero de filas: ";
    cin >> filas;
    cout << "Digite el numero de columnas: ";
    cin >> columnas;

    // Rellenando matriz
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++){
            cout << "Digite un numero [" << i << "][" << j << "]: ";
            cin >> numeros[i][j];
        }
    }

    // Comprobemos si es simetrica
    if (filas == columnas){
        for (int i = 0; i < filas; i++){
            for (int j = 0; j < columnas; j++){
                if (numeros[i][j] == numeros[j][i]){
                    band = 'V';
                }
            }
        }
    }

    if (band == 'V'){
        cout << "\nEs una matriz simetrica";
    }

    else{
        cout << "\nNo es una matriz simetrica";
    }

    getch();
    return 0;
} */

/* // Ejercicio 15: Multiplicar por 2 los elementos de un array
// Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo
// multiplicados por 2 y muestre el segundo arreglo.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5],numeros2[5];
	
	//Primero vamos a pedir los 5 numeros del primer arreglo
	for(int i=0;i<5;i++){
		cout<<i+1<<". Digite un numero: "; cin>>numeros[i];
	}
	
	//Ahora, vamos a multiplicar por 2 los elementos del primer arreglo
	for(int i=0;i<5;i++){
		numeros2[i] = numeros[i]*2;
	}
	
	cout<<"\nMostrando numeros multiplicados por 2:\n\n";
	
	//Luego mostramos el segundo arreglo
	for(int i=0;i<5;i++){
		cout<<numeros2[i]<<endl;
	}
	
	getch();
	return 0;
} */

/* // Ejercicio 16: Operaciones con matrices
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	short int fa, ca; // filas y columnas de a
	short int fb, cb; // filas y columnas de b
	short int i, j, k;
	short int op;

	cout << "Digite el numero de filas de A: ";
	cin >> fa;
	cout << "Digite el numero de columnas de A: ";
	cin >> ca;
	cout << "Digite el numero de filas de B: ";
	cin >> fb;
	cout << "Digite el numero de columnas de B: ";
	cin >> cb;

	int A[fa][ca], B[fb][cb], res[fa][cb];
	if (ca == fb){
		// Ingreso de valores de la matriz A
		cout << "Introduzca los valores de A: " << endl;
		for (i = 1; i < fa; i++){
			for (j = 0; j < ca; j++){
				cout << "A [" << i << "][" << j << "]: ";
				cin >> A[i][j];
			}
		}

		// Ingreso de valores de la matriz B
		cout << "Introduzca los valores de B: " << endl;
		for (i = 1; i < fb; i++){
			for (j = 0; j < cb; j++){
				cout << "B [" << i << "][" << j << "]: ";
				cin >> B[i][j];
			}
		}

		// Seleccion de la operacion que desea realizar
		cout << "Seleccione la operacion que desea realizar (1-suma, 2-resta, 3-multiplicacion)" << endl;
		cin >> op;
		switch (op){
		case 1:
			// Multiplicacion de matriz

			for (i = 1; i <= fa; i++){
				for (j = 1; j <= cb; j++){
					res[i][j] = 0;
					for (k = 1; k <= ca; k++){
						res[i][j] = res[i][j] + (A[i][k] * B[k][j]);
					}
				}
			}
			break;

		case 2:
			// Resta de matriz
			for (i = 1; i <= fa; i++){
				for (j = 1; j <= cb; j++){
					res[i][j] += A[i][k] - B[k][j];
				}
			}
			break;

		case 3:
			// Suma de matriz
			for (i = 1; i <= fa; i++){
				for (j = 1; j < cb; j++){
					res[i][j] = A[i][k] + B[k][j];
				}
			}
			break;

			default:
			cout << "Indefinido";
			break;
		}

		cout << "El resultado de la operacion es:" << endl;
		// Despilegue de el resultado de la matriz C
		for (i = 1; i <= fa; i++){
			for (j = 1; j <= cb; j++){
				cout << res[i][j] << "  ";
			}
			cout << "\n";
		}
	}
	else
		cout << "La operacion no se puede resolver" << endl;

	getch();
	return 0;
} */


//         $$$$$$$$$$$$$$$ Pointers $$$$$$$$$$$$$$$



//    $$$$$$$$$$$$$$$ Metodos de busqueda $$$$$$$$$$$$$$$


/* //Busqueda Secuencial
//a[5] = {3,4,2,1,5}; dato = 4;

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int a[] = {3,4,2,1,5}, dato;

	char band = 'F';
	
	cout<<"Dijite el numero o la letra que quiere buscar en el arreglo: ";
	cin>>dato;

	//Busqueda Secuencial
	int i=0;
	while((band == 'F') && (i<5)){
		if(a[i] == dato)
		{
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"El numero a buscar no existe en el arreglo"<<endl;
	}
	else if(band == 'V'){
		cout<<"El numero a sido encontrado en la posicion: "<<"["<<i-1<<"]"<<endl;
	}
	
	
	getch();
	return 0;
} */

/* //Busqueda Binaria

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5,6,7,8,9,10}; 
	int half,dato;
	char band='F';

	cout << "Dijite el numero o la letra que quiere buscar en el arreglo: ";
	cin >> dato; //dato=8

	//Algoritmo de la Busqueda Binaria (Recordar que el arreglo siempre debe estar ordenado de forma ascendente)

	int buttom=0; //Posicion 0 del arreglo
	int top=10;   //Posicion 10 del arreglo
	int i=0; //Acumulador
	while((buttom<=top)&&(i<10)){//Verificamos si el valor ingresado esta dentro de top y bottom, y si i es menor a la cantidad de valores en el arreglo.
								 //{1,2,3,4,5,6,7,8,9,10}
		half = (buttom+top)/2;   //           b   *    t
		if(numeros[half] == dato){//Verificamos si, al momento de dividir el arreglo en 2, el valor central sea el indicado para no tener que hacer mas busquedas
			band='V'; //Si cumple, entonces la bandera cambia a verdadero y se imprime el mensaje de abajo
			break; //Como ya se encontro el valor, es necesario poner break para que no se pierda tiempo buscando en las demas posicones, puesto que ya se encontro al momento de dividir el arreglo.
		}
		                         // Tomamos como ejemplo que queremos hallar 8.
		if(numeros[half]>dato){  //Verificamos si el valor que se encuentra en la mitad del arreglo, es mayor al numero que queremos encontrar. 
		
			top = half;
			half = (buttom+top)/2;
		}
		
		if(numeros[half]<dato){ //Verificamos si el valor que se encuentra en la mitad del arreglo, es menor al numero que queremos encontrar.
		
			buttom = half;
			half = (buttom+top)/2;
		}
		i++;
	}

	if(band == 'V'){
		cout<<"El numero se encontro en la pos: "<<half<<endl;
	}
	else{
		cout<<"El numero NO se encontro";
	}
	
	getch();
	return 0;
} */


//         $$$$$$$$$$$$$$$ Metodos de ordenamiento $$$$$$$$$$$$$$$



/* //Metodo Burbuja
#include<iostream>
#include<conio.h>

using namespace std;

int main(){        //1,2,3,4,5
    int array[5] = {2,3,1,5,4};
    int i,j,aux;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(array[j] > array[j+1])
            {
                aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

    cout<<"Numeros de forma Ascendente: ";
    for(i=0;i<5;i++){
        cout<<array[i]<<" ";
    }

    cout<<"\nNumeros de forma Descendente: ";
    for(i=4;i>=0;i--){
        cout<<array[i]<<" ";
    }

    getch();
    return 0;
} */

/* // Ordenamiento por Insercion
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int i, pos, aux;
    int num[] = {9, 7, 8, 5, 6};

    for (i = 0; i < 5; i++){
        pos = i;      // i = 1
        aux = num[i]; // num[1] = 7

        while (pos > 0 && num[pos - 1] > aux){ // num[pos-1] > aux    =>    4 > 2     entra el bucle while
            num[pos] = num[pos - 1]; // Igualamos el valor anterior con el actual puesto que es mayor. Qudaria: {9,9,8,5,6}
            pos--;                   // Disminuimos la posicion, en este caso a cero, para ver si en ese numero (9), hay otro numero mas grande que el del lado
        }                            // izquierdo. Como sabemos que esta en la posicion inicial (0), entonces ya no se ejecuta el while y pasa a la linea 22.

        num[pos] = aux; // En esta linea se actualizan los valores puesto que aun tenemos repetido el valor de 9. Como la variable aux (linea 14) tiene asignado
    }                   // el valor de 7 cuando i=1, y como sabemos que se redujo el valor de "pos" hasta 0, entonces ahora tendremos  {7,9,8,5,6}

    cout << "\nMatriz actual: 9,7,8,5,6";
    cout << "\nOrden Ascendente: ";
    for (i = 0; i < 5; i++){
        cout << num[i] << " ";
    }

    cout << "\nOrden Descente: ";
    for (i = 4; i >= 0; i--){
        cout << num[i] << " ";
    }
    cout << "\n";

    getch();
    return 0;
} */

/* // Ordenamiento por Seleccion

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num[] = {4, 3, 1, 5, 2};
    int i, j, aux, min;

    // Algoritmo del Ordenamiento por Seleccion
    for (i = 0; i < 5; i++){// Tomamos de ejemplo que estamos en i=0
        min = i;                    // Asignamos el valor minimo del arreglo a la variable min. En este caso, es 4.
        for (j = i + 1; j < 5; j++){// Se coloca j=i+1 porque iniciamos en la segunda posicion del arrglo. Ya que se asume que el primer valor es el menor.
            if (num[j] < num[min]){ // Verificamos si el valor en la posicion 1 (que es 3) es menor a la posicion 0 (que es 4).
                min = j; // Si cumple el con el condicional, entonces min ahora vale j+1, o sea, 3.
            }
        } // Realizamos la iteracion hasta llegar a j=2+1 (posicion 3, que tiene el valor de 5). Al llegar aqui, min esta en la posicion 2 (con valor de 1).
          // Como sabemos 1 es el valor mas chico, entonces al iterar el segundo for, ya no entra en el condicional porque ni 5 ni 2 son menores a 1.

        // Como estamos en la primera iteracion del primer bucle for, tenemos que i=0. Entonces, el valor de num[i], es 4 porque aun seguimos en la primera
        // iteracion. Y ese valor lo guardamos en la variable aux.
        // Despues, en la siguiente linea, el valor de num[min] (num[2]), que pertenece a 1, lo almacenamos en la variable num[i] (num[0]), porque es el valor que
        // vamos a mandar al inicio. En este caso, el numero uno.
        // Finalmente, en la ultima linea, el valor que tiene aux, que es el de num[0] o el 4, lo vamos a mandar a la posicion en la que se encuentra el 1, que en
        // este caso, es el de num[min] (num[2]). Y entonces nos quedara: {1,2,4,5,2}
        aux = num[i];
        num[i] = num[min];
        num[min] = aux;
    }

    cout << "Orden Ascendente: ";
    for (i = 0; i < 5; i++){
        cout << num[i] << " ";
    }

    cout << "\nOrden Descendente: ";
    for (i = 4; i >= 0; i--){
        cout << num[i] << " ";
    }

    getch();
    return 0;
} */

/* // Ordenamiento por mezclas - MergeSort
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> // new y delete
using namespace std;

void MergeSort(int[], int, int);
void Mezcla(int[], int, int, int);

int main(){
    int arreglo[] = {5, 7, 87, 1, 3, 9, 14, 22}; // Definimos el arreglo de 6 espacios (0 a 5)

    MergeSort(arreglo, 0, 7); // Le mandamos a la funcion el arreglo con los valores y los valores inicial y final del arreglo. Es decir, 0 y 5.

    for (int i = 0; i < 8; i++){
        cout << arreglo[i] << endl;
    }

    getch();
    return 0;
}

void MergeSort(int a[], int primero, int ultimo){// primero = 0, ultimo = 5
    int central;
    if (primero < ultimo){
        central = (primero + ultimo) / 2;    // Calculamos el valor central de la lista al sumar el minimo mas el maximo y dividido entre 2. Recordar que el resultado se debe redondear al valor entero mas izquierdo posible. (5+0)/2 = 2.5 = 2.

        MergeSort(a, primero, central);      // Ordenamos la sublista izquierda.
        MergeSort(a, central + 1, ultimo);   // Ordenamos la sublista derecha
        Mezcla(a, primero, central, ultimo); // Mezclar los elementos ordenados
    }
}

void Mezcla(int a[], int izquierda, int medio, int derecha){
    int *aux;
    int i, k, z;                            // "i" pertenece al indice de la sublista izquierda. "k" pertenece al indice de la sublista derecha. "z" pertenece al indice de la sublista auxiliar, que permitira desplazarce de izquierda a derecha para ir llenando de valores el arreglo.
    aux = new int[derecha - izquierda + 1]; // Representa el limite de valores que tendra la variable auxiliar. "derecha-izquierda + 1" es la cantidad de elementos que vamos a tener en nuestro arreglo aux.
    i = z = izquierda;                      // puesto que "i" (indice de la sublista izquierda) y "z" (indice de la sublista auxiliar) son los primeros, se inicializaran con el valor que tenga "izquierda". O sea, cero.
    k = medio + 1;                          // "k" inicializa en la mitad del arreglo porque es la segunda mitad (del lado derecho) del arreglo que se dividio.

    // Ordenamos los elementos en el arrelgo auxiliar
    while (i <= medio && k <= derecha){ //"medio" es el ultimo valor de la sublista izquierda, que va desde "izqueirda hasta "medio. Despues, "derecha" es el ultimo valor de la sublista derecha, que va desde "medio+1" hasta "derecha".
        if (a[i] <= a[k]){ // Verificamos si el valor inicial de la sublista izquierda es menor al valor inicial de la sublista derecha
            aux[z++] = a[i++]; // Si cumple, entonces el valor inicial de la variable auxiliar toma el valor inicial de la sublista izquierda.
                               // z++;
            // i++;
        }

        else{
            aux[z++] = a[k++]; // Si no cumple, entonces el valor inicial de la variable auxiliar toma el valor inicial de la sublista derecha.
                               // z++;
            // k++;
        }
    }

    // Ahora, puesto que una de las dos listas va a terminarse primero que la otra, se deberan copiar los valores restantes de esa subliste pero utilizando otro ciclo while.
    while (i <= medio){// Este ciclo indica que primero se lleno la lista es la sublista derecha. Es por eso que siguen quedando valores restantes en la sublista izquierda y se deberan agregar a la lista auxiliar.
        aux[z] = a[i];
        z++;
        i++;
    }

    while (k <= derecha){ // Este ciclo indica que primero se lleno la lista es la sublista izquierda. Es por eso que siguen quedando valores restantes en la sublista derecha y se deberan agregar a la lista auxiliar.
        aux[z] = a[k];
        z++;
        k++;
    }

    // Copiamos ahora los elementos del arreglo auxiliar hacia el arreglo a[].
    for (int i = izquierda; i <= derecha; i++)    {
        a[i] = aux[i];
    }

    delete aux;
} */

/* // Ordenamiento por mezclas - QuickSort
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

void quickSort(float[], int, int);
void intercambio(float &, float &);

int main(){
    float array[] = {4, 7, 1, 8, 2, 10, 5, 9, 3};

    quickSort(array, 0, 8);

    cout << "Arreglo Ordenado - Forma Ascendente" << endl;
    for (int i = 0; i < 9; i++){
        cout << array[i] << "|";
    }

    cout << "\n\nArreglo Ordenado - Forma Descendente" << endl;
    for (int i = 8; i >= 0; i--){
        cout << array[i] << "|";
    }

    getch();
    system("cls");
    return 0;
}
                                                    //        i           j                      i     j                        i  j                           j  i
void quickSort(float a[], int primero, int ultimo){ // n=9   {4, 7, 1, 8, 2, 10, 5, 9, 3},   {2, 7, 1, 8, 4, 10, 5, 9, 3},  {2, 7, 1, 8, 4, 10, 5, 9, 3},  {2, 1, 7, 8, 4, 10, 5, 9, 3},   {2, 1} {7, 8, 4, 10, 5, 9, 3}
    int i, j;
    int central;  // Pertenece a la posicion intermedia del arreglo.
    float pivote; // Pertenece al valor que hay en la posicion de la variable central

    central = (primero + ultimo) / 2; // (0 + 8)/2 = 4    Posicion
    pivote = a[central];              // a[4]      = 2    Valor dentro de la posicion
    i = primero;                      // Almacenamos el valor de primero (0) en i.
    j = ultimo;                       // Almacenamos el valor de ultimo  (8) en j.

    do{
        while (a[i] < pivote)
            i++; // Este primer while va a iterar hasta que uno de los valores a la izquierda de 2, sea mayor a este numero. Como en este caso, el primer numero que pertenece a 4, es mayor a 2, entonces el cicli while no se ejecuta y "i" se mantiene en esa posicion.
        while (a[j] > pivote)
            j--; // Este segundo while va a iterar hasta que uno de los valores a la derecha de 2, sea menor a este numero. Aqui se puede observar que todos los valores de "j" son mayores a 2, por lo que si entrara al ciclo while e iterara hasta que llegue al valor central.
        if (i <= j){
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
    } while (i <= j);

    if (primero < j){
        quickSort(a, primero, j);
    }

    if (i < ultimo){
        quickSort(a, i, ultimo);
    }
}

void intercambio(float &x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
} */

/* // Ordenamiento por mezclas - Shell
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
using namespace std;

void ordenacionShell(float a[], int);
void intercambio(float &, float &);

int main(){
    float arreglo[] = {4, 6, 1, 9, 5, 10, 2, 11, 19, 7}; // n = 10
    cout << "Arreglo original" << endl;
    for (int i = 0; i < 10; i++){
        cout << arreglo[i] << "|";
    }

    ordenacionShell(arreglo, 10);

    cout << "\n\nArreglo ordenado  - Forma ascendente" << endl;
    for (int i = 0; i < 10; i++){
        cout << arreglo[i] << "|";
    }

    cout << "\n\nArreglo ordenado  - Forma descendente" << endl;
    for (int i = 9; i >= 0; i--){
        cout << arreglo[i] << "|";
    }

    getch();
    system("cls");
    return 0;
}

//   j               k
void ordenacionShell(float a[], int n){//  {4, 6, 1, 9, 5, 10, 2, 11, 19, 7}
                                       //      j               k
    int salto, i, j, k;                // "j" representa el valor del lado izquierdo del arreglo y "k" el valor del lado derecho

    salto = n / 2; // salto = 10/2 = 5        salto = 5/2 = 2.5 = 2          salto = 2/2 = 1         salto = 1/2 = 0.5 = 0
    while (salto > 0){              //      5       10
        for (i = salto; i < n; i++){// La primer midad del arreglo es de la posicion 0 a 4, y la segunda mitad es de 5 a 9.
                                    //     5 -   5  =  0
            j = i - salto;          // Inicia en la posicon 0 del arreglo porque salto=5 y i=5.
            while (j >= 0){
                k = j + salto;    // Este valor se usa para dividir el arreglo y hacer la comparacion con el otro extremo. En este caso, se comprueba en 0 y 5.
                if (a[j] <= a[k]){// Par de elementos en orden
                    j = -1; // Cuando se cumple la condicion, entonces no hay nada que hacer porque estan ordenados, y decimos que j=-1 para salgamos del bucle while,
                            // y el bucle for vuelva a iterar para avanzar una posicion. La cual ahora sera j=6-5 = 1, Y k=1+5 = 6.
                }

                else{// Par de elementos en desordenados
                    intercambio(a[j], a[k]); // Realizamos el cambio del valor ubicado en la posicion k, con la posicion j. Cuando se realice la segunda
                                             // iteracion, con i=6, j=1 y k=6, sabremos que 6 no es menor a 2, por lo que se realiza un intercambio de posiciones.
                                             // Despues del intercambio tendremos {4, 2, 1, 9, 5, 10, 6, 11, 19, 7}.
                                             //                -4  -3  -2  -1   0  1  2  3  4   5  6  7   8   9  10 

                    j = j - salto; //En esta linea se dice que j=1-5 = -4. Lo que quiere decir que al momento de volver a entrar al ciclo while para
                                   //verificar si el valor en posicion de j (-4) es menor al valor en posicion de k (1). Al iterar en el ciclo while, sabemos
                                   //que al no cumplir con la condicion de j>=0, entonces salimos del while e iteramos en for.
                }
            }
        }
        salto = salto / 2; // Cuando hayamos recorrido todo el arreglo y ya no haya nada por modificar, dividimos salto/2 para volver a comprobar si el valor de un lado con
    }                      // el otro es mayor o menor. Se repite esto hasta que salto sea igual a cero.
} 


void intercambio(float &x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
}*/



//         $$$$$$$$$$$$$$$ Data structures $$$$$$$$$$$$$$$



/* // Ejercicio teorico: Pilas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

Nodo *nuevo_nodo;
Nodo *pila = NULL;
int num; // int num = int n1,n2;

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
    cout << "Ingresa un numero: ";
    cin >> num;

    agregarPila(pila, num);

    cout << "\nIngresa un numero: ";
    cin >> num;

    agregarPila(pila, num);

    cout << "\nScando los elementos de la pila: ";
    while (pila != NULL){
        sacarPila(pila, num);
        if (pila != NULL){
            cout << num << " , ";
        }

        else{
            cout << num << ".";
        }
    }

    system("pause");
    return 0;
}

void agregarPila(Nodo *&pila, int n){
    nuevo_nodo = new Nodo();      // 1. Crear el espacio en memoria para almacenar un nodo.
    nuevo_nodo->dato = n;         // 2. cargar el valor dentro de la variable nodo(dato)
    nuevo_nodo->siguiente = pila; // 3. cargar el puntero pila dentro del nodo(*siguiente), y recordar que pila=NULL;
    pila = nuevo_nodo;            // 4. asignar el nuevo nodo a pila
    cout << "\nElemento " << n << " se agrego a PILA CORRECTAMENTE." << endl;
}

void sacarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
} */

/* // Ejercicio teorico: Listas
// 1.- Crear un nuevo nodo
// 2.- Asignar a nuevo_nodo -> dato el elemento que queremos incluir en la lista
// 3.- Crear dos nodos axuiliares y asginar lista al primero de ellos
// 4. Insertar elementos a la lista (de forma ordenada y ascendente)

//aux1 nos va ayudar a referenciar la �ltima posici�n de la fila

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <ios>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

void menu();
void insertarLista(Nodo *&, int );
void mostrarLista(Nodo *);
void buscarLista(Nodo *, int );
void eliminarNodo(Nodo *&,int );
void eliminarLista(Nodo *&,int &);

Nodo *lista = NULL;
int opcion, dato;

int main(){   
    menu();
    getch();
    return 0;
}

void menu(){
	
	do{
		cout<<"\t.:MENU:.\n"; 
		cout<<"1. Instertar elementos a la lista\n"; 
		cout<<"2. Mostrar los elementos de la lista\n";
		cout<<"3. Buscar un elemento en lista\n";
		cout<<"4. Eliminar un elemento de la lista\n";
		cout<<"5. Dejar vacia la lista\n";
		cout<<"6. Salir\n";
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion)
		{
			case 1: cout<<"\nDigite un numero: ";
			        cin>>dato;
			        insertarLista(lista,dato);
			        cout<<"\n";
			        system("pause");
			        break;
			        
			case 2: mostrarLista(lista);
			        cout<<"\n";
			        system("pause");
			        break;	
			case 3: cout<<"\nDigute un numero a buscar: ";
			        cin>>dato;
					buscarLista(lista,dato);
					system("pause");	
					break;
			case 4: cout<<"\nDigite el elemento que desea eliminar: ";
			   	    cin>>dato;
					eliminarNodo(lista,dato);
					cout<<"\n";
				    system("pause"); 
			case 5: cout<<"LISTA: BORRADA"; 
			        eliminarLista(lista,dato);
					cout<<"\n";
				    system("pause"); 
		}
		system("cls");
	}while(opcion != 6);
}

void insertarLista(Nodo *&lista, int n){

    Nodo* nuevo_nodo = new Nodo(); //new Nodo() = Almacenar espacio de memoria

    nuevo_nodo->dato = n;

    Nodo* aux1 = lista;
    Nodo* aux2;

    //Tener siempre ordenada nuestra lista
    while ((aux1 != NULL) && (aux1->dato < n)){
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1){
        lista = nuevo_nodo;
    }
    else{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;

    cout << "Elemento " << n << " insertado a la lista correctamente" << endl << endl ;

}

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo ();
	actual = lista;
	cout<<setw(20)<<".:LISTA:."<<endl;
	while (actual != NULL){
		cout<<"->"<<actual->dato <<endl;
		actual = actual->siguiente;
	}
}

void buscarLista(Nodo *lista, int n){
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while ((actual != NULL) && (actual->dato<= n)){
		if(actual->dato == n){
			band = true;
		}
		actual = actual ->siguiente;
	}
	
	if(band == true){
		cout<<"Elemento"<<n<<"Si a sido encontrado en la lista\n";
	}
	else{
		cout<<"Elemento"<<n<<"No a sido encontrado en la lista\n";
	}
}

void eliminarNodo(Nodo *&lista,int n){
	if (lista != NULL){
		Nodo *aux_borrar;
	    Nodo *anterior = NULL;
		
		aux_borrar = lista;

	    //Recorrer la lista
    	while(aux_borrar!= NULL && aux_borrar->dato != n){
	    	anterior = aux_borrar;
 	    	aux_borrar = aux_borrar->siguiente;
    	}

    	//El elemento no ha sido encontrado
    	if(aux_borrar == NULL){
	    	cout<<"\nNo se encontro el dato\n";
     	}
     	else if(anterior == lista){ //El primer elemento es el que se va a eliminar
     		lista=lista->siguiente;
    		delete aux_borrar;
    	}
     	else{ //El elemento esta en la lista pero no es el primero
    		anterior->siguiente = aux_borrar->siguiente;
	    	delete aux_borrar;
     	}
    }
}
	
void eliminarLista(Nodo *&lista, int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
	
	while(lista != NULL){
		cout<<dato<<"->";
	}	
} */

/* // Ejercicio teorico: Colas
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

Nodo *frente = NULL;
Nodo *fin = NULL;
int dato; // dato es lo mismo que n

void insertarCola(Nodo *&frente, Nodo *&fin, int n);
bool cola_vacia(Nodo *frente);
void siprimirCola(Nodo *&frente, Nodo *&fin, int &n);

int main(){
    cout << "Digite un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato);

    cout << "Digite un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato);

    cout << "Digite un numero: ";
    cin >> dato;
    insertarCola(frente, fin, dato);

    // Eliminar los elementos de la cola
    cout << "\nQuitando los nodos de la cola:";
    while (frente != NULL){
        siprimirCola(frente, fin, dato);
        if (frente != NULL){
            cout << dato << " , ";
        }
        else{
            cout << dato << " . ";
        }
    }

    getch();
    return 0;
}

// Funcion para insertar elementos en una cola
void insertarCola(Nodo *&frente, Nodo *&fin, int n){ // dato es lo mismo que n
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
    cout << "Elemento " << n << " insertado a cola correctamente\n";
}

// Funcion para determinar si la cola esta vacia o no
bool cola_vacia(Nodo *frente){
    // return (frente == NULL)? true : false; Esta linea es igual al if que se encuentra abajo y se puede utilizar para ahorrar lineas
    if (frente == NULL){
        return true;
    }
    else{
        return false;
    }
}


bool cola_vacia(Nodo *frente)
{
    return (frente == NULL)? true : false;
}


// Funcion para eliminar elementos de la cola
void siprimirCola(Nodo *&frente, Nodo *&fin, int &n){
    n = frente->dato;
    Nodo *aux = frente;
    if (frente == fin){
        frente = NULL;
        fin = NULL;
    }
    else{
        frente = frente->siguiente;
    }
    delete aux;
} */

/* Ejercicio teorico: Arboles
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo{
    int dato; // "dato" y "n" son la misma variable
    nodo *der;
    nodo *izq;
    nodo *padre;//Sirve para saber cual es el nodo superior de un nodo seleccionado. Cada nodo insertado y creado, tendra un padre
};
nodo *arbol = NULL;//arbol seria el valor de la raiz o primer valor en ser creado

//Prototipo de funciones
void Menu();
nodo *crearNodo(int, nodo *);
void insertar(nodo *&, int, nodo *);
void mostrarArbol(nodo *, int);
bool busqueda(nodo *, int );
void preOrden (nodo *);
void inOrden (nodo *);
void postOrden (nodo *);
void eliminar(nodo *, int);
void eliminarNodo (nodo *);
nodo *minimo(nodo *);
void reemplazar(nodo *, nodo *);
void destruirNodo(nodo *);

int main(){
    Menu();
    getch();
    return 0;
}

void Menu(){
    int dato, opcion, cont=0;//contador se usa para separar un nodo de otro y se inicializa en 0
    do{
        cout<<"1. Agregar elementos al arbol. "<<endl;
        cout<<"2. Mostrar el arbol completo. "<<endl;
        cout<<"3. Seleccion de busqueda."<<endl;
        cout<<"4. Recorrer el arbol en pre orden."<<endl;
        cout<<"5. Recorrer el arbol en in orden."<<endl;
        cout<<"6. Recorrer el arbol en post orden."<<endl;
        cout<<"7. Eliminar un nodo."<<endl;
        cout<<"8. Salir."<<endl;
        cout<<"\nOpcion: ";
        cin>>opcion;

        switch(opcion){
            case 1:	cout<<"Numero a agregar: ";
                    cin>>dato;
                    insertar(arbol, dato, NULL); //SE COLOCA NULL PORQUE SE DEBE REFERENCIAR EL PADRE DEL NUEVO ELEMENTO, PERO COMO NO SE CONOCE, SE DEBE COLOCAR NULL.
                    break;

            case 2: cout<<"\nMostrando el arbol completo: \n\n";
            mostrarArbol(arbol, cont);
            cout<<"\n";
            system("pause");
            break;

            case 3: cout<<"\nDigite el elemento a buscar: ";
            cin>>dato;
            if(busqueda(arbol, dato) == true){
                cout<<"\nElemento "<<dato<<" a sido encontrado en el arbol ";
            }
            else{
                cout<<"\nElemento no encontrado";
                }
                cout<<"\n";
                system("pause");
                break;

            case 4: cout<<"Recorrido en pre orden: ";
            preOrden(arbol);
            cout<<"\n\n";
            system("pause");
            break;

            case 5: cout<<"Recorrido en in orden: ";
            inOrden(arbol);
            cout<<"\n\n";
            system("pause");
            break;

            case 6: cout<<"Recorrido en post orden: ";
            postOrden(arbol);
            cout<<"\n\n";
            system("pause");
            break;

            case 7: cout<<"Digite el mumero a eliminar: ";
            cin>>dato;
            eliminar(arbol, dato);
            cout<<"\n";
            system("pause");
            break;
        }
        system("cls");
    }while(opcion != 8);
}

// Creamos nuestro primer nodo (raiz), el cual utilizaremos una funcion de tipo nodo, la cual posee los 3 campos que debe tener un nodo. Ahora, la variable sera de tipo puntero porque se pasa una copia del valor del par�metro desde la funci�n hacia otro nodo.Al ser una copia, los cambios realizados directamente en la funci�n sobre el valor del par�metro no ser�n reflejados al terminar la ejecuci�n de la funci�n.
nodo *crearNodo(int n, nodo *padre){//le pasamos el parametro del cual queremos crear el nodo
    nodo *nuevoNodo = new nodo(); //crear espacio en memoria para el primer nodo (hoja), el cual posee los cuatro campos siguientes.

    nuevoNodo->dato = n;//Al campo que posee el dato en el nodo, le asignamos n, que es el elemento del cual queremos crear el nodo
    nuevoNodo->der = NULL;//El nodo derecho apunta a NULL porque cuando es creado el nodo, no posee nodos hijos
    nuevoNodo->izq = NULL;//El nodo izquierdo apunta a NULL porque cuando es creado el nodo, no posee nodos hijos
    nuevoNodo->padre = padre;//

    return nuevoNodo;//Debemos retornar le nuevo nodo que acabamos de crear
}

//funcion para instertar elementos en el arbol
void insertar(nodo *&arbol, int n, nodo *padre){ //Desde la funcion main, le mandamos lo que "arbol", que se definicio al principio que es igual a NULL, y "dato" que tiene un valor que el usuario asigno al inicio del programa. En este punto aun no sabemos cual es el padre y es por eso que anteriormente solo se igualo a si mismo.
    if(arbol == NULL){                           //si el arbol esta vacio, entonces
        nodo *nuevoNodo = crearNodo(n, padre);   //se crea un nuevo nodo, llamando a la funcion "crearNodo", a la cual le mandamos "n", el valor inicial del arbol. Y de esa manera se crea la raiz al nuevo nodo.
        arbol = nuevoNodo;                       //Una vez que ya tenemos el nuevo nodo, no podemos dejarlo asi nada mas sin ninguna ubicacion. Por eso debemos almacenarlo en lo que vendria siendo, la raiz del arbol o el primer nodo
    }

    else{ //sino, si tiene un nodo o mas, entonces
        int ValorDeRaiz = arbol->dato;//El valor de la raiz es igual a lo que apunta arbol. Es decir, el primer valor (dato) que se le asigno cuando se creo la raiz
        if(n < ValorDeRaiz){//Cuando el Valor es menor va al lado izquierdo. Recordar que "n" es el valor nuevo que queremos insertar
            insertar(arbol->izq, n, arbol);//Mandamos nuevamente a llamar a la funcion "incertar", pero ahora le mandamos el arbol por el lado izquierdo y le incertamos el nuevo dato n para volver a iterar y hacer la comparacion nuevamente. En este punto, se agrega el valor al lado izquierdo. Posteriormente, le mandamos "arbol" a la funcion "insertar" (la cual tiene como referencia la variable "padre") puesto que el nodo despues de la raiz, asi mismo sera un arbol que posea nodos hijos
        }

        else{
            insertar(arbol->der, n, arbol);//Mandamos nuevamente a llamar a la funcion "incertar", pero ahora le mandamos el arbol por el lado derecho y le incertamos el nuevo dato n para volver a iterar y hacer la comparacion nuevamente. En este punto, se agrega el valor al lado derecho. Posteriormente, le mandamos "arbol" a la funcion "insertar" (la cual tiene como referencia la variable "padre") puesto que el nodo despues de la raiz, asi mismo sera un arbol que posea nodos hijos
        }
    }
}

void mostrarArbol(nodo *arbol, int cont){
    if(arbol == NULL){//Si arbol esta vacio, entonces
        return;//retorna a la funcion porque no hay nada que mostrar
    }
    else
    {
        // Imprimimos primero por el lado derecho, llamando a la funcion nuevamente, pero mandandole el arbol que apunte a la derecha, y el contador que esta inicializado en 0.
        // Dentro del la funcion mostrarArbol, se debe coloca cont+1 porque al momento de imprimir (que por cierto, siempre se inicia desde el lado mas a la izquierda hacia la
        // derecha), debera aparecer la separacion que existe entre el nodo raiz y el nodo izquierdo o derecho. Si no le colocamos el +1, entonceslos numeros apareceran apilados en
        // el inicio de toda la linea de comandos, es decir, sin ninguna separecion.Ahora, dentro del ciclo for se coloca unicamente cont porque los numeros que apareceran en la
        // ventana cmd, iniciaran desde el lado izquierdo hacia la derecha. Si se llega a colocar +1 uno, entonces apareceran todos los numeros pero con una separacion.
        // Y al momento de que cont vaya aumentado de uno en uno, quiere decir que, por ejemplo, el primer nodo dela izquierda tendra un espacio de separacion. Posteriormente, el
        // segundo nodo tendra dos espacios de separacion y asisucesivamente.
        mostrarArbol(arbol->der, cont+1);
        for(int i=0; i<cont; i++){
            cout<<"   ";//Separacion que habra de un nodo a otro y que conforme vaya aumentando cont, entonces las separaciones tambien aumentaran y de esa manera se visualizara de mejor manera el arbol
        }
        cout<<arbol->dato<<endl;//Imprimimos el dato que estara almecenado en el arbol.
        mostrarArbol(arbol->izq, cont+1);//Una vez que se imprimio todos los valores por el lado derecho, se vuelve a llamar a la funcion pero esta vez le mandamos arbol por el lado izquierdo. El contador en este caso seria 0 otra vez porque ahora estamos en el lado izquierdo..
    }
}

bool busqueda(nodo *arbol, int n){
    if (arbol == NULL){
        return false;
    }
    else if (arbol->dato == n){ //Si el valor que queremos buscar es el mismo que el de la raiz,
        return true;//entonces unicametne retorna verdadero y no busca mas.
    }
    else if(n < arbol->dato){ //Si el valor es menor al valor de la raiz, entonces ese valor estara del lado izquierdo, por lo cual debemos verifcar todo el subconjunto izquierdo hasta dar con el numero.
        return busqueda(arbol->izq,n); // busca el elemento (n) del nodo (arbol) por el lado izquierdo. Aqui no es necesario poner "return true" porque al momento de llamar a la funcion, unicmanete verificaria si el valor introducido, aparece en el lado izquierdo (ver el proceso de la linea 179), lo cual ya incluye ese return true.
    }
    else{
        return busqueda(arbol->der,n); // busca el elemento (n) del nodo (arbol) por el lado derecho. Aqui no es necesario poner "return true" porque al momento de llamar a la funcion, unicmanete verificaria si el valor introducido, aparece en el lado derecho (ver el proceso de la linea 179), lo cual ya incluye ese return true.
    }
}

void preOrden (nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        cout<<arbol->dato<<" - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void inOrden (nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}

void postOrden (nodo *arbol){
    if(arbol == NULL){
        return;
    }
    else{
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout<<arbol->dato<<" - ";
    }
}

//eliminar un nodo del arbol
void eliminar(nodo *arbol, int n){
    if(arbol == NULL){
        return;
    }

    else if (n < arbol->dato){ // si el valor es menor

        eliminar (arbol->izq, n); // entonces buscar por la izq
    }

    else if (n > arbol->dato){    // si el valor es mayor
        eliminar (arbol->der, n); // entonces buscar por la der
    }

    else{ //cuando el elemento a buscar, no es menor ni mayor ni el arbol esta vacio, entonces es porque ya se encontro el elemento,
        eliminarNodo(arbol); //por lo cual procedemos a mandar a llamar a una funcion que se encargue de eliminar el nodo. Para ello debemos mandarle el arbol el cual posee el nodo en la posicion en la que vamos.
    }
}


void eliminarNodo (nodo *nodoEliminar){//creamos otra varaible de tipo nodo y que sea puntero, a la cual le mandamos el arbol con el nodo que queremos eliminar
    if (nodoEliminar->izq && nodoEliminar->der){ //verificar que el arbol tenga tanto hijo izquierdo como derecho
        nodo *menor;//Creamos una varaible de tipo nodo y puntero, que servira para asignarle el nodo mas pequeno que se encuentra en el nodo derecho que buscaremos en seguida.
        menor = minimo(nodoEliminar->der);  // se manda a llamar a la funcion minimo, buscando el nodo mas a la izq pero en el hijo que se encuentra del lado derecho
        nodoEliminar->dato = menor->dato;   // el nodoEliminar apunta al dato que queremos eliminar para de esa manera, sistituirlo  con el valor mas a la izq del hijo derecho. Es decir, en la linea anterior "menor" tiene como resultado el nodo mas a la izq del hijo derecho. Y en este caso, apunta al numero  que que es de tipo entero, o sea, el de la variable "dato
        eliminarNodo(menor);                // Se vuelve a llamar a la funcion para que elimine el valor que poseia "menor" antes de haber sido cambiado. O sea, menor ya posee un resultado, y al momento de llamar nuevamente a al funcion, estariamos mandando y asignandole
    }

    else if(nodoEliminar->izq){                      //Revisamos si el nodo tiene unicamente un solo nodo por al izquierda
        reemplazar (nodoEliminar, nodoEliminar->izq);//Mandamos a llamar a la funcion y le mandamos el nodo que queremos eliminar, asi como tambien su hijo izquierdo. Recordar que "nodoEliminar" ocupa lo que viene siendo el arbol y sus subconjuntos.
        destruirNodo(nodoEliminar);       //Mandamos a llamar a la funcion y le mandamos el nodo que queremos eliminar para que se encargue de eliminarlo por completo, utilizando "delete".
    }

    else if(nodoEliminar->der){//Revisamos si el nodo tiene unicamente un solo nodo por la derecha
        reemplazar(nodoEliminar, nodoEliminar->der);//Mandamos a llamar a la funcion y le mandamos el nodo que queremos eliminar, asi como tambien su hijo derecho. Recordar que "nodoEliminar" ocupa lo que viene siendo el arbol y sus subconjuntos.
        destruirNodo(nodoEliminar);//Mandamos a llamar a la funcion y le mandamos el nodo que queremos eliminar para que se encargue de eliminarlo por completo, utilizando "delete".
    }

    else{
        reemplazar(nodoEliminar, NULL);//Si no tiene ningun subconjunto, es decir, es un nodo hoja, entonces le mandamos el nodo que queremos eliminar y NULL, puesto que no apunta a nada
        destruirNodo(nodoEliminar);//Mandamos a llamar a la funcion y le mandamos el nodo que queremos eliminar para que se encargue de eliminarlo por completo, utilizando "delete".
    }
}

// Funcion para determinar el nodo mas izq posible. Es decir,el nodo tiene hijo izquierdo y derecho. Posteriormente, se ira buscando el por el lado derecho, llegando al nodo derecho, y finalmente, el nodo hijo que se encuentre a la izquierda, ese mismo sera el "mas izq posible"
nodo *minimo(nodo *arbol){
    if(arbol == NULL){
        return NULL;
    }

    else{
        if(arbol->izq){//si tiene hijo izquierdo,

            return minimo(arbol->izq);// entonces buscar la parte mas izq posible, llamando a la funcion nuevamente y que busque por el lado izquierdo
        }
        else{ //si no tiene

            return arbol; //retornamos el mismo nodo
        }
    }
}


void reemplazar(nodo *arbol, nodo *Actualizar){ //Le mandamos el arbol (el cual arriba es nodoEliminar) y el hijo que tiene (ya sea izquierdo o derecho), pero le ponemos "actualizar" para no confundirse con el nombre.
    if (arbol->padre){ //Verificar si el nodo que le mandamos tiene asi mismo un nodo padre.
        if (arbol->dato == arbol->padre->izq->dato){ //Si el valor que hay dentro del nodo que queremos eliminar, es igual al mismo arbol (nodo que queremos eliminar), pero que apunta al nodo padre, posteriormente al nodo hijo (o sea, arbol) y finalmente al dato que hay dentro de el, es exactamente el mismo, entonces...
            arbol->padre->izq = Actualizar;//Actualizar (o bien, el nodo por el lado izquierdo del arbol que queremos eliminar), tomara el lugar ahora del arbol eliminado. Por ejemplo, si tenemos el nodo padre que es 7 y el hijo izquierdo que es 5, entonces simplemente eliminamos el 7 (arbol), y ahora el 5 (hijo izquierdo) tomara su lugar. O sea, se convierte en arbol.
        }

        else if (arbol->dato == arbol->padre->der->dato){ //Si el valor que hay dentro del nodo que queremos eliminar, es igual al mismo arbol (nodo que queremos eliminar), pero que apunta al nodo padre, posteriormente al nodo hijo (o sea, arbol) y finalmente al dato que hay dentro de el, es exactamente el mismo, entonces...

            arbol->padre->der = Actualizar;//Actualizar (o bien, el nodo por el lado derecho del arbol que queremos eliminar), tomara el lugar ahora del arbol eliminado. Por ejemplo, si tenemos el nodo padre que es 7 y el hijo derecho que es 5, entonces simplemente eliminamos el 7 (arbol), y ahora el 5 (hijo derecho) tomara su lugar. O sea, se convierte en arbol.
        }
    }

    if (Actualizar){//Hasta aqui, el nodo que hijo que tomo el valor de su padre, no esta apuntando a nada (o sea, no apunta al padre del nodo que se elimino. Por lo cual si tenemos "Actualizar"...
        Actualizar->padre = arbol->padre;//procedemos a asignarle el nuevo padre. Es decir, arbol (nodo eliminado), que apunta a su padre, sera igual al nodo que esta en "Actualizar" y simplemente decimos que apunta a su nuevo padre
    }
}


//Funcion para destruir un nodo
void destruirNodo(nodo *NodoEliminado){//A esta funcion le mandamos el nodo que queremos eliminar (nodoEliminar) de manera definitiva. Y para no confundirnos, simplemente le cambiamos el nombre por NodoEliminado, el cual tiene exactamente lo mismo que nodoEliminar.

    //El nodo que mandamos a esta funcion, lo eliminamos haciendolo de tipo null primero y posteriormente con un delete.
    NodoEliminado->izq = NULL;
    NodoEliminado->der = NULL;

    delete NodoEliminado;
} */

/* // Ejercicio 1: Pilas - agregar numeros a una pila
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

Nodo *nuevo_nodo;
Nodo *pila = NULL;
int num; // int num = int n1,n2;
char res;

void agregarPila(Nodo *&pila, int num);
void sacarPila(Nodo *&pila, int &num);

int main()
{

    cout << "Ingresa un numero: ";
    cin >> num;

    agregarPila(pila, num);

    cout << "\nIngresa un numero: ";
    cin >> num;

    agregarPila(pila, num);

    do
    { // Pedimos todos los elementos de la pila
        cout << "Digite un numero: ";
        cin >> num;
        agregarPila(pila, num);

        cout << "\nDesea agregar otro numero a pila(s/n): ";
        cin >> res;
    } while ((res == 's') || (res == 'S'));

    cout << "\nScando los elementos de la pila: ";
    while (pila != NULL)
    {
        sacarPila(pila, num);
        if (pila != NULL)
        {
            cout << num << " , ";
        }

        else
        {
            cout << num << ".";
        }
    }

    system("pause");
    return 0;
}

void agregarPila(Nodo *&pila, int num)
{
    nuevo_nodo = new Nodo();      // 1. Crear el espacio en memoria para almacenar un nodo.
    nuevo_nodo->dato = num;       // 2. cargar el valor dentro de la variable nodo(dato)
    nuevo_nodo->siguiente = pila; // 3. cargar el puntero pila dentro del nodo(*siguiente), y recordar que pila=NULL;
    pila = nuevo_nodo;            // 4. asignar el nuevo nodo a pila
    cout << "\nElemento " << num << " se agrego a PILA CORRECTAMENTE." << endl;
}

void sacarPila(Nodo *&pila, int &num)
{
    Nodo *aux = pila;
    num = aux->dato;
    pila = aux->siguiente;
    delete aux;
} */

/* // Ejercicio 2: Pilas - Agregar caracteres a una pila

// 1. Insertar un caracter a la pila 
// 2. Mostrar todos los elementos de la pila 
// 3. Salir

#include <iostream>
#include <conio.h>
#include <stdlib.h>
    using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};

Nodo *nuevo_nodo;
Nodo *pila = NULL;

void menu();
void agregarPila(Nodo *&, char word);
void sacarPila(Nodo *&, char &word);

int main(){
    menu();
    getch();
    return 0;
}

void menu(){
    Nodo *pila = NULL;
    int opcion;
    char word;

    do{
        cout << "\t.:MENU:.\n";
        cout << "1. Insertar un caracter a la pila" << endl;
        cout << "2. Mostrar todos los elementos de la pila" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion){
        case 1:
            cout << "\nDigite un caracter: ";
            cin >> word;
            agregarPila(pila, word);
            break;
        case 2:
            cout << "\nMostrando todos los elementos de la pila: ";
            while (pila != NULL)
            {
                sacarPila(pila, word);
                if (pila != NULL){
                    cout << word << " , ";
                }
                else{
                    cout << word << ".";
                }
            }
            cout << "\n";
            system("pause");
            break;
        case 3:
            break;
        }
        system("cls"); // limpiar pantalla
    } while (opcion != 3);
}

void agregarPila(Nodo *&pila, char word){
    nuevo_nodo = new Nodo();      // 1. Crear el espacio en memoria para almacenar un nodo.
    nuevo_nodo->dato = word;      // 2. cargar el valor dentro de la variable nodo(dato)
    nuevo_nodo->siguiente = pila; // 3. cargar el puntero pila dentro del nodo(*siguiente), y recordar que pila=NULL;
    pila = nuevo_nodo;            // 4. asignar el nuevo nodo a pila
    cout << "\nElemento " << word << " se agrego a PILA CORRECTAMENTE." << endl;
}

void sacarPila(Nodo *&pila, char &word){
    Nodo *aux = pila;
    word = aux->dato;
    pila = aux->siguiente;
    delete aux;
} */

/* // Ejercicio 3: Listas - Mayor y menor elemento de una lista
// Crear una lista que almacene "n" n�meros enteros y calcular el menor y mayor de ellos.

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

Nodo *lista = NULL;
int dato;
char opcion;

void insertarLista(Nodo *&lista, int n);
void mostrarLista(Nodo *lista);
void calcularMayorMenor(Nodo *lista);

int main(){
    do{
        cout << "Digite un numero para agregarlo a lista: ";
        cin >> dato;
        insertarLista(lista, dato);

        cout << "\nDesea agregar un nuevo numero(s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    mostrarLista(lista); // mostramos la lista
    calcularMayorMenor(lista);

    getch();
    return 0;
}

// Insertar elementos al final de la lista
void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo = new Nodo(); // crear espacio en la memoria
    Nodo *aux;                     // variable auxiliar que se usara para que se le iguale el primer valor en la lista y asi poder ir avanzando hasta el final

    nuevo_nodo->dato = n; // se le asigna el valor introducido a la variable de tipo nodo
    // nuevo_nodo->siguiente = NULL;

    if (lista == NULL){ // Si la lista esta vacia
        lista = nuevo_nodo; // agregamos el primer nodo a la lista
    }
    else{
        aux = lista; // aux apunta al inicio de la lista

        while (aux->siguiente != NULL){ // recorremos la lista hasta llegar al final
            aux = aux->siguiente; // avanzamos posiciones en la lista
        }
        aux->siguiente = nuevo_nodo; // agregamos el nuevo nodo al final de la lista
    }
    cout << "\tElemento " << n << " agregado a lista correctamente\n";
}

// Mostrar todos los elementos de la lista
void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();

    actual = lista;
    while (actual != NULL){ // mientras no sea final de la lista
        cout << actual->dato << " -> "; // mostramos el dato
        actual = actual->siguiente;     // avanzamos a la siguiente posicion de la lista
    }
}

// Calcular el menor y mayor elemento de la lista
void calcularMayorMenor(Nodo *lista){
    int mayor = 0, menor = 99999;

    while (lista != NULL){ // mientras no sea el final de la lista
        if ((lista->dato) > mayor){ // Comprobamos el numero mayor
            mayor = lista->dato;
        }

        if ((lista->dato) < menor){ // Comprobamos el numero menor
            menor = lista->dato;
        }
        lista = lista->siguiente; // Avanzamos en la lista
    }
    cout << "\n\nEl mayor numero es: " << mayor << endl;
    cout << "El menor numero es: " << menor << endl;
} */

/* // Ejercicio 4: Listas - Calcular la suma y el promedio de una lista
// Crear una lista que almacene "n" n�meros reales  y calcular su suma y promedio.

#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{
    float dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, float);
void mostrarLista(Nodo *);
void calcularSumaPromedio(Nodo *);

int main(){
    Nodo *lista = NULL;
    float dato;
    char opcion;

    do{
        cout << "Digite un numero: ";
        ;
        cin >> dato;
        insertarLista(lista, dato);

        cout << "\nDesea agregar otro elemento a lista(s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "\nElementos de la lista:\n";
    mostrarLista(lista);

    calcularSumaPromedio(lista);

    getch();
    return 0;
}

// Insertar elementos al final de la lista
void insertarLista(Nodo *&lista, float n){
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    // nuevo_nodo->siguiente = NULL;

    if (lista == NULL){ // lista vacia
        lista = nuevo_nodo;
    }
    else{
        aux = lista; // aux se�ala el inicio de la lista
        while (aux->siguiente != NULL){ // recorremos la lista
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo_nodo;
    }
    cout << "\tElemento " << n << " insertado a lista correctamente\n";
}

// Mostrar todos los elementos de la lista
void mostrarLista(Nodo *lista){
    while (lista != NULL){// mientras no sea el final de la lista
        cout << lista->dato << " -> "; // mostramos el dato
        lista = lista->siguiente;      // avanzamos una posicion mas en la lista
    }
}

// Calcular suma y promedio de los elementos de la lista
void calcularSumaPromedio(Nodo *lista){
    float suma = 0, promedio = 0;
    int contador = 0;

    while (lista != NULL){        // mientras no sea el final de la lista
        suma += lista->dato;      // suma iterativa
        contador++;               // aumentamos el contador de elementos de la lista
        lista = lista->siguiente; // Avanzamos en la lista
    }

    promedio = suma / contador;

    cout << "\n\nLa suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;
} */

/* // Ejercicio 5: Colas - Insertar y eliminar elementos de una cola
// Hacer un programa en C++, utilizando Colas que contenga el siguiente menu:

// 	1. Insertar un caracter a una cola
// 	2. Mostrar todos los elementos de la cola
// 	3. Salir

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};

// Prototipos de Funciones
void menu();
void insertarCola(Nodo *&frente, Nodo *&fin, char n);
bool cola_vacia(Nodo *frente);
void suprimirCola(Nodo *&frente, Nodo *&fin, char &n);

int main(){
    menu();

    getch();
    return 0;
}

void menu(){
    int opc;
    char dato;

    Nodo *frente = NULL;
    Nodo *fin = NULL;

    do{
        cout << "\t.:MENU:.\n";
        cout << "1. Insertar un caracter a una cola" << endl;
        cout << "2. Mostrar todos los elementos de la cola" << endl;
        cout << "3. Salir" << endl;
        cout << "Opcion: ";
        cin >> opc;

        switch (opc){
        case 1:
            cout << "\nIngrese el caracter para agregar a la cola: ";
            cin >> dato;
            insertarCola(frente, fin, dato);
            break;
        case 2:
            cout << "\nMostrando los elementos de la cola: ";
            while (frente != NULL){
                suprimirCola(frente, fin, dato);
                if (frente != NULL){
                    cout << dato << " , ";
                }
                else{
                    cout << dato << ".";
                }
            }
            cout << "\n";
            system("pause");
            break;
        case 3:
            break;
        }
        system("cls");
    } while (opc != 3);
}

// Funci�n para insertar elementos en la cola
void insertarCola(Nodo *&frente, Nodo *&fin, char n){
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (cola_vacia(frente)){
        frente = nuevo_nodo;
    }
    else{
        fin->siguiente = nuevo_nodo;
    }

    fin = nuevo_nodo;
}

// Funci�n para determinar si la cola est� vacia
bool cola_vacia(Nodo *frente){
    return (frente == NULL) ? true : false;
}

// Funci�n para eliminar elementos de la cola
void suprimirCola(Nodo *&frente, Nodo *&fin, char &n){
    n = frente->dato;
    Nodo *aux = frente;
    if (frente == fin){
        frente = NULL;
        fin = NULL;
    }
    else{
        frente = frente->siguiente;
    }
    delete aux;
} */

/* // Ejercicio 5.1: Colas - Insertar y eliminar elementos de una cola
#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;

struct Nodo{
    int dato;
    Nodo *sig;
};

void insertar(Nodo *&frente, Nodo *&final){
    cout << "Digite el dato que quiere insertar en la cola: ";
    Nodo *nuevo = new Nodo();
    cin >> nuevo->dato;
    nuevo->sig = NULL;
    if (frente == NULL){
        frente = nuevo;
    }
    else{
        final->sig = nuevo;
    }
    final = nuevo;
}

void menu(){
    cout << "1.Insertar un elemento en la cola" << endl;
    cout << "2.Ver los elementos en la cola" << endl;
    cout << "3.Eliminar elementos de la cola" << endl;
    cout << "0.Salir" << endl;
}

void ver(Nodo *frente){
    if (frente == NULL){
        cout << "La cola est� vac�a" << endl;
    }
    else{
        while (frente != NULL){
            cout << "[" << frente->dato << "]->";
            frente = frente->sig;
        }
    }
    cout << "\n";
    system("pause");
}

bool buscar(Nodo *frente, int dat){
    if (frente == NULL){
        return false;
    }
    else{
        while (frente != NULL)
        {
            if (frente->dato == dat)
            {
                return true;
            }
            frente = frente->sig;
        }
        return false;
    }
}

void eliminar(Nodo *&frente, Nodo *&final){
    cout << "Digite el dato que desea eliminar: ";
    int dat;
    cin >> dat;
    if (buscar(frente, dat) == false){
        cout << "El dato no se encuentra en la lista" << endl;
        system("PAUSE");
    }
    else{
        while (frente->dato != dat){
            Nodo *aux = new Nodo();
            aux = frente;
            frente = frente->sig;
            delete aux;
        }
        Nodo *aux = new Nodo();
        aux = frente;

        if (frente->sig == NULL){
            frente = NULL;
            final = NULL;
        }
        else{
            frente = frente->sig;
        }
        delete aux;
    }
}

int main(){
    setlocale(LC_ALL, "SPANISH");
    Nodo *frente = NULL;
    Nodo *final = NULL;
    int aux, op;

    do{
        system("cls");
        menu();

        cin >> op;

        switch (op){
            case 1:{
                insertar(frente, final);
                break;
            }
            case 2:{
                ver(frente);
                break;
            }
            case 3:{
                eliminar(frente, final);
                break;
            }
        }
    }while (op != 0);

    system("PAUSE");
} */

/* // Ejercicio 6: Colas - Personas en la cola de un banco
// Hacer un programa que guarde datos de clientes de un banco, los almacene en cola, y por ultimo muestre los clientes en el orden correcto.

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct Cliente
{
	char nombre[30];
	char clave[10];
	int edad;
};

struct Nodo
{
	Cliente c;
	Nodo *siguiente;	
};

//Prototipos de Funciones
void cargar_cliente(Cliente &);
void insertarCola(Nodo *&,Nodo *&,Cliente);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,Cliente &);

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	Cliente c;
	char rpt;
	
	do{
		cargar_cliente(c); //Cargamos cliente
		insertarCola(frente,fin,c); //y luego lo agregamos a cola
		
		cout<<"Desea agregar mas clientes(s/n): ";
		cin>>rpt;
		cout<<"\n";
	}while(rpt == 'S' || rpt == 's');
	
	cout<<"\n\n=== Carga de Clientes Exitosa ===\n\n";
	
	cout<<"Mostrando clientes:\n\n";
	while(frente != NULL){//Vaciando la cola
		suprimirCola(frente,fin,c);
		//Mostrando todos los clientes agregados
		cout<<"Nombre: "<<c.nombre<<endl;
		cout<<"Clave: "<<c.clave<<endl;
		cout<<"Edad: "<<c.edad<<endl;
		cout<<"\n";		
	}	
	
	getch();
	return 0;
}

void cargar_cliente(Cliente &c){
	fflush(stdin);
	cout<<"\tAgregando un Nuevo Cliente"<<endl;
	cout<<"Nombre: "; cin.getline(c.nombre,30,'\n');
	cout<<"Clave: "; cin.getline(c.clave,10,'\n');
	cout<<"Edad: "; cin>>c.edad;
	cout<<"\n";
} 

void insertarCola(Nodo *&frente,Nodo *&fin,Cliente c){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->c = c;
	nuevo_nodo->siguiente = NULL;
	
	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	
	fin = nuevo_nodo;
}

bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}

void suprimirCola(Nodo *&frente,Nodo *&fin,Cliente &c){
	c = frente->c;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	
	delete aux;
} */

/* // Ejercicio 6.1: Colas - Personas en la cola de un banco
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class Cola{
    private:
    class Nodo{
    public:
        string nombre;
        Nodo *siguiente;
    };

    Nodo *raiz;
    Nodo *fondo;
    
    public:
    Cola();
    ~Cola();
    int insertando();
    void insertar(string);
    void menu();
    bool vacio();
    void imprimir();
    void contara();
    int contar();
    string extraer();
    void extrayendo();
};

//---------------Constructores---------------
Cola::Cola(){
    raiz = NULL;
    fondo = NULL;
}
//------------------Metodos------------------

bool Cola::vacio(){
    return (raiz == NULL);
}

void Cola::imprimir(){
    Nodo *recor = raiz;
    if (vacio()){
        cout << "No hay gente en cola" << endl;
    }
    else{
        int cont = 1;
        while (recor != NULL)
        {
            cout << cont << "->" << recor->nombre << endl;
            recor = recor->siguiente;
            cont++;
        }
        cont = 1;
    }
    delete recor;
}

int Cola::insertando(){
    string nom;
    cin.get();
    cout << "Ingresa el nombre: ";
    getline(cin, nom);
    insertar(nom);
    cout << "------" << nom << " ------ fue aniadido a la cola" << endl;
}

void Cola::insertar(string _nombre){
    Nodo *nuevo = new Nodo;
    nuevo->nombre = _nombre;
    if (vacio()){
        raiz = nuevo;
    }
    else{
        fondo->siguiente = nuevo;
    }
    fondo = nuevo;
}

void Cola::contara(){
    int personas = contar();
    cout << "La cantidad de personas en cola son: " << personas << endl;
}

int Cola::contar(){
    Nodo *recor = raiz;
    if (vacio()){
        return -1;
    }
    else{
        int cont = 0;
        while (recor != NULL){
            recor = recor->siguiente;
            cont++;
        }
        return cont;
        cont = 0;
    }
    delete recor;
}

void Cola::extrayendo(){
    string extrajido = extraer();
    cout << "La persona extraida fue: " << extrajido << endl;
}

string Cola::extraer(){
    if (!vacio()){
        string nom = raiz->nombre;
        Nodo *bor = raiz;
        if (raiz == fondo){
            raiz = NULL;
            fondo = NULL;
        }
        else{
            raiz = raiz->siguiente;
        }
        delete bor;
        return nom;
    }
    else{
        return "-1";
    }
}

//-----------------Destructor-------------
Cola::~Cola(){
    Nodo *recor = raiz;
    Nodo *bor;
    while (recor != NULL){
        bor = recor;
        recor = recor->siguiente;
        delete bor;
    }
}

//-----------------------MENU---------------------------
void Cola::menu(){
    int opc;
    do{
        system("cls");
        cout << "-------------------MENU---------------------" << endl;
        cout << "1.-Nueva Persona" << endl;
        cout << "2.-Mostrar la fila de personas actual" << endl;
        cout << "3.-Atender persona" << endl;
        cout << "4.-Contar cola" << endl;
        cout << "0.-Salir del programa" << endl;
        cout << "Opcion: ";
        cin >> opc;
        switch (opc){
        case 1:
            system("cls");
            insertando();
            system("pause");
            break;
        case 2:
            system("cls");
            imprimir();
            system("pause");
            break;
        case 3:
            system("cls");
            extrayendo();
            system("pause");
            break;
        case 4:
            system("cls");
            contara();
            system("pause");
            break;
        case 0:
            system("cls");
            cout << "Saliste" << endl;
            break;
        default:
            system("cls");
            cout << "Tu opcion es incorrecta" << endl;
            system("pause");
            break;
        }
    } while (opc != 0);
}

int main(){
    Cola cola;
    cola.menu();
    return 0;
} */


//         $$$$$$$$$$$$$$$ Recursive algorithms $$$$$$$$$$$$$$$


/* // Algoritmo recursivo - Busqueda binaria

#include <iostream>
using namespace std;

int busquedaBinaria(int a[], int dato, int inferior, int superior){
    int mitad;

    if(inferior > superior){// no encontradp
        return -1;
    }

    else{
        mitad = (inferior+superior)/2;
        if (dato == a[mitad]){
            return mitad;
        }

        else if(dato > a[mitad]){
            return busquedaBinaria(a, dato, mitad+1, superior);
        }

        else{
            return busquedaBinaria(a, dato, inferior, mitad-1);
        }
    }
}

int main(){
    int arreglo[6] = {3,4,5,8,9,10};
    int dato = 9;
    int resultado = busquedaBinaria(arreglo,dato,0,5);

    if(resultado == -1){
        cout<<"El dato no ha sido encontrado"<<endl;
    }

    else{
        cout<<"El dato ha sido encontrado en la posicion: "<<resultado<<endl;
    }

    return 0;
} */

/* // Algoritmo recursivo - Ordenamiento por mezclas MergeSort
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> // new y delete
using namespace std;

void MergeSort(int[], int, int);
void Mezcla(int[], int, int, int);

int main(){
    int arreglo[] = {5, 7, 87, 1, 3, 9, 14, 22}; // Definimos el arreglo de 6 espacios (0 a 5)

    MergeSort(arreglo, 0, 7); // Le mandamos a la funcion el arreglo con los valores y los valores inicial y final del arreglo. Es decir, 0 y 5.

    for (int i = 0; i < 8; i++){
        cout << arreglo[i] << endl;
    }

    getch();
    return 0;
}

void MergeSort(int a[], int primero, int ultimo){// primero = 0, ultimo = 5
    int central;
    if (primero < ultimo){
        central = (primero + ultimo) / 2;    // Calculamos el valor central de la lista al sumar el minimo mas el maximo y dividido entre 2. Recordar que el resultado se debe redondear al valor entero mas izquierdo posible. (5+0)/2 = 2.5 = 2.

        MergeSort(a, primero, central);      // Ordenamos la sublista izquierda.
        MergeSort(a, central + 1, ultimo);   // Ordenamos la sublista derecha
        Mezcla(a, primero, central, ultimo); // Mezclar los elementos ordenados
    }
}

void Mezcla(int a[], int izquierda, int medio, int derecha){
    int *aux;
    int i, k, z;                            // "i" pertenece al indice de la sublista izquierda. "k" pertenece al indice de la sublista derecha. "z" pertenece al indice de la sublista auxiliar, que permitira desplazarce de izquierda a derecha para ir llenando de valores el arreglo.
    aux = new int[derecha - izquierda + 1]; // Representa el limite de valores que tendra la variable auxiliar. "derecha-izquierda + 1" es la cantidad de elementos que vamos a tener en nuestro arreglo aux.
    i = z = izquierda;                      // puesto que "i" (indice de la sublista izquierda) y "z" (indice de la sublista auxiliar) son los primeros, se inicializaran con el valor que tenga "izquierda". O sea, cero.
    k = medio + 1;                          // "k" inicializa en la mitad del arreglo porque es la segunda mitad (del lado derecho) del arreglo que se dividio.

    // Ordenamos los elementos en el arrelgo auxiliar
    while (i <= medio && k <= derecha){ //"medio" es el ultimo valor de la sublista izquierda, que va desde "izqueirda hasta "medio. Despues, "derecha" es el ultimo valor de la sublista derecha, que va desde "medio+1" hasta "derecha".
        if (a[i] <= a[k]){ // Verificamos si el valor inicial de la sublista izquierda es menor al valor inicial de la sublista derecha
            aux[z++] = a[i++]; // Si cumple, entonces el valor inicial de la variable auxiliar toma el valor inicial de la sublista izquierda.
                               // z++;
            // i++;
        }

        else{
            aux[z++] = a[k++]; // Si no cumple, entonces el valor inicial de la variable auxiliar toma el valor inicial de la sublista derecha.
                               // z++;
            // k++;
        }
    }

    // Ahora, puesto que una de las dos listas va a terminarse primero que la otra, se deberan copiar los valores restantes de esa subliste pero utilizando otro ciclo while.
    while (i <= medio){// Este ciclo indica que primero se lleno la lista es la sublista derecha. Es por eso que siguen quedando valores restantes en la sublista izquierda y se deberan agregar a la lista auxiliar.
        aux[z] = a[i];
        z++;
        i++;
    }

    while (k <= derecha){ // Este ciclo indica que primero se lleno la lista es la sublista izquierda. Es por eso que siguen quedando valores restantes en la sublista derecha y se deberan agregar a la lista auxiliar.
        aux[z] = a[k];
        z++;
        k++;
    }

    // Copiamos ahora los elementos del arreglo auxiliar hacia el arreglo a[].
    for (int i = izquierda; i <= derecha; i++)    {
        a[i] = aux[i];
    }

    delete aux;
} */

/* // Algoritmo recursivo Backtracking (Ejercicio del salto del caballo)
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

const int N = 5;                                                                        // Al utilizar const, especificamos que el valor de N jamas va a cambiar y se mantendra fijo
int tablero[N][N];                                                                      // Creamos la matriz de 64 casillas
int d[8][2] = {{2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}, {1, -2}, {2, -1}}; // Aarreglo con los 8 posibles movimientos que puede realizar el caballo a su alrededor. 8 = movimientos, 2 = direccion en X y Y del tablero.

void EscribirTablero(); // Funcion para desplegar el tablero.
void SaltoCaballo(int, int, int, bool &);

int main(){
    bool exito = false;         //"exito" sera falso mientras aun no se termine el proceso.
    int fila = 2;               // El caballo se encuentra en la fila 2 del tablero
    int columna = 2;            // El caballo se encuentra en la columna 2 del tablero
    tablero[fila][columna] = 1; // Especificamos la posicion en la que se encuentra el caballo en la matriz y lo igualamos a 1, que es el movimiento inicial.

    SaltoCaballo(2, fila, columna, exito); // Le enviamos primero los movimientos. Pero como ya tenemos elmovimiento 1 definido arriba, entonces le mandaremos el siguiente, que es 2. Despues le enviamos las posiciones en la que se encuentra el caballo y finalmente si es falso o verdadero.

    if (exito){ // Si exito es verdadero

        cout << "Camino encontrado" << endl; // Entonces hemos terminado
        EscribirTablero();                   // Mandamos a llamar a la funcion para que muestre el tablero hasta donde haya llegado.
    }

    else{
        cout << "Camino no encontrado" << endl;
    }

    getch();
    return 0;
}

void SaltoCaballo(int i, int x, int y, bool &exito){ // "i" es el numero de movimientos que se van a copiar en la matriz. "x" y "y" son las coordenadas INICIALES que tiene el caballo en  el tablero y "bool &exito" ayudara a saber si ya se recorrio todo el tablero o si aun no se ha terminado. Es decir, dentro de la  funci�n se modifica su valor y tambi�n se modifica la variable original.

    int nx, ny; // Estas variables almacenaran las siguientes coordenadas de los siguientes movimientos que hara el caballo.
    int k = 0;  // Este iterador serivra para controlar los 8 desplazamientos del caballo.

    do{
        k++;
        nx = x + d[k - 1][0]; // [k-1] es para seleccionar cual movimiento seleccionar de los 8 que hay en el arreglo "d". Posteriormente, se coloca [0]  porque 0 es la posicion del primer valor que en el eje x. Despues, se coloca [1] porque 1 es la posicion del segundo valor  que en el eje y. Si tenemos, por ejemplo, {2,1}, entonces 2 pertenece a "x" y 1 pertenece al eje "y". Se deben sumar esas nuevas coordenadas a las coordenadas iniciales porque si no las sumamos, el caballo se colocaria en otra posicion diferente a la de donde se ecuentra en el lugar que definimos arriba (columna = 2 y fila = 2).
        ny = y + d[k - 1][1];

        if ((nx >= 0) && (nx < N) && (ny >= 0) && (ny < N) && (tablero[nx][ny] == 0)){ //Verificar si las coordenadas son correctas. Verificar que las coordenadas tanto para filas y columnas esten dentro del  rango permitido. Es decir, no pueden tener numeros negativos, por eso se dice que es =>0, y tampoco debe estar en una posicion fuera de N^2. Finalmente, si la posicion en la que se encuentre el caballo o la nueva coordenada sea 0, es decir, que esa posicion todavia no haya sido visitada, entocnes se hace lo siguiente. Recordar que no se pueden volvver a visitar las mismas casillas.
            // Guardamos el movimiento
            tablero[nx][ny] = i; // Almacenamos el valor de "i" que mandamos desde la funcion principal, el cual primeramente empezaria valiedo 2 y despues ese valor ira cambiando cada que hagamos la recursividad.
            EscribirTablero();   // Mostrar como se esta moviendo el caballo por todo el tablero.

            if (i < N * N){ // 5*5=25     Si el numero de movimientos es menor al numero de casillas que tiene el tablero (definido arriba),
                SaltoCaballo(i + 1, nx, ny, exito); // hacemos recursividad mandando a llamar a la misma funcion pero ahora le mandamos i+1, que representa un siguiente movimiento, luego las nuevas cordenadas y finalmente "exito" para verificar si aun no se ha completado.
                if (!exito){                        // Si exito sigue siendo falso, entonces el movimiento que acabmos de realizar no alcanzo la solucion.
                    tablero[nx][ny] = 0; // se borra la anotacion y lo igualamos a 0. Es decir, el movimiento que acabamos de hacer no nos dio un buen resultado, o sea, necesitamos regresar y hacer otro movimiento porque por el que ibamos no nos llevo a ningun sitio correcto. Por ejemplo, si en la matriz nuestro ultimo resultado fue un 15 en cualquier posicion de la matriz, pero despues de esa movimento, nos es imposible poder desplazarnos en "L", entonces borramos ese 15, saliendo de la recursividad en la que estemos y al 14 en el que nos quedamos, buscamos otra posicion que nos permita seguir moviendonos en "L" de manera continua.
                }
            }

            else{ // Si lo de arriba no se cumple, significa que ya se llenaron todas las 25 casillas. O sea, finalizamos y exito cambia a true. Lo que significa que, como exito se paso por referencia, al haber cambiado su estado de false a true, se actualizara en la funcion main, lo que provocara que despliegue el mensaje final.
                exito = true;
            }
        }
    } while ((k < 8) && !exito); // Hacer mientras el iterador k sea menor al numero de movimientos, que son 8, y mientras no haya tenido exito, o sea, que no este lleno el tablero.
}

void EscribirTablero(){
    int i, j;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            cout << tablero[i][j] << "|";
        }
        cout << endl;
    }
    cout << endl;
} */

/* // Algoritmos recursivos (problema de las N Reinas)

#include <iostream>
using namespace std;

const int N=4;
int reinas[N];

void PonerReina(int, bool &);
bool valido(int);
void MostrarTablero();

int main(){
    bool solucion = false;

    PonerReina(0, solucion);

    if(solucion){
        cout<<"Si existe combinacion de reinas"<<endl;
        MostrarTablero();
    }
    else{
        cout<<"No existe combinacion de reinas"<<endl;
    }

    return 0;
}

void PonerReina(int i, bool &solucion){
    int k = 0;//Inicializamos el conteo de movimientos.
    do{
        reinas[i] = k; //Copiamos la reina "i" en la fila "k".
        k++;

        MostrarTablero();

        if( valido(i) ){
            if( i<(N-1) ){
                PonerReina(i+1, solucion);

                if(!solucion){
                    reinas[i] = 0;
                }
            }
            else{   //Ya agregamos todas las reinas.
                solucion = true;
            }
        }
    }while(k<N && !solucion);
}

bool valido(int i){ //Comprobamos si la reina de la columna "i" que estamos agregando, no se amenaza con ninguna reina ya puesta.

    bool v = true;

    for(int r=0; r<i; r++){
        v = v && (reinas[i] != reinas [r] );         //Comprobar si no hay nadie mas en la fila
        v = v && ( reinas[i] - i != (reinas[r]-r) ); //Verificar si hay una reina en la diagonal 1
        v = v && ( reinas[i] + i != (reinas[r]+r) ); //Verificar si hay una reina en la diagonal 2
    }
    return v;
}

void MostrarTablero(){
    int tablero[N][N];
    for(int i=0; i<N; i++){ //Asignamos los valores del tablero a 0;

        for(int j=0; j<N; j++){
            tablero[i][j] = 0;
        }
    }

    cout<<"\nMostrando arreglo"<<endl;
    for(int i=0; i<N; i++){
        cout<<reinas[i]<<"|";
    }
    cout<<endl;

    //Ahora asignamos el valor del arreglo hacia el tablero.
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            tablero[reinas[j]][j] = 1;
        }
    }

    cout<<"\nMostrando el tablero"<<endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<tablero[i][j]<<"|";
        }
        cout<<endl;
    }
} */

/* // Algoritmos recursivos (Recursion-vs-Iteracion)
// Dado un numero natural N, obtener la suma de los digitos de que consta. Es decir, si tenemos 25, la suma de sus digitos es 2+5=7. presentar un arlgoritmo recursivo y otro iterativo.

#include<iostream>
using namespace std;

//Solucion Recursiva
int sumaRecursiva(int n){
    //Case base
    if(n<=9){
        return n;
    }

    //Caso recursivo
    else{
        // En esta linea, por ejemplo, si tenemos n = 123, el resultado debe ser 1 + 2 + 3 = 6. Entonces, en la primera parte (n/10), dividimos el valor de 123 entre 10 y
        // obtendremos un 12 y del lado derecho (n%10) obtendremos un 3, que es el residuo de la  division de 123/10, o sea, 3. Debido a que el 12 sigue siendo mayor a 9,
        // entonces se vuelve a iterar pero en este caso, en la primera parte de 12/10 obtendremos un 1, y en el lado derecho, obtendremos el residuo, que es 2. De esa manera,
        // tendremos finalmente 1+2+3=6.
        return sumaRecursiva(n/10) + n%10 ;
    }

}

//Solucion iterativa
int sumaIterativa(int n){
    int suma=0;
    while(n > 9){
        suma += n%10;
        n /= 10;
    }

    return(suma+n);
}

int main(){
    int numero;

    cout<<"Digite un numero: ";
    cin>>numero;

    cout<<"\nLa suma de los digitos del numero es: "<<endl;
    cout<<"Algoritmo recursivo: "<<sumaRecursiva(numero)<<endl;
    cout<<"Algoritmo iterativo: "<<sumaIterativa(numero)<<endl;

    return 0;
} */

/* // Algoritmos recursivos (Recursividad indirecta)
// Hacer un programa que muestre el alfabeto, caracter a caracter, utilizando recursividad mutua o indirecta
#include <iostream>
using namespace std;

void funcionA(char);
void funcionB(char);

int main(){
    cout << "Alfabeto: ";
    funcionA('Z'); // A la funcionA le mandamos la letra Z para verificar el orden alfabetico
    cout << endl;

    return 0;
}

void funcionA(char letra){ // Aqui entra la letra que asignamos arriba. O sea, 'Z'.
    if (letra > 'A'){ // Si 'Z' es mayor que 'A', entonces mandamos a llamar a la funcionB
        funcionB(letra); // y le mandamos el valor de la letra 'Z'
    }

    cout << letra << " "; // Esta linea entra en accion cuando if(letra = letra 'A'), o sea, se dice que sera el caso base y ahi frena la recursividad. Posteriormente se imprimira primero el valor de A, y despues imprimira todos aquellos valores que "quedaron en el aire".
}

void funcionB(char letra){ // Le mandamos la letra 'Z' a esta funcion
    funcionA(--letra); // Volvemos a llamar a la funcionA, pero ahora en vez de mandarle la letra 'Z', le mandamos la letra anterior a ella, o sea, 'Y'.
} // Esto se repetira hasta que la letra llegue hasta su punto minimo, que es el de la laeta 'A'. */

/* // Algoritmos recursivos (Torres de Hanoi)
#include <iostream>
using namespace std;

// Varilla izquierda = 1, Varilla Central = 2, Varilla derecha = 3
// Disco pequeno = 1, Disco mediano = 2, Disco grande = 4,
void hanoi(char varillaInicial, char varillaCentral, char varillaFinal, int n){
    
    // Caso base
    if (n == 1){ // Cuando quede mover solamente un disco, es decir, cuando sea el ultimo movimiento, quiere decir que moveremos desde la varilla inicial hasta la varilla final.
        cout << "Mover disco " << n << " desde la varilla " << varillaInicial << " a la varilla " << varillaFinal << endl;
    }

    // Caso recursivo
    else {
        hanoi(varillaInicial, varillaFinal, varillaCentral, n - 1);
        cout << "Mover disco " << n << " desde la varilla " << varillaInicial << " a la varilla " << varillaFinal << endl;
        hanoi(varillaCentral, varillaInicial, varillaFinal, n - 1);
    }
}

int main(){
    int n;
    cout << "Digite el numero de discos para las torres de Hanoi: ";
    cin >> n;

    hanoi('A', 'B', 'C', n);
    return 0;
} */


//         $$$$$$$$$$$$$$$ Archivos $$$$$$$$$$$$$$$


/* // Ejercicio teorico: Archivos
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
using namespace std;

void escribir();

int main(){
	escribir();
	
	system("pause");
	return 0;
}

void escribir(){
	ofstream archivo,ios;
	string nombreArchivo, frase;
	
	cout<<"Digite el nombre del archivo (seguido de .txt): ";
	getline(cin,nombreArchivo);
	archivo.open(nombreArchivo.c_str(), ios::out);
    
	if ( archivo.fail() ){
		cout<<"No se pudo abrir el archivo.";
		exit(1);
	}
	
	cout<<"\nDigite el nombre del archivo: ";
	getline(cin,frase);
	
	archivo<<frase;
	
	archivo.close();
} */

/* // Ejercicio teorico: Archivos binarios
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>
using namespace std;

void escribir();
void leer();
struct registro{
	char nombre[20];
	char apellido [20];
};

int main(){
	escribir();
	leer();
	system("pause");
	return 0;
}

void escribir(){
	ofstream archivoB;
	
	archivoB.open("Prueba.dat", ios::out | ios::binary);
	
	if (archivoB.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	registro persona; //se crea una variable de tipo estructura
	
	cout<<"Pidiendo datos"<<endl;
	cout<<"Digite un nombre: ";
	cin.getline(persona.nombre,20,'\n');
	cout<<"Digite un apellido: ";
	cin.getline(persona.apellido,20,'\n');
	
	//escribir los datos en el archivo binario
	archivoB.write( (char *)&persona, sizeof(registro) );
	archivoB.close();
}

void leer(){
	ifstream archivoB;
	
	archivoB.open("Prueba.dat", ios::in | ios::binary);
	
	if (archivoB.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	registro persona;
	
	archivoB.read( (char *)&persona, sizeof(registro) );
	
	cout<<"\n\nMostrando los datos leidos"<<endl;
	cout<<"Nombre: "<<persona.nombre<<endl;
	cout<<"Apellido: "<<persona.apellido<<endl;
	
	archivoB.close();
} */

/* // Ejercicio 1 : Archivo de textos para guardar frases
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;

void escribirFrase();

int main(){
	escribirFrase();
	
	system("pause");
	return 0;
}

void escribirFrase(){
	ofstream archivo;
	string nombreArchivo, frase;
	char res;
	
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	archivo.open( nombreArchivo.c_str(), ios::out );


	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Digite una frase: ";
		getline(cin,frase);
		archivo<<frase<<endl;
		
		cout<<"Desea agregar otra frase? (s/n): ";
		cin>>res;
	}while(res == 's' || res == 'S');
	
	archivo.close();
} */

/* // Ejercicio 2: Lectura de un archivo preguntando nombre o localidad
// Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto y, a continuaci�n de lectura a todo el fichero.

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;

void lectura();

int main(){
    lectura();
    system("pause");
    return 0;
}

void lectura(){
    ifstream archivo;
    string nombreArchivo, texto;

    cout << "Digite el nombre o la ubicacion del archivo o fichero: ";
    getline(cin, nombreArchivo);

    archivo.open(nombreArchivo.c_str(), ios::in);

    if (archivo.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    while (!archivo.eof()){ // mientras no sea el final del archivo
    
        getline(archivo, texto); // copiar todo el texto del archivo en la variable "texto"
        cout << texto << endl;
    }
    archivo.close();
} */

/* // Ejercicio 3: Anadir texto al final de un archivo
// Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto y, a continuaci�n a�ada texto en el hasta que el usuario lo decida.

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;

void agregar();

int main(){
    agregar();
    system("pause");
    return 0;
}

void agregar(){
    ofstream archivo;
    string texto;

    archivo.open("librerias.txt", ios::app);//abrir el texto en modo agregar texto

if(archivo.fail()) 	{
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    cout<<"Digite el texto que desee agregar al final del archivo";
    getline(cin,texto);
    archivo<<texto<<endl;
    archivo.close();
} */

/* // Ejercicio 3.1: Anadir texto al final de un archivo
// Realice un programa que pida al usuario el nombre o ubicacion de un fichero de texto y, a continuaci�n a�ada texto en el hasta que el usuario lo decida.

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void aniadir();

int main(){
	aniadir();
	
	system("pause");
	return 0;
}

void aniadir(){
	ofstream archivo;
	string nombreArchivo,texto;
	char rpt;
	
	cout<<"Digite el nombre o ubicacion del archivo: ";
	getline(cin,nombreArchivo);
	
	archivo.open(nombreArchivo.c_str(),ios::app); //Abrimos el archivo en modo a�adir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Digite una frase: ";
		getline(cin,texto);
		archivo<<texto<<endl;
		
		cout<<"Desea agregar otra frase? (s/n): ";
		cin>>rpt;
	}while((rpt == 'S') || (rpt == 's'));
	
	archivo.close();
} */

/* Ejercicio 4: Lectura de contenido de un archivo
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;

void lectura();

int main(){
    lectura();
    system("pause");
    return 0;
}

void lectura(){
    ifstream archivo;
    string texto;
    archivo.open("C:\\Users\\PC\\Documents\\notas\\librerias.txt", ios::in );// abrir el archivo en modo lectura

    if(archivo.fail()) 	{
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    while(!archivo.eof()){ //mientras no sea el final del archivo

        getline(archivo,texto);//copiar todo el texto del archivo en la variable "texto"
        cout<<texto<<endl;
    }
    archivo.close();
} */

/* // Ejercicio 6: Agenda telefonica
// Hacer un programa en C++. Para guardar numeros telefonicos que muestre un menu con las siguientes opciones:

// 	1. Crear(nombre,apellidos,telefono)
// 	2. Agregar mas contactos(nombre,apellidos,telefono)
// 	3. Visualizar contactos existentes


#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

void menu();
void crear_contacto();
void agregar_contacto();
void visualizar_contacto();
struct Datos{
	string nombre, apellidos, telefono;
}datos; //variable de tipo estructura que posee las variables internas en "struct Datos"

int main(){
	menu();

	system("pause");
	return 0;
}

void menu(){
	int opcion;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Crear Agenda Telefonica"<<endl;
		cout<<"2. Agregar mas contactos"<<endl;
		cout<<"3. Visualizar contactos existentes"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opcion;
		
		switch(opcion)		{
			case 1: crear_contacto();
					cout<<"\n";
					system("pause");
					break;
			case 2: agregar_contacto();
					cout<<"\n";
					system("pause");
					break;
			case 3: visualizar_contacto();
					cout<<"\n";
					system("pause");
					break;
		}
		system("cls");
	}while(opcion!=4);
}

void crear_contacto(){
	ofstream archivo;
	char res;

	archivo.open("AgendaTelefonica.txt", ios::out);
	
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"\tAgenta Telefonica"<<endl;//crear la agenda telefonica
	
	do{
		fflush(stdin);
		cout<<"Digite su nombre: ";
		getline(cin, datos.nombre);
		cout<<"Digite su apellido: ";
		getline(cin, datos.apellidos);
		cout<<"Digite su numero de telefono: ";
		getline(cin, datos.telefono);

		//se usa esto para guardar la informacion dentro del archivo. Si no se utiliza, solo se guardarian la informacion dentro de las variables.
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido: "<<datos.apellidos<<endl;
		archivo<<"Telefono: "<<datos.telefono<<endl<<endl;
		
		cout<<"Desea agregar otro contacto?(s\n): ";
		cin>>res;
	}while(res == 'S' || res == 's');
	
	archivo.close();
}

void agregar_contacto(){
	ofstream archivo;
	char res;
	
	archivo.open("AgendaTelefonica.txt", ios::app);// abriendo el archivo en modo anadir
	
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"\nDigite su nombre: ";
		getline(cin, datos.nombre);
		cout<<"Digite su apellodo: ";
		getline(cin, datos.apellidos);
		cout<<"\nDigite su telefono: ";
		getline(cin, datos.telefono);
		cout<<"\n";
		
		archivo<<"Nombre: "<<datos.nombre<<endl;
		archivo<<"Apellido "<<datos.apellidos<<endl;
		archivo<<"Telefono "<<datos.telefono<<endl;
		
		cout<<"Desea agregar otro contacto?(s/n)";
		cin>>res;
	}while(res == 's' || res == 'S');
	
	archivo.close();
}

void visualizar_contacto(){
	ifstream archivo;
	string texto;
	
	archivo.open("AgendaTelefonica.txt", ios::in);//abrir el arhcivo en modo lectura
	
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	while( !archivo.eof() ){ //mientras no sea el final del archivo
		getline(archivo, texto);
		cout<<texto<<endl;
	}
	
	archivo.close();
} */

/* // Ejercicio 7: Archivos binarios pulsaciones de un ciclista
// Crear un archivo binario donde almacenar almacenar un registro que contenga las pulsaciones de un atleta en una determinada hora, el programa debe tener un menu con las siguientes opciones:
// 1. Comenzar a digitar las pulsaciones
// 2. Anadir mas pulsaciones
// 3. Mostrar las pulsaciones registradas
// 4. salir

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
#include <conio.h>
using namespace std;

void menu();
void escribirPulsacion();
void anadirPulsacion();
void mostrarPulsacion();
struct registro{
    float hora;
    int pulsaciones;
};

int main(){
    menu();
    system("pause");
    return 0;
}

void menu()
{
    int opcion;

    do{
        cout << "\t.:MENU:." << endl;
        cout << "1. Comenzar a digitar las pulsaciones: " << endl;
        cout << "2. Anadir mas pulsaciones: " << endl;
        cout << "3. Mostrar las pulsaciones registradas: " << endl;
        cout << "4. salir: " << endl;
        cout << "Digite una opcion: " << endl;
        cin >> opcion;

        switch (opcion){
        case 1:
            escribirPulsacion();
            break;

        case 2:
            anadirPulsacion();
            break;

        case 3:
            mostrarPulsacion();
            break;

        case 4:
            break;
        default:
            cout << "Se qeuivoco de opcion de menu" << endl;
        }
        system("pause");
        system("cls");
    } while (opcion != 4);
}

void escribirPulsacion()
{
    ofstream archivoB;

    archivoB.open("pulsaciones.dat", ios::out | ios::binary);

    if (archivoB.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    registro pulso;

    cout << "\nDigite la hora: ";
    cin >> pulso.hora;
    cout << "Digite la cantidad de pulsaciones: ";
    cin >> pulso.pulsaciones;

    archivoB.write((char *)&pulso, sizeof(registro));

    archivoB.close();
}

void anadirPulsacion(){
    ofstream archivoB;

    archivoB.open("pulsaciones.dat", ios::app | ios::binary);

    if (archivoB.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    registro pulso;

    cout << "\nDigite la hora: ";
    cin >> pulso.hora;
    cout << "Digite la cantidad de pulsaciones: ";
    cin >> pulso.pulsaciones;

    archivoB.write((char *)&pulso, sizeof(registro));

    archivoB.close();
}

void mostrarPulsacion(){
    ifstream archivoB;

    archivoB.open("pulsaciones.dat", ios::in | ios::binary);

    if (archivoB.fail()){
        cout << "No se pudo abrir el archivo";
        exit(1);
    }

    registro pulso;

    cout << "\nMostrando pulsaciones registrada: " << endl;
    while (!archivoB.eof()){
        archivoB.read((char *)&pulso, sizeof(registro));
        if (!archivoB.eof()){
            cout << "Hora: " << pulso.hora << endl;
            cout << "Pulsaciones: " << pulso.pulsaciones << endl<< endl;
        }
    }

    archivoB.close();
} */

/* // Ejercicio 8: Archivos binarios funciones de posicionamiento
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>
using namespace std;

void escribir();
void lectura();

int main(){
	escribir();

	system("pause");
	return 0;
}

void escribir(){
	ofstream archivo;
	
	archivo.open("posicion.txt", ios::out);
	
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Posicion actual del archivo: "<<archivo.tellp()<<endl;
	archivo<<"Hola que tal?";
	
	archivo.seekp(5);
	archivo<<"Como estas?";
	
	cout<<"Posicion actual del archivo: "<<archivo.tellp()<<endl;
	
	archivo.close();
	
}

void lectura(){
	ifstream archivo;
	
	archivo.open("posicion.txt", ios::in);
	
	if (archivo.fail())
	{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}	
} */

/* // Ejercicio 9: Archivos binarios funciones de posicionamiento parte 2
#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<conio.h>
using namespace std;

void escribir();
void lectura();

int main(){
	escribir();
	lectura();
	system("pause");
	return 0;
}

void escribir(){
	ofstream archivo;
	
	archivo.open("posicion.txt", ios::out);
	
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	cout<<"Posicion actial: "<<archivo.tellp()<<endl;
	
	//archivo.seekp(5);
	
	archivo<<"Hola como estas?";
	cout<<"Posicion actial: "<<archivo.tellp()<<endl;
	
	archivo.close();
}

void lectura(){
	ifstream archivo;
	
	archivo.open("posicion.txt", ios::in);
	
	if (archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	string linea;
	archivo.seekg(5);
	cout<<"Posicion actial: "<<archivo.tellg()<<endl;
	getline(archivo, linea);
	cout<<linea<<endl;
	archivo.close();
} */



//         $$$$$$$$$$$$$$$ Bibliotecas STL $$$$$$$$$$$$$$$



/* // Bibliotecas: Algoritmos STL

#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <time.h>
using namespace std;
int NumerosAleatorios();

int main(){
	list<int> valores(10);// Lista de 10 elementos enteros
	generate(valores.begin(), valores.end(), NumerosAleatorios);//generando numeros aleatorios en un rango de la lista.
	
	//Mostrando elementos de la lista
	ostream_iterator<int> salida(cout, "|");
	copy(valores.begin(), valores.end(), salida);
	
	//Buscamos la primera aparicion del numero 8 en la lista
	list<int>::iterator i;
	i = find(valores.begin(), valores.end(), 8);
	
	cout<<endl;
	
	//Analizamos si "i" no sobrepasa los rangos de la lista
	if(i != valores.end()){
		cout<<"El elemento "<<*i<<" si ha sido encontrado en la lista"<<endl;
	}
	
	else{
		cout<<"El elemento no ha sido encontrado"<<endl;
	}
	
	
    return 0;
}

int NumerosAleatorios(){
	return rand()%10;
} */

/* // Bibliotecas: Algoritmos STL - transformacion
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric> //Para utilizar su funcion acumulate.
#include <iterator>
#include <cstdlib>
#include <fstream>
                    using namespace std;

//Funcion para pasar las letras del vector a mayusculas
void mayusculas(char &letrita){
    if (letrita>='a' && letrita<='z')	{
        letrita = letrita - ('a' - 'A');//Revisar formato ASCII para entender el numero que le pertenece a cada letra.
    }
}

//Funcion unaria para determinar si una letra es una vocal
char vocales(char &letrita){
    return(letrita=='A'||letrita=='E'||letrita=='I'||letrita=='O'||letrita=='U') ? letrita : '-';//Esto es un condicional
}

int main(){
    vector<char> letras;

    //Generamo letras para el vector
    for(int i=0; i<10; i++)	{
        letras.push_back('a' + i); //Cuando tenemos 'a'+ i, queremos decir que conforme vaya aumentando el iterador, el valor de i tambien, el cual representa la posicion de un valor de tipo char. 'a'=1, 'b'=2 y asi sucesivamente.
    }
    copy( letras.begin(), letras.end(), ostream_iterator<char>(cout, "|") );
    cout<<endl;

    //Desordenamos el vector letras
    random_shuffle(letras.begin(), letras.end());
    cout<<"\nVector desordenado"<<endl;
    copy( letras.begin(), letras.end(), ostream_iterator<char>(cout, "|") );
    cout<<endl;

    //Pasamos a mayusculas las letras del vector
    for_each(letras.begin(), letras.end(), mayusculas);
    cout<<"\nVector en mayusculas"<<endl;
    copy( letras.begin(), letras.end(), ostream_iterator<char>(cout, "|") );
    cout<<endl;

    //Imprimiendo solo las vocales
    cout<<"\nVocales del vector"<<endl;
    transform(letras.begin(), letras.end(), ostream_iterator<char>(cout,"|"), vocales);

    return 0;
} */

/* // Bibliotecas: Algoritmos STL - matematicos
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric> //Para utilizar su funcion acumulate.
#include <iterator>
#include <cstdlib>
#include <fstream>
using namespace std;

//Funcion logica para comprobar si un numero es positivo
template<class T>
bool EsPositivo(T valor){
	return (valor>=0);
}

template<class T>
bool EsNegativo(T valor){
	return (valor<=0);
}

int main(){
	vector<float> numeros;
	
	ifstream archivo("posicion.txt", ios::in);//Abrir archivo en modo lectura
	copy(istream_iterator<float>(archivo), istream_iterator<float>(), back_inserter(numeros)); //Copiamos los elementos del archivo hacia el vector de numeros. Cabe mencionar que en istream_iterator<float>(), si no le ponemos nada en los parentesis, se dice que el iterador llegara hasta el final. Es decir, hasta que sea NULL, lo que quiere decir que ya no habra nada. back_incerter sirve para copiar todos los elementos de mi archivo (desde principio a fin) en el vector numeros. Esta recive un contenedor y funciona comno un iterador. 
	
	//Calculamos el maximo y el minimo de los elementos del vector. *max_element y *min_element son ITERADORES.
	cout<<"Maximo: "<<*max_element(numeros.begin(), numeros.end())<<endl;
	cout<<"Maximo: "<<*min_element(numeros.begin(), numeros.end())<<endl;
	
	//Calculamos el valor promedio de los elementos del vector
	cout<<"\nValor promedio: " <<accumulate(numeros.begin(), numeros.end(), 0.0)/numeros.size()<<endl;//Calculamos la suma de todos los elementos del bector y despues la dividimos entre la cantidad de valores que posee el vector. El tercer parametro (0.0) indica el valor inicial con el que comienza la suma.
	
	//Calculamos el conteo de los numeros positivos
	cout<<"Numeros positivos: " <<count_if(numeros.begin(), numeros.end(), EsPositivo<float>);//cuenta todos los elementos que cumplen con un criterio que nosotros definimos.
	
	cout<<"\nNumeros negativos: " <<count_if(numeros.begin(), numeros.end(), EsNegativo<float>);
	
	return 0;
} */

/* // Bibliotecas: Algoritmos STL - Busqueda y ordenamientos
#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;

// Funcion para determinar numeros aleatorios
int NumerosAleatorios(){
    return rand() % 30;
}

// Funcion logica para calcular si un numero es par
template <class T>
bool EsPar(T x){
    return ((x % 2) == 0); // Si el residuo de la division de este valor es igual a 0, entonces retorna true. Si no, no retorna nada
}

int main(){
    vector<int> valores(10);
    // srand(time(NULL));
    generate(valores.begin(), valores.end(), NumerosAleatorios); // Generamos numeros aleatorios y los guardamos dentro de vector.

    cout << "Mostrando elementos del vector" << endl;
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|")); // Mostrando en pantalla el vector

    vector<int> pares; // Creamos un nuevo vector para almacenar los elementos pares

    vector<int>::iterator i = valores.begin();                            // Iterador para recorrer el vector de valores
    while ((i = find_if(i, valores.end(), EsPar<int>)) != valores.end()){ // El iterador "i" se iguala con find_if porque con esta funcion, vamos a buscar no solo un valor, sino todos los que se requieren para obtener los numeros pares. Los dos primeros son los intervalos del punto inicial y el punto final del vector, mientras que EsPar<int> es la funcion a la cual le mendaremos un valor de tipo int para que haga la verificacion de si es para o no lo es.
    
        pares.push_back(*i); // Agregamos los nuevos numeros pares al vector pares
        i++;
    }

    // Ordenar el vector pares de menor a mayor
    sort(pares.begin(), pares.end());

    // Mostramos el vector pares en pantalla
    cout << "\n\nArreglo de numeros pares" << endl;
    copy(pares.begin(), pares.end(), ostream_iterator<int>(cout, "|"));

    return 0;
} */

/* // Bibliotecas: Contenedor lineal deque
#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<char> letras;
    letras.push_front('C'); // Agregamos un elemento por el principio.
    letras.push_front('B');
    letras.push_front('A');

    letras.push_back('D'); // Agregamos un elemento por el final.
    letras.push_back('E');
    letras.push_back('F');

    for (int i = 0; i < letras.size(); i++){
        cout << letras[i] << "|";
    }

    letras.pop_front();
    letras.pop_back();
    cout << endl;

    for (int i = 0; i < letras.size(); i++){
        cout << letras[i] << "|";
    }

    return 0;
} */

/* // Bibliotecas: Contenedor lineal list
#include <iostream>
#include <list>

using namespace std;
int main(){
    list<int> datos;

    // Agregamos elementos
    datos.push_back(5);
    datos.push_back(1);
    datos.push_back(6);

    datos.push_front(2);
    datos.push_front(7);

    datos.sort();            // Ordenar elementos de menor a mayor
    list<int>::iterator i;   // Creamos el iterador
    i = datos.begin();       // Se inicializa el iterador al inicio de la lista
    while (i != datos.end()){// Recorrer la lista mientras el iterador sea diferente del valor final.
    
        cout << *i << "|"; // Imprimimos los elementos. "i" es un puntero, puesto que va a ir a la direccion de memoria de la lisa e imprimira lo que hay en ella.
        i++;
    }
    cout << endl;

    // Eliminar elementos de la lista
    datos.pop_back();
    datos.pop_front();
    i = datos.begin();
    while (i != datos.end()){
        cout << *i << "|";
        i++;
    }

    return 0;
} */

/* // Bibliotecas: Contenedor lineal vector
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    // (1) Este metodo es solo si nosotros definimos la cantidad de vectores que poseeel arreglo
    // vector<int> numeros(5); //Arreglos de enteros
    // numeros[0]=5;
    // numeros[1]=10;
    // numeros[2]=1;
    // numeros[3]=15;
    // numeros[4]=20;

    // (2) Este metodo es solo si nosotros queremos ir agregando mas valores aun arreglo que espacios indefinido.
    vector<int> numeros;  // Arreglos de enteros
    numeros.push_back(5); // Agrega elementos al final del arreglo
    numeros.push_back(10);
    numeros.push_back(1);
    numeros.push_back(15);
    numeros.push_back(20);

    // numeros[2] = 7; //Si nosotros colocamos esto, entonces el valor que se encuentra en ese vector, cambiaria. En este caso, en lugar de 1 seria 7 ahora.

    // Mostrar los elementos del arreglo del vector
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << "|";
    }

    // numeros.pop_back();
    numeros.erase(numeros.begin() + 1, numeros.begin() + 3);

    cout << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << "|";
    }

    return 0;
} */

/* // Bibliotecas: Contenedor asociativo Set
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cstdlib>
#include <fstream>
#include <set> //para set y multiset
using namespace std;

int main(){
    set<int> valores; //Creando un conjunto de datos. (Sets are containers that store unique elements following a specific order.)

    //Insertamos los elementos en el conjunto
    valores.insert(5);
    valores.insert(3);
    valores.insert(10);
    valores.insert(1);
    valores.insert(15);

    //Mostrar nuestro set en pantalla
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout<<endl;

    valores.insert(3); //Con la funcion set es imposible duplicar los mismos valores
    valores.insert(10);

    //Busqueda de un elemento dentro de set
    set<int>::iterator i = valores.find(16);
    if(i != valores.end()){
        cout<<"\nEl elemento "<<*i<< " si ha sido agregado"<<endl;
    }

    else{
        cout<<"\nEl elemento no ha sido encontrado"<<endl;
    }

    //Eliminar un elemento del set (conjunto)
    valores.erase(1);

    //Mostrando nuestro set en pantalla
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout<<endl;

    return 0;
} */

/* // Bibliotecas: Contenedor asociativo Multiset
#include <iostream>
#include <list>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cstdlib>
#include <fstream>
#include <set> //para set y multiset
                    using namespace std;

int main(){
	multiset<int> valores;
	
	//Insertamos elementos al multiset
	valores.insert(10);
	valores.insert(2);
	valores.insert(5);
	valores.insert(20);
	valores.insert(3);
	
	//Mostrando en pantalla
	copy(valores.begin(), valores.end(), ostream_iterator<int>(cout,"|"));
	cout<<endl;
	
	//Insertar valores duplicados
	valores.insert(10);
	valores.insert(3);
	valores.insert(3);
	valores.insert(3);
	
	//Mostrando en pantalla
	copy(valores.begin(), valores.end(), ostream_iterator<int>(cout,"|"));
	cout<<endl;
	
	//Buscar un elemento en el multiset
	multiset<int>::iterator i = valores.find(3);
	if(i != valores.end()){
		cout<<"\nEl elemento" << *i << " SI ha sido encontrado"<<endl;
	}
	
	else{
		cout<<"\nEl elemento NO ha sido encontrado"<<endl;
	}
	
	//Contar cuantas veces aparece un determinado elemento
	cout<<"\nEl elemento 2 aparece "<<valores.count(3)<< " veces en el multiset"<<endl;
	
	//Eliminar un elemento del multiset
	valores.erase(3);
	copy(valores.begin(), valores.end(), ostream_iterator<int>(cout,"|"));
	cout<<endl;
	
	return 0;
} */

/* // Bibliotecas: Contenedor asociativo map
#include <iostream>
#include <iterator>
#include <map> //para set y multiset
using namespace std;

typedef pair<int, string> par;//Usamos esto para crear un alias y asi tener que evitar poner pair<int, string> tantas veces, tal y como se muestra en la linea 17 a 19

int main(){
    map<int,string> valores;//Creamos un mapa <clave,valor>. Recordar que "clave" = "first", y "valor" = second

    //Insertar elementos en el map
    valores.insert(par (5,"German"));
    valores.insert(par (2,"Mancilla"));
    valores.insert(par (1,"Chavez"));
    valores.insert(par (3,"SS22"));

//  valores.insert(pair<int, string>(5,"German"));
// 	valores.insert(pair<int, string>(2,"Mancilla"));
// 	valores.insert(pair<int, string>(1,"Chavez"));

    //Mostrando el map en pantalla
    map<int, string>::iterator i;
    cout<<"Despliegue del map en pantalla"<<endl;
    for(i = valores.begin(); i != valores.end(); i++){
        cout<<"Clave:"<< i->first <<" | Valor: "<< i->second <<endl;
    }
    cout<<endl;

    //Insertar claves duplicadas
    valores.insert(par(1, "Kangreburguito"));
    cout<<"Duplicacion de claves (sin exito)"<<endl;
    for(i = valores.begin(); i != valores.end(); i++){
        cout<<"Clave:"<< i->first <<" | Valor: "<< i->second <<endl;
    } //No se pueden duplicar claves con el mismo numero cuando utilizamos map
    cout<<endl;

    //Modificar un valor de una clave existente
    valores[1] = "Karla";   //Sintaxis para poder cambiar unicamente el valor de una clave existente (recordar que no pudemos DUPLICAR la misma clave pero si podemos crear y modificar otras).
    valores[8] = "Beatriz"; //Creamos otra clave y valor, aunque tambien lo podemos hacer utilizando " valores.insert(par (8,"Beatriz")); ". Cabe mencionar que la primera se utiliza comunmente cuando se desea crear nuevas claves y valores. Pero en el caso de la segunda, se utilizan normalmente par modificar algo.
    cout<<"Modificacion y adicion de el valor de una clave"<<endl;

    for(i = valores.begin(); i != valores.end(); i++)	{
        cout<<"Clave:"<< i->first <<" | Valor: "<< i->second <<endl;
    }
    cout<<endl;

    //Buscar un elemento en el map
    i = valores.find(2);
    if(i != valores.end()){
        cout<<"Valor encontrado "<< i->second <<endl;
    }
    else{
        cout<<"Valor no encontrado"<<endl;
    }

    //Eliminar un elemento del map
    valores.erase(1);
    cout<<"\nEliminacion de valor"<<endl;
    for(i = valores.begin(); i != valores.end(); i++)	{
        cout<<"Clave:"<< i->first <<" | Valor: "<< i->second <<endl;
    }
    cout<<endl;

    return 0;
} */

/* // Bibliotecas: Contenedor asociativo Multimap
#include <iostream>
#include <iterator>
#include <map> //para set y multiset
using namespace std;

typedef pair<int, string> par;//Usamos esto para crear un alias y asi tener que evitar poner pair<int, string> tantas veces, tal y como se muestra en la linea 17 a 19

int main(){
    multimap<int,string> valores;//Creamos un multimap <clave,valor>. Recordar que "clave" = "first", y "valor" = second

    //Insertar valores
    valores.insert(par(3, "Chavez"));
    valores.insert(par(1, "German"));
    valores.insert(par(5, "Asesino"));
    valores.insert(par(2, "Mancilla"));

    //Insertar claves duplicadas
    valores.insert(par(1, "Kangreburguito"));
    valores.insert(par(5, "Dui"));
    valores.insert(par(5, "AMLO"));
    cout<<"Duplicacion de claves"<<endl;

    multimap<int, string>::iterator i;
    for(i = valores.begin(); i != valores.end(); i++){
        cout<<"Clave:"<< i->first <<" | Valor: "<< i->second <<endl;
    } //Con multimap si podemos duplicar y tener las mismas claves
    cout<<endl;

    //Conteo de las claves
    int clave = 1;
    cout<<"Conteo de la clave "<<clave<<": "<<valores.count(clave)<<endl;
    for( i=valores.lower_bound(clave); i!=valores.upper_bound(clave); i++){
        cout<< i->second <<" | ";
    }

    return 0;
} */

/* // Bibliotecas: Iterators - forward iterators
#include <iostream>
#include <fstream> //para archivos
#include <iterator>//para streams_iterator
#include <vector>
#include <cstdlib>
using namespace std;

int main(){
    ifstream archivo;
    archivo.open("AgendaTelefonica.txt", ios::in);

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    istream_iterator<char> p(archivo);// Iterador para char
    vector<char> frase;

    while(!archivo.eof()){//Mientras no sea el final del archuvo
        frase.push_back(*p);//Almacenamos el caracter por el que vamos
        p++;
    }

    //Mostramos el vector frase
    for(int i=0;i<frase.size(); i++){
        cout<<frase[i];
    }
    cout<<endl;

    archivo.close();

    return 0;
} */

/* // Bibliotecas: Iterators - Random iterators
#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>
using namespace std;

// Funcion template para mostrar los elementos de un contenedor
template <class iter>
void MostrarEnPantalla(iter inicio, iter final){
    while (inicio != final){
        cout << *inicio << "|";
        inicio++;
    }
}

int main(){
    vector<char> letras(10); // Creando el vector de 10 elementos char

    // Aregando elementos aleatorios al vector
    // srand(time(NULL));
    for (int i = 0; i < 10; i++){
        letras[i] = 'A' + (rand() % 26);
    }

    // Visualizar los elementos del vector
    MostrarEnPantalla(letras.begin(), letras.end());
    cout << endl;

    // Visualizar los elementos del vector al reves
    MostrarEnPantalla(letras.rbegin(), letras.rend());
    cout << endl;

    // Visualizar los elementos del medio del vector (1-8)
    MostrarEnPantalla(letras.begin() + 1, letras.end() - 1);
    cout << endl;

    return 0;
} */



//         $$$$$$$$$$$$$$$ Other codes $$$$$$$$$$$$$$$



/* // 0. Practica de lista
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

void busca(string *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, const int, const float, const string);
void cambio_flotante(float *Elemento1, float *Elemento2);
void cambio_cadena(string *Elemento1, string *Elemento2);
void seleccion(string *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, float *const, const int);

int main(){
    system("mode con: cols=200 lines=100 ");
    char resp;
    float lan;
    string carrera;
    int x;
    cout << "Ingrese la carrera: ";
    getline(cin, carrera, '\n');
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

    for (int i = 0; i < x; i++){
        regula1[i] = 0;
        regula2[i] = 0;
        regula3[i] = 0;
        regula4[i] = 0;
        regula5[i] = 0;
        regula6[i] = 0;
    }

    for (int i = 0; i < x; i++){
        cout << "Ingrese el nombre del alumno: (Terminar nombre con .)" << endl;
        getline(cin, nombre[i], '.');
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

        if (unidad1[i] < 70){
            cout << "Ingrese la calificacion de la 1era unidad en regularizacion: ";
            cin >> regula1[i];

            if (regula1[i] > unidad1[i]){
                promedio[i] += regula1[i];
            }

            else{
                promedio[i] += unidad1[i];
            }
        }

        else{
            promedio[i] += unidad1[i];
        }

        if (unidad2[i] < 70){
            cout << "Ingrese la calificacion de la 2da unidad en regularizacion: ";
            cin >> regula2[i];
            if (regula2[i] > unidad2[i]){
                promedio[i] += regula2[i];
            }

            else{
                promedio[i] += unidad2[i];
            }
        }

        else{
            promedio[i] += unidad2[i];
        }

        if (unidad3[i] < 70){
            cout << "Ingrese la calificacion de la 3era unidad en regularizacion: ";
            cin >> regula3[i];
            if (regula3[i] > unidad3[i]){
                promedio[i] += regula3[i];
            }

            else{
                promedio[i] += unidad3[i];
            }
        }
        else{
            promedio[i] += unidad3[i];
        }
        if (unidad4[i] < 70){
            cout << "Ingrese la calificacion de la 4ta unidad en regularizacion: ";
            cin >> regula4[i];
            if (regula4[i] > unidad4[i]){
                promedio[i] += regula4[i];
            }
            else{
                promedio[i] += unidad4[i];
            }
        }
        else{
            promedio[i] += unidad4[i];
        }

        if (unidad5[i] < 70){
            cout << "Ingrese la calificacion de la 5ta unidad en regularizacion: ";
            cin >> regula5[i];
            if (regula5[i] > unidad5[i]){
                promedio[i] += regula5[i];
            }

            else{
                promedio[i] += unidad5[i];
            }
        }

        else
        {
            promedio[i] += unidad5[i];
        }

        if (unidad6[i] < 70){
            cout << "Ingrese la calificacion de la 6xta unidad en regularizacion: ";
            cin >> regula6[i];

            if (regula6[i] > unidad6[i]){
                promedio[i] += regula6[i];
            }

            else{
                promedio[i] += unidad6[i];
            }
        }

        else{
            promedio[i] += unidad6[i];
        }
        promedio[i] = promedio[i] / 6;
    }
    system("cls");
    cout << "Lista sin ningun orden." << endl;
    cout << setw(78) << " "<< "| Unidad 1 | Unidad 2 | Unidad 3 | Unidad 4 | Unidad 5 | Unidad 6 |" << endl;
    cout << "# |"<< " Carrera" << setw(20) << "| Nombre" << setw(52) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(7) << "| R  |"<< " Final |" << endl;

    for (int i = 0; i < x; i++){
        cout << i + 1 << setw(2) << "|" << setw(20) << left << carrera << "|" << setw(54) << left << nombre[i] << "|" << setw(5) << left << unidad1[i] << "|" << setw(4) << left << regula1[i] << "|" << setw(5) << left << unidad2[i] << "|" << setw(4) << left << regula2[i] << "|" << setw(5) << left << unidad3[i] << "|" << setw(4) << left << regula3[i] << "|" << setw(5) << left << unidad4[i] << "|" << setw(4) << left << regula4[i] << "|" << setw(5) << left << unidad5[i] << "|" << setw(4) << left << regula5[i] << "|" << setw(5) << left << unidad6[i] << "|" << setw(4) << left << regula6[i] << "|" << setw(7) << left << promedio[i] << "|" << endl;
    }

    seleccion(nombre, unidad1, unidad2, unidad3, unidad4, unidad5, unidad6, regula1, regula2, regula3, regula4, regula5, regula6, promedio, x);
    cout << " Acomodado por promedio Final mas alto al menor." << endl;
    cout << setw(78) << " "<< "| Unidad 1 | Unidad 2 | Unidad 3 | Unidad 4 | Unidad 5 | Unidad 6 |" << endl;
    cout << "# |"<< " Carrera" << setw(20) << "| Nombre" << setw(52) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(7) << "| R  |"<< " Final |" << endl;

    for (int i = 0; i < x; i++){
        cout << i + 1 << setw(2) << "|" << setw(20) << left << carrera << "|" << setw(54) << left << nombre[i] << "|" << setw(5) << left << unidad1[i] << "|" << setw(4) << left << regula1[i] << "|" << setw(5) << left << unidad2[i] << "|" << setw(4) << left << regula2[i] << "|" << setw(5) << left << unidad3[i] << "|" << setw(4) << left << regula3[i] << "|" << setw(5) << left << unidad4[i] << "|" << setw(4) << left << regula4[i] << "|" << setw(5) << left << unidad5[i] << "|" << setw(4) << left << regula5[i] << "|" << setw(5) << left << unidad6[i] << "|" << setw(4) << left << regula6[i] << "|" << setw(7) << left << promedio[i] << "|" << endl;
    }
    cout << "�Desea buscar por promedio?(S/N)";
    cin >> resp;

    while (resp == 'S' || resp == 's'){
        cout << "�Que promedio?" << endl;
        cin >> lan;
        busca(nombre, unidad1, unidad2, unidad3, unidad4, unidad5, unidad6, regula1, regula2, regula3, regula4, regula5, regula6, promedio, x, lan, carrera);
        cout << "Desea buscar por otro promedio? (S/N)" << endl;
        cin >> resp;
    }
    return 0;
}

void seleccion(string *const nomb, float *const un1, float *const un2, float *const un3, float *const un4, float *const un5, float *const un6, float *const re1, float *const re2, float *const re3, float *const re4, float *const re5, float *const re6, float *const prom, const int cont){
    float temp;
    int may;

    for (int i = 0; i < cont - 1; i++){
        for (int j = i; j < cont; j++){
            if (j == i){
                may = j;
            }
            else{
                if (prom[j] > prom[may]){
                    may = j;
                }
            }
        }
        cambio_flotante(&un1[may], &un1[i]);
        cambio_flotante(&un2[may], &un2[i]);
        cambio_flotante(&un3[may], &un3[i]);
        cambio_flotante(&un4[may], &un4[i]);
        cambio_flotante(&un5[may], &un5[i]);
        cambio_flotante(&un6[may], &un6[i]);
        cambio_flotante(&re1[may], &re1[i]);
        cambio_flotante(&re2[may], &re2[i]);
        cambio_flotante(&re3[may], &re3[i]);
        cambio_flotante(&re4[may], &re4[i]);
        cambio_flotante(&re5[may], &re5[i]);
        cambio_flotante(&re6[may], &re6[i]);
        cambio_flotante(&prom[may], &prom[i]);
        cambio_cadena(&nomb[may], &nomb[may]);
    }
}

void cambio_flotante(float *Elemento1, float *Elemento2){
    float almacena = *Elemento1;
    *Elemento1 = *Elemento2;
    *Elemento2 = almacena;
}
void cambio_cadena(string *Elemento1, string *Elemento2){
    string almacena = *Elemento1;
    *Elemento1 = *Elemento2;
    *Elemento2 = almacena;
}

void busca(string *const nomb, float *const un1, float *const un2, float *const un3, float *const un4, float *const un5, float *const un6, float *const re1, float *const re2, float *const re3, float *const re4, float *const re5, float *const re6, float *const prom, const int cont, const float m, const string dame){
    bool band = false;
    int conta = 0;
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
    for (int i = 0; i < cont; i++){
        if (prom[i] == m){
            band = true;
            vicius[conta] = nomb[i];
            ust1[conta] = un1[i];
            ust2[conta] = un2[i];
            ust3[conta] = un3[i];
            ust4[conta] = un4[i];
            ust5[conta] = un4[i];
            ust6[conta] = un5[i];
            irl1[conta] = re1[i];
            irl2[conta] = re2[i];
            irl3[conta] = re3[i];
            irl4[conta] = re4[i];
            irl5[conta] = re5[i];
            irl6[conta] = re6[i];
            iten[conta] = prom[i];
            conta++;
        }
    }

    if (band == false)
    {
        cout << "El promedio " << m << " no se encuentra." << endl;
    }

    else
    {
        cout << "Alumnos con el promedio de " << m << endl;
        cout << setw(78) << " "<< "| Unidad 1 | Unidad 2 | Unidad 3 | Unidad 4 | Unidad 5 | Unidad 6 |" << endl;
        cout << "# |"<< " Carrera" << setw(20) << "| Nombre" << setw(52) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(5) << "| R " << setw(6) << "|  O " << setw(7) << "| R  |"<< " Final |" << endl;

        for (int i = 0; i < conta; i++){
            cout << i + 1 << setw(2) << "|" << setw(20) << left << dame << "|" << setw(54) << left << vicius[i] << "|" << setw(5) << left << ust1[i] << "|" << setw(4) << left << irl1[i] << "|" << setw(5) << left << ust2[i] << "|" << setw(4) << left << irl2[i] << "|" << setw(5) << left << ust3[i] << "|" << setw(4) << left << irl3[i] << "|" << setw(5) << left << ust4[i] << "|" << setw(4) << left << irl4[i] << "|" << setw(5) << left << ust5[i] << "|" << setw(4) << left << irl5[i] << "|" << setw(5) << left << ust6[i] << "|" << setw(4) << left << irl6[i] << "|" << setw(7) << left << iten[i] << "|" << endl;
        }
    }
} */

/* // 1. Conversion entre binario y decimal
#include <iostream>
#include <tr1/unordered_map>
using namespace std;


string to_base(int number,int base){
	string bases = "0123456789ABCDEF";
	string result = "";

	while(number > 0)
	{
		result = bases[number % base] + result;
		number /= base;
	}
	return result;
}

int main(int argc, char const *argv[]){
	tr1::unordered_map<char,int> map;	
	string number;
	int base1,base2;
	int index = 1,integerresult = 0;	
	string result = "";
	string bases = "0123456789ABCDEF";

	map['0'] = 0;
	map['1'] = 1;
	map['2'] = 2;
	map['3'] = 3;
	map['4'] = 4;
	map['5'] = 5;
	map['6'] = 6;
	map['7'] = 7;
	map['8'] = 8;
	map['9'] = 9;
	map['A'] = 10;
	map['B'] = 11;
	map['C'] = 12;
	map['D'] = 13;
	map['E'] = 14;
	map['F'] = 15;	
	
	cout << "Ingresa: [numero] [base 1] [base 2]" << endl;
	cin >> number >> base1 >> base2;

	for(int i=number.size()-1; i>=0; i--){
		integerresult += map[number[i]] * index;
		index *= base1;
	}	
	cout << "Resultado: " << to_base(integerresult,base2) << endl;
	return 0;
} */

/* // 2. Suma y resta de numeros binarios
#include<iostream>
#include<string.h>
using namespace std;

class bin
{
    char a[32],b[32],c[32];
    int s1,s2,m ;
    char cary;
    public:

    bin()
    {
        cary='0';
        s1=0;s2=0;m=0;
        for(int i=0;i<32;i++)
        {
            a[i]='0';
            b[i]='0';
            c[i]='0';
        }
    }
    
    void getdata()
    {
        char m[32],n[32];
        cout<<"Ingresa el primer numero binario \n";
        gets(m);
        cout<<"Ingresa el segunto numero binario \n";
        gets(n);
        s1=strlen(m);
        s2=strlen(n);
        for(int i=31,j=s1-1;j>=0;){
            if(m[j]!='0'&&m[j]!='1'){
                system("cls");
                cout<<"\nNo es un numero binario";
                exit (1);
            }
            a[i]=m[j];
            i--;j--;
        }
        for(int i=31,j=s2-1;j>=0;){
            if(n[j]!='0'&&n[j]!='1'){
                system("cls");
                cout<<"\nNo es un numero binario";
                exit (1);
            }
            b[i]=n[j];
            i--;j--;
        }
        system("cls");//edit as per compiler
    }
    void sub();
    void com();
    void add();
    void display();
};

void bin::sub(){
    m=1;
    com();
    add();
}

void bin::com(){
    int count=0;
    for(int i=31;i>=0;i--){
        if(count>0){
            if(b[i]=='1'){
                b[i]='0';
            }
            else{
                b[i]='1';
            }
        }
        if(b[i]=='1'){
            count++;
        }
    }
}

void bin::add(){
    cout<<"\a";
    for(int i=31;i>=0;i--){
        if(cary=='0'&&a[i]=='0'&&b[i]=='0'){
            cary='0';
            c[i]='0';
        }
        else if(cary=='0'&&a[i]=='0'&&b[i]=='1'){
            cary='0';
            c[i]='1';
        }
         else if(cary=='0'&&a[i]=='1'&&b[i]=='0'){
            cary='0';
            c[i]='1';
        }
        else if(cary=='0'&&a[i]=='1'&&b[i]=='1'){
            cary='1';
            c[i]='0';
        }
        else if(cary=='1'&&a[i]=='1'&&b[i]=='1'){
            cary='1';
            c[i]='1';
        }
        else if(cary=='1'&&a[i]=='0'&&b[i]=='0'){
            cary='0';
            c[i]='1';
        }
        else if(cary=='1'&&a[i]=='0'&&b[i]=='1'){
            cary='1';
            c[i]='0';
        }
        else if(cary=='1'&&a[i]=='1'&&b[i]=='0'){
            cary='1';
            c[i]='0';
        }
        else if(cary=='1'&&a[i]=='1'&&b[i]=='1'){
            cary='1';
            c[i]='1';
        }
    }
}

void bin::display(){
    int n;
    cout<<"\nHasta que numero de bits quiere desplegar el resultado?\n->";
    cin>>n;
    cout<<"\nPrimer numero binario is:\n";

    for(int i=32-n;i<32;i++){
        cout<<a[i];
    }
    cout<<endl;

    if(m==1)
    cout<<"\n2's complemento del segundo numero es :\n";
    else{
    cout<<"\nSegundo numero binario is:\n";
    }

    for(int i=(32-n);i<32;i++){
        cout<<b[i];
    }

    cout<<endl;
    cout<<"El resultado es: \n";

    for(int i=32-n;i<32;i++){
        cout<<c[i];
    }
    cout<<endl;
}

int main(){
    char y;y='y';
    bin b;
    int ch;
    b.getdata();
    while(y=='Y'||y=='y'){
    cout<<"\tMenu\n-------------------------------------------------------------------------------\n";
    cout<<"1. Suma\n2. Resta\n\t->";
    cin>>ch;
    
    switch(ch){
        case 1:
        b.add();
        b.display();break;
        
        case 2:
        cout<<"Aqui esta el resultado de la resta\n";
        b.sub();
        b.display();break;
        default:
        cout<<"\nEleccion invalida";
    }
    cout<<"\nPresiona Y para continuar\n->";
    cin>>y;
    }
    return 0;
} */

/* // 3. Metodo de both
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

void binary();
void sum(int num[]);
void arithmetic_shift();

int comparison[5] = {1, 0, 0, 0, 0};
int first_number[5] = {0}, second_number[5] = {0}, anumcp[5] = {0};
int compare_num1[5] = {0}, compare_num2[5] = {0}, product[5] = {0}, result[5] = {0};
int num1 = 0, num2 = 0, num3 = 0;
int m = 0, n = 0;

int main(){
    int count, x = 0;
    cout << "Ingresa 2 numeros a multiplicar \n"<< endl;
    do{
        cout << "Valor ingresado A:\t" << endl;
        cin >> num1;
        cout << "Valor ingresado B:\t" << endl;
        cin >> num2;
    } while (num1 >= 16 || num2 >= 16);

    cout << "\nProducto a realizar de %d * %d = %d" << num1 << num2 << num1 * num2 << endl;
    binary();
    cout << "\nEquivalentes en binario\n"<< endl;
    cout << "\nA: " << endl;
    for (count = 4; count >= 0; count--){
        cout << first_number[count];
    }

    cout << "\nB: ";

    for (count = 4; count >= 0; count--){
        cout << second_number[count];
    }
    cout << "\nB'+ 1 = ";

    for (count = 4; count >= 0; count--){
        cout << compare_num2[count];
    }
    cout << "\n";

    for (count = 0; count < 5; count++){
        if (first_number[count] == x){
            cout << "\n-->";
            arithmetic_shift();
            x = first_number[count];
        }
        else if (first_number[count] == 1 && x == 0){
            cout << "\n-->";
            cout << "\nSUB B: ";
            sum(compare_num2);
            arithmetic_shift();
            x = first_number[count];
        }
        else{
            cout << "\n-->";
            cout << "\nADD B: ";
            sum(second_number);
            arithmetic_shift();
            x = first_number[count];
        }
    }
    cout << "\nProducto:\t";
    for (count = 4; count >= 0; count--){
        cout << product[count];
    }
    for (count = 4; count >= 0; count--){
        cout << anumcp[count];
    }
    cout << "\n";
    return 0;
}

void binary(){
    m = fabs(num1);
    n = fabs(num2);
    int r2, remainder, count, temp;
    for (count = 0; count < 5; count++){
        remainder = m % 2;
        m = m / 2;
        r2 = n % 2;
        n = n / 2;
        first_number[count] = remainder;
        anumcp[count] = remainder;
        second_number[count] = r2;
        if (r2 == 0){
            compare_num2[count] = 1;
        }
        if (remainder == 0){
            compare_num1[count] = 1;
        }
    }
    num3 = 0;
    for (count = 0; count < 5; count++){
        result[count] = comparison[count] + compare_num2[count] + num3;
        if (result[count] >= 2){
            num3 = 1;
        }
        else{
            num3 = 0;
        }
        result[count] = result[count] % 2;
    }
    for (count = 4; count >= 0; count--){
        compare_num2[count] = result[count];
    }
    if (num1 < 0){
        num3 = 0;
        for (count = 4; count >= 0; count--){
            result[count] = 0;
        }
        for (count = 0; count < 5; count++){
            result[count] = comparison[count] + compare_num1[count] + num3;
            if (result[count] >= 2){
                num3 = 1;
            }
            else{
                num3 = 0;
            }
            result[count] = result[count] % 2;
        }
        for (count = 4; count >= 0; count--){
            first_number[count] = result[count];
            anumcp[count] = result[count];
        }
    }

    if (num2 < 0){
        for (count = 0; count < 5; count++){
            temp = second_number[count];
            second_number[count] = compare_num2[count];
            compare_num2[count] = temp;
        }
    }
}

void sum(int num[]){
    int count;
    num3 = 0;

    for (count = 0; count < 5; count++){
        result[count] = product[count] + num[count] + num3;
        if (result[count] >= 2){
            num3 = 1;
        }
        else{
            num3 = 0;
        }
        result[count] = result[count] % 2;
    }

    for (count = 4; count >= 0; count--){
        product[count] = result[count];
        cout << "%d" << product[count];
    }
    cout << ":";

    for (count = 4; count >= 0; count--){
        cout << "%d" << anumcp[count];
    }
}

void arithmetic_shift(){
    int x = product[4], y = product[0], count;

    for (count = 1; count < 5; count++){
        product[count - 1] = product[count];
    }
    product[4] = x;

    for (count = 1; count < 5; count++){
        anumcp[count - 1] = anumcp[count];
    }
    anumcp[4] = y;
    cout << "\nShift aritmetico";

    for (count = 4; count >= 0; count--){
        cout << "%d" << product[count];
    }
    cout << ":";

    for (count = 4; count >= 0; count--){
        cout << "%d" << anumcp[count];
    }
} */

/* // 4. conversion de numeros de base n a base m
#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
using namespace std; 

void llenaArreglo (int num [], int digitos, int base1);
int convertirAdecimal (int num [], int digitos, int base1, int base2);
void convertirAbase (int decimal, int base2);
int checabase ();
int checabase2 ();

int main()
{
    int digitos;
    int base1, base2;
    int decimal;

    cout<<"Este programa convierte numeros de ciertabase a una distinta."<<"\n\n";
    cout<<"La base maxima de conversion es Hexadecimal (16)."<<"\n\n";

    base1 = checabase ();

    cout<<"\nDe cuantos digitos es el numero a convertir?\n=> ";
    cin>>digitos;
    int num [digitos];

    cout<<"\nIntroduce el numero entero a convertir, digito a digito comenzando con la cifra m�s significativa"<<endl;

    llenaArreglo (num, digitos, base1);
    decimal = convertirAdecimal (num, digitos, base1, base2);
    base2 = checabase2();
    
    cout<<"\n";
    
    convertirAbase (decimal, base2);
    system ("PAUSE");
    return 0;
}

int checabase ()
{
    int x;
    cout<<"De que base es el numero a convertir?\n=>";
    cin>>x;
    if(x >=17)
    {
        cout<<"\n\n**El numero insertado excede la capacidad de por favor ingrese una base menor a 16**\n";
        cout<<"De que base es el numero a convertir?\n";
        cin>>x;
    }

    if(x <=-1)
    {
        cout<<"\n\n**El numero insertado excede la capacidad, por favor ingrese una base mayor a cero**\n";
        cout<<"De que base es el numero a convertir?\n";
        cin>>x;
    }
    return x;
}

int checabase2 ()
{
    int x;
    cout<<"\n\nA que base desea convertirlo? \n";
    cin>>x;
    if(x >=17)
    {
        cout<<"\n\n**El numero insertado excede la capacidad, por favor ingrese una base menor a 16**\n";
        cout<<"\nA que base desea convertirlo?\n";
        cin>>x;
    }

    if(x <=-1)
    {
        cout<<"\n**El numero insertado excede la capacidad por favor ingrese una base mayor a cero**\n\n";
        cout<<"\n\nA que base desea convertirlo? \n";
        cin>>x;
    }
    return x;
}

void llenaArreglo (int num [], int digitos, int base1)
{
    for (int i=0; i<digitos; i++)
    {
        cout<<"\nIntroduce el digito numero ["<<i+1<<"]: ";
        cin>>num[i];
        if (num[i]>=base1 || num[i]<0)
        {
            cout<<"\n**Numero no valido para esta base**\n";
            cout<<"\nIntroduce el digito numero %d\n"<<i+1;
            cin>>num[i];
        }
    }

    cout<<"\nEl numero que deseas convertir es: ";
    for (int i=0; i<digitos; i++)
        cout<<num [i];
}

int convertirAdecimal (int num [], int digitos, int base1, int base2)
{
    int pot, i;
    int x=0;
    for (i=digitos-1, pot=0; i>=0, pot<digitos; i--, pot++)
    {
        x+= (pow (base1, pot)*num[i] );
    }
    return x;
}

void convertirAbase (int decimal, int base2)
{
    int cociente,residuo,cont, i,j;
    int conv [50];
    i=0;
    do{
        cociente = decimal/base2;
        residuo = decimal%base2;
        conv[i] = residuo;
        decimal = cociente;
        i+=1;
    }while (cociente>0);

    cout<<"La conversion es: ";
    for (cont=i-1; cont>=0; cont--)
    {
        cout<<conv[cont];
    }
    cout<<"\n";
} */

/* // 5. Teoria de paso de parametros por valor y referencia
#include <iostream>
#include <stdlib.h>

int main(int argc, char *argv[]){ 
    
    // std::cout << std::endl;
    int number = 0, *pointer = new int;

    std::cout << "function 1\na value is required, a variable is given\nmain scope:\t" << &number << std::endl;
    function_1(number);

    std::cout << "function 2\na reference is required, a variable is given\nmain scope:\t" << &number << std::endl;
    function_2(number);

    std::cout << "function 3\na pointer is required, a reference is given\nmain scope:\t" << &number << std::endl;
    function_3(&number);

    std::cout << "function 3\na pointer is required, a pointer is given\nmain scope:\t" << pointer << std::endl;
    function_3(pointer);

    std::cout << "function 4\na pointer & reference is required, a pointer is given\nmain scope:\t" << pointer << std::endl;
    function_4(pointer);

    // POINTERS
    std::cout << "the pointers consist of two operable elements:\n1. the indicated memory location (pointer)\n2. the value in the position (* pointer)" << '\n'<< std::endl;

    std::cout << "function mod 1\na pointer is required, a pointer is given\nmain scope: " << pointer << std::endl;
    mod_pointer_1(pointer);
    std::cout << "main scope, after mod function: " << pointer << '\n'<< std::endl;

    std::cout << "function mod 2\na pointer is required, a pointer is given\nmain scope: " << *pointer << std::endl;
    mod_pointer_2(pointer);
    std::cout << "main scope, after mod function: " << *pointer << '\n'<< std::endl;

    std::cout << "function mod 3\na pointer & reference is required, a pointer is given\nmain scope: " << pointer << std::endl;
    mod_pointer_3(pointer);
    std::cout << "main scope, after mod function: " << pointer << '\n'<< std::endl;

    return 0;
}

void function_1(int value){
    std::cout << "function scope:\t" << &value << '\n'<< std::endl;
}

void function_2(int &reference){
    std::cout << "function scope:\t" << &reference << '\n'<< std::endl;
}

void function_3(int *pointer){
    std::cout << "function scope:\t" << pointer << '\n'<< std::endl;
}

void function_4(int *&pointer_reference){
    std::cout << "function scope:\t" << pointer_reference << '\n'<< std::endl;
}

void mod_pointer_1(int *pointer){
    std::cout << "function scope, before mod the position: " << pointer << std::endl;
    pointer = new int;
    std::cout << "function scope, after mod the position: " << pointer << std::endl;
}

void mod_pointer_2(int *pointer){
    std::cout << "function scope, before mod the value: " << *pointer << std::endl;
    *pointer = 5;
    std::cout << "function scope, after mod the value: " << *pointer << std::endl;
}

void mod_pointer_3(int *&pointer){
    std::cout << "function scope, before mod the position: " << pointer << std::endl;
    pointer = new int;
    std::cout << "function scope, after mod the position: " << pointer << std::endl;
} */





/* // Ejercicio teorico: Punteros
// punteros - declaracion de punteros

// &n = La direccion de n
// *n = La variable cuya direccion esta almacenada en n


#include<iostream>
#include<conio.h>
using namespace std;

int main (){
    int num = 20;
    int *dir_num;

    dir_num = &num;

    cout<<"Numero: "<<*dir_num<<endl;
    cout<<"Direccion de memoria: "<<dir_num<<endl;
    getch();
    return 0;
} */

/* // Ejercicio teorico: Estructuras
#include<iostream>
#include<conio.h>
using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}res, *puntero_persona = &res;

void pedirDatos(); //Prototipo de funcion
void mostrarDatos(Persona *puntero_persona);

int main(){
    pedirDatos();
    mostrarDatos(puntero_persona);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite su nombre: ";
    cin.getline(puntero_persona->nombre,30,'\n'); // (*puntero_persona).nombre = puntero_persona->nombre
    cout<<"Digite su edad: ";
    cin>>puntero_persona->edad;                   // (*puntero_persona).edad = puntero_persona->edad
}

void mostrarDatos(Persona *puntero_persona){
    cout<<"\nSu nombre es: "<<puntero_persona->nombre<<endl;
    cout<<"Su edad es: "<<puntero_persona->edad<<endl;
} */

/* // Ejercicio teorico: Transmision de direcciones
// Vamos a cambiar el valor de 2 variables

#include<iostream>
#include<stdlib.h>
using namespace std;

void intercambio(float *, float *);//Prototipo
float numero1, numero2, aux;

int main(){
    cout<<endl<<"Digite el numero 1: ";
    cin>>numero1;
    cout<<endl<<"Digite el numero 2: ";
    cin>>numero2;

    intercambio(&numero1,&numero2); //SIEMPRE EL AMPERSAND ANTE DEL NOMBRE DE LA VARIABLE


    system("pause");
    return 0;
}

void intercambio(float *numero1, float*numero2){
    aux = *numero1;
    *numero1 = *numero2;
    *numero2 = aux;

    cout<<endl<<"Ahora el numero 1 es : "<<*numero1;
    cout<<endl<<"Ahora el numero 2 es : "<<*numero2<<endl;
} */

/* // Ejercicio teorico: Transmision de direcciones x2
Vamos a cambiar el valor de 2 variables
#include <iostream>
#include <conio.h>
using namespace std;

int hallarMax(int *, int);

int main()
{
    const int longitud = 5;
    int numero[longitud] = {1, 2, 8, 4, 5};

    cout << "El mayor elemento del vector es: " << hallarMax(&numero[0], longitud) << endl; // numero = &numero[0]

    getch();
    return 0;
}

int hallarMax(int *numero, int longitud)
{
    int max = -9999;
    for (int i = 0; i < longitud; i++)
    {
        if (*(numero + i) > max)
        {
            max = *(numero + i);
        }
    }
    return max;
}

// OPCION ALTERNA 2
// int hallarMax(int *numero, int longitud)
// {
// 	int max = -9999;
// 	for (int i = 0; i < longitud; i++)
// 	{
// 		if (numero [i] > max)
// 		{
// 			max = numero [i];
// 		}
// 	}
// 	return max;
// }

// OPCION ALTERNA 3
// int hallarMax(int *numero, int longitud)
// {
// 	int max = -9999;
// 	for (int i = 0; i < longitud; i++)
// 	{
// 		if (*numero > max)
// 		{
// 			max = *numero ;
// 		}
// 		numero++;
// 	}
// 	return max;
// } */

/* // Ejercicio teorico: Transmision de arreglos
//Maximo elemento de un arreglo con punteros

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

void CargarDatos(int *vector, int num_elementos);
void MostrarDatos(int *vector, int num_elementos);
int HallarMax(int num_elementos, int *vector);

int num;
main(){
    srand(time(NULL));

    cout << "Ingrese el #Elementos => ";
    cin >> num;
    int *vector = new int[num]; // Reservamos espacio de memoria para el arreglo dinamico

    CargarDatos(vector, num);
    MostrarDatos(vector, num);
    int mayor = HallarMax(num, vector);

    cout << endl << "El maximo elemento => " << mayor << endl;
    delete[] vector; // Liberamos memoria

    system("PAUSE");
    return 0;
}

void CargarDatos(int *vector, int num_elementos){
    for (int i = 0; i < num_elementos; i++){
        vector[i] = rand() % 11;
    }
}

void MostrarDatos(int *vector, int num_elementos){
    for (int i = 0; i < num_elementos; i++){
        cout << vector[i] << " ";
    }
}

int HallarMax(int num_elementos, int *vector){
    int mayor = vector[0];
    for (int i = 0; i < num_elementos; i++){
        if (vector[i] > mayor){
            mayor = vector[i];
        }
    }
    return mayor;
} */

/* // Ejercicio teorico: Arreglos dinamicos
// new: Reserva el numero de bytes solicitados por la declaracion
// delete: Libera un bloque de bytes reservado con anterioridad

#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirNotas();
void mostrar();

int nCalificaciones, *Calif;

int main(){
    pedirNotas();
    mostrar();

    delete[] Calif; // Liberacion de bytes usados anteriormente
    system("pause");
    return 0;
}

void pedirNotas(){
    cout << "Digite el numero calificaciones: ";
    cin >> nCalificaciones;

    Calif = new int[nCalificaciones]; // Creando el arreglo dinamico

    for (int i = 0; i < nCalificaciones; i++){
        cout << "Ingrese una nota: ";
        cin >> Calif[i];
    }
}

void mostrar(){
    cout << "\nMostrando Notas: " << endl;
    for (int i = 0; i < nCalificaciones; i++){
        cout << Calif[i] << endl;
    }
} */

/* // Ejercicio teorico: Arreglos dinamicos x2
#include <iostream>
#include <stdlib.h>
#include <time.h>

void generar(int n, int arreglo[]);
void mostrar(int n, int arreglo[]);
using namespace std;

int main(){

    int n, *puntero;

    cout << "Digita el tamano del arreglo: ";
    cin >> n;

    puntero = new int[n];
    generar(n, puntero);
    cout << "\n";
    mostrar(n, puntero);

    delete[] puntero;

    system("pause>NULL");
    return 0;
}

void generar(int n, int arreglo[]){
    srand(time(NULL));
    int aleatorio;
    for (int i = 0; i < n; i++){
        aleatorio = 1 + rand() % 20;
        arreglo[i] = aleatorio;
        cout << aleatorio << "\n";
    }
}

void mostrar(int n, int arreglo[]){
    for (int i = 0; i < n; i++){
        cout << i + 1 << " - " << arreglo[i] << "\n";
    }
} */

/* // Ejercicio teorico: Mariz dinamica
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);
int **puntero_matriz, nFilas, nCol;

int main(){
    pedirDatos();
    mostrarMatriz(puntero_matriz, nFilas, nCol);

    for (int i = 0; i < nFilas; i++)
    {
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz;

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite el numero de Filas: ";
    cin >> nFilas;
    cout << "Digite el numero Columnas: ";
    cin >> nCol;

    puntero_matriz = new int *[nFilas];
    for (int i = 0; i < nFilas; i++){
        puntero_matriz[i] = new int[nCol];
    }

    cout << "\nDigitand elementos de la matriz: " << endl;
    for (int i = 0; i < nFilas; i++){
        for (int j = 0; j < nCol; j++){
            cout << "Digite un numero[" << i << "][" << j << "]: ";
            cin >> *(*(puntero_matriz + i) + j); //*(*(puntero_matriz+i)+j) = puntero_matriz[i][j]
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol){
    cout << "\n\nImprimiendo matriz:\n";
    for (int i = 0; i < nFilas; i++){
        for (int j = 0; j < nFilas; j++){
            cout << *(*(puntero_matriz + i) + j) << " ";
        }
        cout << "\n";
    }
} */

/* // Ejercicio teorico: Correspondencia entre arreglos y punteros
#include<iostream>
#include<conio.h>

using namespace std;


int main(){
	int n[100],t;
	int *dir_n;
	
	dir_n = &n[0];
	cout<<"Digite el Tamano del arreglo: ";cin>>t;
	
	for(int i=0;i<t;i++){
			cout<<"Digite un Numero ["<<i<<"]: ";
			cin>>n[i];
		}
		cout<<"\n";
		
		for(int i=0;i<t;i++){
            // Se coloca ++ a la direccion de memoria debido a que esta guardara los valores en distintas memorias. De lo contrario, guardara todos los valores en una sola direccion de memoria
            cout<<"Posicion de Memoria "<<"["<<n[i]<<"]"<<" es: "<<dir_n++<<endl;
		}
		
	getch();
	return 0;
} */

/* // Ejercicio teorico: Dados de una persona
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct datos{
    string *nombre;
    int *edad;
    string *naclidad;
} n;

void llenar();
void din();
void mostrar();

int tamano;

int main(){
    system("color 1F");
    din();
    llenar();
    mostrar();

    system("pause");
    return 0;
}

void din(){

    cout << "\tDigite la longitud del arreglo: ";
    cin >> tamano;
    system("cls");
    n.edad = new int[tamano];
    n.nombre = new string[tamano];
    n.naclidad = new string[tamano];
}

void llenar(){
    datos *nombre, *edad, *naclidad;
    for (int i = 0; i < tamano; i++){
        cout << "\tPersona[" << i + 1 << "]:\n";
        cout << "\tNombre: ";
        cin >> *n.nombre;
        cout << "\tEdad: ";
        cin >> *n.edad;
        cout << "\tNacionalidad: ";
        cin >> *n.naclidad;
        cout << "\n\n";
    }
    cout << "\n========================================\n";
}

void mostrar()
{

    for (int i = 0; i < tamano; i++){
        cout << "\tPersona[" << i + 1 << "]:\n";
        cout << "\tNombre: " << *n.nombre << endl;
        cout << "\tEdad: " << *n.edad << endl;
        cout << "\tNacionalidad: " << *n.naclidad << endl;
        cout << "\n\n";
    }
} */

/* // Ejercicio 1: Numero par e impar
// Comprobar si un n�mero es par o impar, y se�alar la posicion de memoria donde se est� guardando el n�mero. Con punteros.

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int numero; 
	int *dir_numero;
	
	cout<<"Digite un numero: "; cin>>numero; //Pedimos el numero al usuario
	
	dir_numero = &numero;
	
	if(*dir_numero%2==0){
		cout<<"El numero: "<<*dir_numero<<" es par"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}
	else{
		cout<<"El numero: "<<*dir_numero<<" es impar"<<endl;
		cout<<"Posicion: "<<dir_numero<<endl;
	}
	
	getch();
	return 0;
} */

/* // Ejercicio 2: Numeros primos
// Determinar si un n�mero es primo o no; con puteros y adem�s indicar en que posicion de memoria se guardo el n�mero.*

// punteros - declaracion de punteros

// &n = La direccion de n
// *n = La variable cuya direccion esta almacenada en n


#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int i;
    int numero, *dir_num, cont = 0;

    cout << "Digite un numero: "; // Pedimos y guardamos el numero
    cin >> numero;

    dir_num = &numero; // Almacenamos su direccion

    // Determinamos si es primo o no
    for (i = 1; i < *dir_num; i++){
        if (*dir_num % i == 0){
            cont++;
        }
    }

    if (cont > 2){
        cout << "El numero " << *dir_num << " NO es primo" << endl;
    }
    else{
        cout << "El numero " << *dir_num << " ES PRIMO" << endl;
        cout << "Direccion: " << dir_num << endl; // Mostramos su direccion en memoria
    }

    getch();
    return 0;
} */

/* // Ejercicio 3: Numeros pares de un array
// Rellenar un array de 10 n�meros, posteriormente utilizando punteros indicar cuales son n�meros pares y su posicion en memoria.
#include <iostream>
#include <conio.h>

using namespace std;

int numeros[10], *dir_numeros;
void pedirdatos();
void comprobarpares();

int main(){
    pedirdatos();
    comprobarpares();

    getch();
    return 0;
}

void pedirdatos(){
    dir_numeros = &numeros[0];
    for (int i = 0; i < 10; i++){
        cout << "Digite un numero para la posicion " << i + 1 << " del arreglo: ";
        // cin>>numeros[i];
        cin >> *dir_numeros;
        dir_numeros++;
    }
}

void comprobarpares(){
    cout << "Numeros pares del arreglo y espacio ocupado en memoria: " << endl;

    dir_numeros = &numeros[0];
    for (int i = 0; i < 10; i++){
        if (*dir_numeros % 2 == 0){
            cout << *dir_numeros << " , " << dir_numeros << endl;
        }
        *dir_numeros++;
    }
} */

/* // Ejercicio 3.1: Numeros pares de un array
// Rellenar un array de 10 n�meros, posteriormente utilizando punteros indicar cuales son n�meros pares y su posicion en memoria.

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int numeros[10], *dir_numeros;

    for (int i = 0; i < 10; i++)
    { // Pidiendo los n�meros al usuario
        cout << i + 1 << ". Digite un numero: ";
        cin >> numeros[i];
    }

    dir_numeros = numeros; // indicar al puntero que inicie en a[0]

    for (int i = 0; i < 10; i++)
    {
        if (*dir_numeros % 2 == 0)
        { // Comprobar n�meros pares
            cout << "Numero par: " << *dir_numeros << endl;
            cout << "Posicion: " << dir_numeros << endl;
        }
        dir_numeros++;
    }

    getch();
    return 0;
} */

/* // Ejercicio 4: Numero menor de un array
//Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento del vector.
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int nElementos, numeros[100], *dir_numeros, menor=999999;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>nElementos;
	
	for(int i=0;i<nElementos;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>numeros[i]; //Guardamos los elementos en el arreglo
	}
	
	dir_numeros = &numeros[0];
	for(int i=0;i<nElementos;i++){ //Determinamos el menor elemento en cada
		if(*dir_numeros < menor){ //iteracion del bucle
			menor = *dir_numeros;
		}
		dir_numeros++;
	}
	
	cout<<"\nEl menor elemento es: "<<menor<<endl;
	cout<<"Su posicion es: "<<dir_numeros<<endl;
	getch();
	return 0;
} */

/* // Ejercicio 4.1: Numero menor de un array
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int arreglo[100], *dir_arreglo, tam, menor = 99999;

    cout << "Seleccione el tama�o del arreglo: ";
    cin >> tam;

    dir_arreglo = &arreglo[0];
    for (int i = 0; i < tam; i++){
        cout << "Ingrese valor de la posicion " << i << ": ";
        cin >> arreglo[i];
    }

    dir_arreglo = &arreglo[0];
    for (int i = 0; i < tam; i++){
        if (*dir_arreglo < menor){
            menor = *dir_arreglo;
        }
        dir_arreglo++;
    }

    cout << "El menor es: " << menor;
    cout << endl;
    cout << "Direccion: " << dir_arreglo;

    getch();
    return 0;
} */

/* // Ejercicio 4.2: Numero menor de un array
#include <iostream>
using namespace std;

void bubble(int *n1, int *n2);

int main(){
    int n1[10], *n2;

    cout << "Numeros:" << endl;
    for (int i = 0; i < 10; i++){
        cout << i + 1 << "):";
        cin >> n1[i];
    }

    n2 = &n1[0];
    for (int i = 0; i < 10 - 1; i++){
        for (int j = 0; j < 10 - 1 - i; j++){
            if (n2[j] > n2[j + 1]){
                bubble(&n2[j], &n2[j + 1]);
            }
        }
    }

    system("cls");
    cout << "El Menor es: " << *n2 << endl;
    cout << "Su posicion es: " << n2;
    return 0;
}

void bubble(int *n1, int *n2){
    int aux;
    aux = *n1;
    *n1 = *n2;
    *n2 = aux;
} */

/* // Ejercicio 4.3: Numero menor de un array
#include <iostream>
using namespace std;

void pedirDatos();
int menorElemento(int arreglo[100], int nElementos, int *direcNumero);
int nElementos, arreglo[100], *direcNumero;

int main(){
    pedirDatos();

    cout << "\nEl numero menor del arreglo es: " << menorElemento(arreglo, nElementos, direcNumero) << " y su posicion es: " << direcNumero;

    system("pause");
    return 0;
}

void pedirDatos(){
    cout << "Digite la cantidad de elementos del arreglo: ";
    cin >> nElementos;

    direcNumero = &arreglo[0];
    for (int i = 0; i < nElementos; i++){
        cout << "Digite un numero [" << i << "]: ";
        cin >> arreglo[i];
    }
}

int menorElemento(int arreglo[], int nElementos, int *direcNumero){
    int menor = 9999;
    direcNumero = &arreglo[0];

    for (int i = 0; i < nElementos; i++){
        if (*direcNumero < menor){
            menor = *direcNumero;
        }
        *direcNumero++;
    }
    return menor;
} */

/* // Ejercicio 4.4: Numero menor de un array
#include <iostream>
#include <conio.h>
using namespace std;

void Datos(int, int *, int[]);
void Proceso(int, int *, int[]); // prototipos de funciones declaradas
int main(){
    int n, i, ChainNumber[100], *dir_num;

    printf("Ingrese la cantidad de numeros que desee analizar: ");
    cin >> n;

    Datos(n, dir_num, ChainNumber);
    Proceso(n, dir_num, ChainNumber);

    getch();
    return 0;
}
void Datos(int a, int *m, int x[]){ // Pedir n numeros para ser analizados
    for (int i = 0; i < a; i++)
    {
        printf("\n%d.Ingrese Un numero: ", i + 1);
        cin >> x[i];
    }
}

void Proceso(int a, int *m, int x[]){
    int aux = 0;
    m = x;
    for (int i = 0; i < a; i++){ // Algoritmo de ordenamiento
        for (int j = 0; j < a - 1; j++){
            if (x[j] > x[j + 1]){
                aux = x[j];
                x[j] = x[j + 1];
                x[j + 1] = aux;
            }
        }
    }
    for (int i = 0; i < a; i++){
        printf("\n%d y su posicion en la memoria es: 0x%x", x[i], m);
        m++;
    }
} */

/* // Ejercicio 4.5: Numero menor de un array (duda)
#include <iostream>
#include <conio.h>
using namespace std;

void ingreso();
int menor();
int num[100], *dir_num;
int i, tam;

int main(){
    ingreso();
    menor();

    getch();
    return 0;
}

void ingreso(){
    cout << "Cantidad de numeros a ingresar: ";
    cin >> tam;
    for (i = 0; i < tam; i++){
        cout << "Numero: ";
        cin >> num[i];
    }
    dir_num = num;
}

int menor(){
    int min = num[0];
    int *posicion; // Usado para almacenar la posicion correcta del numero menor
    for (i = 0; i < tam; i++){
        if (*dir_num < min){
            min = *dir_num;
            posicion = dir_num; // Guardamos la posicion
        }
        dir_num++;
    }

    cout << "El minimo es: " << min;
    // La direccion supuesta corresponde a la que veo que toman de los ejercicios y doy enfasis en que no seria esta pues es la posicion final en la que queda dir_num y no la correspondiente al numero mostrado
    cout << "\nDireccion supuesta: " << dir_num; // PARA MI ESTA ESTARIA MAL
    // La direccion corresponde a mi proposicion para la direccion correcta que seria el dato almacenado de la posicion en el momento en que se guarda el valor del minimo
    cout << "\nDireccion: " << posicion;
}
// Si se dan cuenta las dos direcciones son diferentes debido a que nunca se guardo la posicion de memoria de
// dir_num y lo corregi mediante *posicion almacenando su valor */

/* // Ejercicio 5: Ordenamiento de elementos
// Pedir al usuario N n�meros, almacenarlos en un arreglo din�mico posteriormente ordenar los n�meros en orden ascendente y mostrarlos en pantalla. (Utilizar cualquier m�todo de ordenamiento.)

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void ordenarNumeros(int *elemento, int nElementos);
void mostrarArregloOrdenado(int *elemento, int nElementos);

int nElementos, *elemento;

int main(){
	pedirDatos();
	ordenarNumeros(&elemento[0], nElementos);	
	mostrarArregloOrdenado(&elemento[0], nElementos);
	
	delete[] elemento;
	
	getch();
	return 0;
}

void pedirDatos(){//Pedimos los datos al usuario
	cout<<"Digite el numero de elementos: ";
	cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite un numero ["<<i<<"]: ";
		cin>>*(elemento+i); // elemento[i]
	}
}

void ordenarNumeros(int *elemento,int nElementos){
	int aux;
	for(int i=0;i<nElementos;i++){ //Ordenamiento por metodo burbuja con punteros
		for(int j=0;j<nElementos-1;j++){
			if(*(elemento+j) > *(elemento+j+1)){ // elemento[i] > elemento[i+1]
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrarArregloOrdenado(int *elemento,int nElementos){ //Mostrando Arreglo ordenado
	cout<<"\n\nMostrando Arreglo Ordenado: ";
	for(int i=0;i<nElementos;i++){
		cout<<*(elemento+i)<<" ";
	}
} */

/* // Ejercicio 6: Busqueda con punteros
Hacer una funci�n para almacenar N n�meros en un arreglo din�mico, posteriormente en otra funci�n buscar un n�mero en particular.

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void busqueda(int *, int);

int *elemento, nElementos;

int main(){
    pedirDatos();
    busqueda(elemento, nElementos);

    delete[] elemento; // Liberar memoria utilizada en el arreglo

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite el numero de elementos del arreglo: ";
    cin >> nElementos;

    elemento = new int[nElementos]; // Crear el arreglo

    for (int i = 0; i < nElementos; i++){ // Pedir datos al usuario para el arreglo
    
        cout << "Digite un numero[" << i << "]: ";
        cin >> *(elemento + i); // *(elemento+i) es lo mismo que "elemento[i];"
    }
}

void busqueda(int *elemento, int nElementos){
    int dato;
    bool band = false;

    cout << "\nDigite el numero que quiere buscar: ";
    cin >> dato;

    // Busqueda Secuencial
    int i = 0;
    while ((band == false) && (i < nElementos)){
        if (*(elemento + i) == dato) // Verificar si existe el numero en el arreglo{
            band = true; // Si lo encuentra bandera cambia a Verdadero
        }
        i++;
    }

    if (band == true){
        cout << "El numero " << dato << " ha sido encontrado en la posicion " << i - 1 << " de la memoria " << elemento + i << endl;
    }
    else{
        cout << "El numero " << dato << " NO ha sido encontrado" << endl;
    }
}*/

/* // Ejercicio 6.1: Busqueda con punteros

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedir_datos();
void imprimir_datos(int *arreglo, int n);
void busqueda(int *arreglo, int n);
void cierto_falso();

int i, n, m, pos, *arreglo, *dir_m;
char band = 'F';

int main(){
    pedir_datos();
    imprimir_datos(arreglo, n);
    busqueda(arreglo, n);
    cierto_falso();

    delete[] arreglo;

    getch();
    return 0;
}

void pedir_datos(){
    cout << "Digite la cantidad de elementos que tendra el arreglo: ";
    cin >> n;

    arreglo = new int[n];

    for (i = 0; i < n; i++){
        cout << "Digite un numero [" << i + 1 << "]: ";
        cin >> *(arreglo + i);
    }
}

void imprimir_datos(int *arreglo, int n){
    cout << "\nEl arreglo es: " << endl;

    for (int i = 0; i < n; i++){
        cout << *(arreglo + i) << " ";
    }
    cout << "\n";
}

void busqueda(int *arreglo, int n){
    cout << "\nDigite un numero para localizarlo en el arreglo: ";
    cin >> m;

    // La posicion de m (&m) se guarda en la variable de tipo puntero dir_m. Despues, se utiliza lo que hay dentro de esa posion (*dir_m), es decir, el valor de m que ahora esta dentro del puntero
    dir_m = &m;

    for (i = 0; i < n; i++){
        if (*(arreglo + i) == *dir_m){ // arreglo+i = arreglo[i]
            band = 'V';
        }
    }
}

void cierto_falso(){
    if (band == 'V'){
        cout << "El numero " << m << " ha sido encontrado en la posicion " << i - 1 << " de la memoria " << arreglo + i << endl;
}
    else{
        cout << "\nEl numero " << *dir_m << " no ha sido encontrado en el arreglo.";
    }
} */

/* // Ejercicio 6.2: Busqueda con punteros
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void calculandoDatos(int *, int, int, int, char);

int *numeros, N, pos, dato;
char band = 'F';

int main()
{
    pedirDatos();
    calculandoDatos(numeros, N, pos, dato, band);

    delete[] numeros;

    getch();
    return 0;
}

void pedirDatos()
{
    cout << "Digite el numero de elementos: " << endl;
    cin >> N;

    numeros = new int[N];

    for (int i = 0; i < N; i++){
        cout << "Digite un numero [" << i << "]: ";
        cin >> *(numeros + i);
    }

    cout << "\nIngrese el dato a buscar: ";
    cin >> dato;
}

void calculandoDatos(int *numeros, int N, int pos, int dato, char band)
{
    int i = 0;
    while ((band == 'F') && (i < N)){
        if (*(numeros + i) == dato){ // numeros+i = numeros[i]
            band = 'V';
        }
        i++;
    }

    if (band == 'F'){
        cout << "\nOie we el dato no existe porque no lo ingresaste >:v" << endl;
    }
    else{

        cout << "\nEl dato " << dato << " ha sido encontrado en la posicion " << i - 1 << " en la posicion de memoria: " << numeros + 1 << endl;
    }

    // cout<<"\nMostrando todos los datos del arreglo y sus posiciones: "<<endl;
    // for(int i=0;i<N;i++)
    // {
    //  cout<<"Dato: "<<numeros[i]<<endl;
    //  cout<<"Posicion de Memoria: "<<numeros+i<<endl;
    // }
} */

/* // Ejercicio 6.3: Busqueda con punteros

//CON BUSQUEDA BINARIA
#include <iostream>
#include <cstdlib>
#include <conio.h>
using namespace std;

//Prototipos de Funcion
void pedirDatos();
void buscarDato(int *elemento, int num_elementos);

int *elemento, NumElementos;

int main()
{
    pedirDatos();
    buscarDato(elemento, NumElementos);

    delete[] elemento; //Liberar la memoria utilizada para el arreglo dinamico

    getch();
    return 0;
}
//Desarrollo de Funciones
void pedirDatos()
{
    cout<<"Digite el numero de elementos que tendra el arreglo: ";
    cin>>NumElementos;
    cout<<"\n";

    elemento = new int[NumElementos]; //Creamos el arreglo

    for(int i = 0; i < NumElementos; i++)
    {
        cout<<"Ingrese el valor en la posicion "<<i<<": ";
        cin>>*(elemento + i);
    }
}

void buscarDato(int *elemento, int num_elementos)
{
    int inf, sup, mitad, dato;

    cout<<"\nDigite el dato a buscar en el arreglo: ";
    cin>>dato;

    bool igual = false;
    inf  = 0;
    sup = num_elementos;

    while(inf != sup)
    {
        mitad = (inf + sup) / 2;
        if(*(elemento + mitad) == dato)
        {
            igual = true;
            break;
        }
        if(*(elemento + mitad) > dato)
        {
            sup = mitad;
            mitad = (inf + sup) / 2;
        }
        if(*(elemento + mitad) < dato)
        {
            inf = mitad;
            mitad = (inf + sup) / 2;
        }
    }

    if(igual)
        cout<<"\nEl numero ha sido encontrado en la posicion "<<mitad<<endl;
    else
        cout<<"\nEl numero NO ha sido encontrado"<<endl;
}


// //CON B�SQUEDA SECUENCIAL

// #include <iostream>
// #include <cstdlib>
// #include <conio.h>
// using namespace std;

// //Prototipos de Funcion
// void pedirDatos();
// void buscarDato(float *elemento, int num_elementos);

// float *elemento;
// int NumElementos;

// int main()
// {
//     pedirDatos();
//     buscarDato(elemento, NumElementos);

//     delete[] elemento; //Liberar la memoria utilizada para el arreglo dinamico

//     getch();
//     return 0;
// }
// //Desarrollo de Funciones
// void pedirDatos()
// {
//     cout<<"Digite el numero de elementos que tendra el arreglo: ";
//     cin>>NumElementos;
//     cout<<"\n";

//     elemento = new float[NumElementos]; //Creamos el arreglo

//     for(int i = 0; i < NumElementos; i++)
//     {
//         cout<<"Ingrese el valor en la posicion "<<i<<": ";
//         cin>>*(elemento + i);
//     }
// }

// void buscarDato(float *elemento, int num_elementos)
// {
//     int i = 0;
//     float dato;
//     bool igual = false;

//     cout<<"\nDigite el dato a buscar en el arreglo: ";
//     cin>>dato;

//     while(igual == false && i < num_elementos)
//     {
//         if(*(elemento + i) == dato)
//         {
//             igual = true;
//             break;
//         }
//         i++;
//     }
//     if(igual)
//         cout<<"\nEl numero ha sido encontrado en la posicion "<<i<<endl;
//     else
//         cout<<"\nEl numero NO ha sido encontrado"<<endl;
// } */

/* // Ejercicio 6.4: Busqueda con punteros
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
void CargarArreglo(int *vector, int n);
void ImprimirArreglo(int *vector, int n);
bool BuscarElemento(int *vector, int n, int x);

main(){
    int NumElementos, ElementoX;
    cout << "Ingrese #Elementos => ";
    cin >> NumElementos;

    int *Arreglo = new int[NumElementos];

    cout << endl<< "ARREGLO ORIGINAL" << endl<< endl;

    CargarArreglo(Arreglo, NumElementos);
    ImprimirArreglo(Arreglo, NumElementos);

    cout << endl<< "Que elemento desea buscar => ";
    cin >> ElementoX;
    if (BuscarElemento(Arreglo, NumElementos, ElementoX) == 1){
        cout << ElementoX << " Se encuentra  en el arreglo" << endl;
    }
    else{
        cout << ElementoX << " No se encuentra en el arreglo" << endl;
    }

    system("PAUSE");
}

void CargarArreglo(int *vector, int n){
    srand(time(NULL));
    for (int i = 0; i < n; i++){
        vector[i] = 1 + rand() % 20;
    }
}

void ImprimirArreglo(int *vector, int n){
    for (int i = 0; i < n; i++){
        cout << vector[i] << " ";
    }
}

bool BuscarElemento(int *vector, int n, int x){
    int aux = 0;

    for (int i = 0; i < n; i++){
        if (vector[i] == x){
            aux++;
            return 1;
            break;
        }
    }

    if (aux == 0){
        return 0;
    }
} */

/* // Ejercicio 7: Contar numero de vocales
// Pedir su nombre al usuario y devolver el n�mero de vocales que hay. NOTA: Recuerda que debes utilizar punteros .

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

// Prototipo de Funci�n
void pedirDatos();
int contarVocales(char *);

char *nombre;
char nombreUsuario[50];

int main(){
    pedirDatos();
    cout << "\nNumero de vocales en el nombre: " << contarVocales(&nombreUsuario[0]);

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Digite su nombre: ";
    cin.getline(nombreUsuario, 50, '\n');

    strupr(nombreUsuario); // Pasar el nombre a mayuscula
}

int contarVocales(char *nombre){
    int cont = 0;

    while (*nombre){ // mientras nombre no sea nulo '\0'
        switch (*nombre){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cont++;
        }
        nombre++;
    }

    return cont;
} */

/* // Ejercicio 7.1: Contar numero de vocales
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

void in(char *, int *);
void out(char *, int *);

char cadena[100]; // tamano maximo cadena
int cont[5];      // conteo de caracteres a,e,i,o,i

using namespace std;
int main(){
    in(cadena, cont);
    out(cadena, cont);

    getch();
    return 0;
}

void in(char *cadena, int *cont){
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena, 100, '\n');
    system("cls");

    cout << "La cadena de caracteres que ha seleccionado es: " << strupr(cadena);

    for (int i = 0; i < 5; i++){ // Limpiando valores basura del puntero
    
        *(cont + i) = 0;
    }

    while (*cadena){ // conteo de valores y almacenado en puntero
    
        switch (*cadena){
        case 'A':
            *(cont + 0) = *(cont + 0) + 1;
            break;
        case 'E':
            *(cont + 1) = *(cont + 1) + 1;
            break;
        case 'I':
            *(cont + 2) = *(cont + 1) + 1;
            break;
        case 'O':
            *(cont + 3) = *(cont + 1) + 1;
            break;
        case 'U':
            *(cont + 4) = *(cont + 1) + 1;
            break;
        }
        cadena++;
    }
}

void out(char *cadena, int *cont){

    // while (*cadena){ //Mostrando la cadena
    //     cout << *cadena;
    //     cadena++;
    // }

    cout << "\nTotal vocales"<<"\nCantidad (a): " << *(cont + 0)<<"\nCantidad (e): " << *(cont + 1)<<"\nCantidad (i): " << *(cont + 2)<<"\nCantidad (o): " << *(cont + 3)<<"\nCantidad (u): " << *(cont + 4);
} */

/* // Ejercicio 7.2: Contar numero de vocales
#include <iostream>
using namespace std;

void numerovocales();

string nombre;
int longitud, i;
char *ptro;
int vocales[5] = {0};
char vocal[5] = {'a', 'e', 'i', 'o', 'u'};

int main(){
    numerovocales();
    return 0;
}

void numerovocales(){
    cout << "Escriba su nombre: ";
    getline(cin, nombre);

    // Se almacenan la cantidad de letras de la variable de tipo string
    longitud = nombre.size();

    // Se crea una matriz dinamica de "longitud" espacios. O sea la cantidad total de caracteres de la varaible de tipo string.
    ptro = new char[longitud];

    // Puesto que ptro es un puntero de tipo char, de "longitud" espacios, entonces a este se le asignaran los caracteres que posee La varibale de tipo string "nombre"
    for (i = 0; i < longitud; i++){
        ptro[i] = nombre[i];
    }

    for (i = 0; i < longitud; i++){
        switch (ptro[i]){
        case 'a':
        case 'A':
            vocales[0]++;
            break;
        case 'e':
        case 'E':
            vocales[1]++;
            break;
        case 'i':
        case 'I':
            vocales[2]++;
            break;
        case 'o':
        case 'O':
            vocales[3]++;
            break;
        case 'u':
        case 'U':
            vocales[4]++;
            break;
        }
    }
    cout << "\nLa cantidad de vocales seleccionadas de cada letra es: " << endl;
    cout << vocal[0] << ": " << vocales[0] << endl;
    cout << vocal[1] << ": " << vocales[1] << endl;
    cout << vocal[2] << ": " << vocales[2] << endl;
    cout << vocal[3] << ": " << vocales[3] << endl;
    cout << vocal[4] << ": " << vocales[4] << endl;

    delete[] ptro;
} */

/* // Ejercicio 8: Determinar vocales
// Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece la vocal a,e,i,o,u; en la cadena de caracteres. NOTA: Usar punteros
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

void pedirDatos();
void contarVocales(char *);

char *palabra;
char palabraUsuario[30];

int main(){
    pedirDatos();
    contarVocales(palabraUsuario);//Llamada a la funcion para contar vocales del nombre

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite una palabra: ";
    cin.getline(palabraUsuario,30,'\n');
    strupr(palabraUsuario); //pasar el nombre a mayuscula
}

void contarVocales(char *palabra){
    int contA=0,contE=0,contI=0,contO=0,contU=0;

    while(*palabra){ //mientras nombre sea diferente de nulo '\0'
        switch(*palabra){
            case 'A': contA++;break;
            case 'E': contE++;break;
            case 'I': contI++;break;
            case 'O': contO++;break;
            case 'U': contU++;break;
        }
        palabra++;
    }

    //Imprimiendo el conteo de cada vocal
    cout<<"\nNumero de vocales A: "<<contA<<endl;
    cout<<"Numero de vocales E: "<<contE<<endl;
    cout<<"Numero de vocales I: "<<contI<<endl;
    cout<<"Numero de vocales O: "<<contO<<endl;
    cout<<"Numero de vocales U: "<<contU<<endl;
} */

/* // Ejercicio 9: Suma de matrices
// Realice un programa que calcule la suma de dos matrices din�micas.

#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void sumarMatrices(int **,int **,int,int);
void mostrarMatrizSuma(int **,int,int);

int **puntero_matriz1,**puntero_matriz2,nFilas,nCol;

int main(){
    pedirDatos();
    sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol);
    mostrarMatrizSuma(puntero_matriz1,nFilas,nCol);

    //Liberar la memoria utiliza en matriz2
    for(int i=0;i<nFilas;i++){
        delete[] puntero_matriz2[i]; // Liberar columnas
    }
    delete[] puntero_matriz2;        // Liberar filas

    //Liberar la memoria utiliza en matriz1
    for(int i=0;i<nFilas;i++){
        delete[] puntero_matriz1[i]; // Liberar columnas
    }
    delete[] puntero_matriz1;        // Liberar filas

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite el numero de filas: ";
    cin>>nFilas;
    cout<<"Digite el numero de columnas: ";
    cin>>nCol;

    //Reservar memoria para la primera matriz
    puntero_matriz1 = new int*[nFilas]; //Reservar memoria para las filas
    for(int i=0;i<nFilas;i++){
        puntero_matriz1[i] = new int[nCol]; //Reservar memoria para las columnas
    }

    cout<<"\nDigitando los elementos de la primera matriz: \n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz1+i)+j); //puntero_matriz1[i][j]
        }
    }

    //Reservar memoria para la segunda matriz
    puntero_matriz2 = new int*[nFilas]; //Reservar memoria para las filas
    for(int i=0;i<nFilas;i++){
        puntero_matriz2[i] = new int[nCol]; //Reservar memoria para las columnas
    }

    cout<<"\nDigitando los elementos de la segunda matriz: \n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz2+i)+j); //puntero_matriz1[i][j]
        }
    }
}

void sumarMatrices(int **puntero_matriz1,int **puntero_matriz2,int nFilas,int nCol){
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            *(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j);
        }//puntero_matriz[i][j] = puntero_matriz[i][j]+puntero_matriz2[i][j];
    }
}

void mostrarMatrizSuma(int **putero_matriz1,int nFilas,int nCol){
    cout<<"\nLa suma de ambas matrices es: \n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<*(*(puntero_matriz1+i)+j)<<" ";
        }
        cout<<"\n";
    }
} */

/* // Ejercicio 10: Matriz transpuesta
// Realice un programa que lea una matriz din�mica de NxM y cree su matriz traspuesta. La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.

// |1 2 3|       |1 4 7|
// |4 5 6|  -->  |2 5 8|
// |7 8 9|       |3 6 9|


#include<iostream>
#include<conio.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **,int,int);

int **puntero_matriz,nFilas,nCol;

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
	
	//Liberando memoria de la matriz
	for(int i=0;i<nFilas;i++)
	{
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Digite el numero de filas: ";
	cin>>nFilas;
	cout<<"Digite el numero de columnas: ";
	cin>>nCol;
	
	//Reservar memoria para la matriz din�mica
	puntero_matriz = new int*[nFilas]; //Reservando memoria para las filas
	for(int i=0;i<nFilas;i++){
		puntero_matriz[i] = new int[nCol]; //Reservando memoria para las columnas
	}
	
	cout<<"\nDigitando datos para la matriz: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero["<<i<<"]["<<j<<"]: ";
			cin>>*(*(puntero_matriz+i)+j);
		}
	}	
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){
	cout<<"\nMostrando matriz Original: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" "; //puntero_matriz[i][j]
		}
		cout<<"\n";
	}
	
	cout<<"\nMostrando matriz Transpuesta: \n";
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+j)+i)<<" "; //puntero_matriz[j][i]
		}
		cout<<"\n";
	}
} */

/* // Ejercicio 10.1: Matriz transpuesta
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void matrizNormal(int **, int, int);
void matrizTranspuesta(int **, int, int);

int **puntMatriz, nFila, nColum;

int main(){
    pedirDatos();
    matrizNormal(puntMatriz, nFila, nColum);
    matrizTranspuesta(puntMatriz, nFila, nColum);

    for (int i = 0; i < nFila; i++){
        delete[] puntMatriz[i];
    }
    delete puntMatriz;

    getch();
    return 0;
}

void pedirDatos(){
    cout << "Ingrese el numero de filas: ";
    cin >> nFila;
    cout << "Ingrese el numero de columnas: ";
    cin >> nColum;

    puntMatriz = new int *[nFila];
    for (int i = 0; i < nFila; i++){
        puntMatriz[i] = new int[nColum];
    }

    cout << "\nIngrese los elementos de la Matriz.\n";
    for (int i = 0; i < nFila; i++){
        for (int j = 0; j < nColum; j++){
            cout << "Ingrese un numero en la posicion [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> *(*(puntMatriz + i) + j);
        }
    }
}
void matrizNormal(int **puntMatriz, int nFila, int nColum){
    cout << "\nMatriz Normal: \n";
    for (int i = 0; i < nFila; i++){
        for (int j = 0; j < nColum; j++){
            cout << *(*(puntMatriz + i) + j) << " ";
        }
        cout << "\n";
    }
}
void matrizTranspuesta(int **puntMatriz, int nFila, int nColum){
    cout << "Matriz Transpuesta: \n";
    for (int i = 0; i < nFila; i++){
        for (int j = 0; j < nColum; j++){
            cout << *(*(puntMatriz + j) + i) << " ";
        }
        cout << "\n";
    }
} */

/* // Ejercicio 11.1: Uso de punteros para llenar la info de un alumno
#include <iostream>
#include <stdlib.h>
#include <string.h>
#define CLS "clear"
#define CNT 3
using namespace std;

typedef struct{             // Declaramos la estructura de datos a utilizar
    char nombre[30];
    int edad;
    float promedio;
} Alumno;

Alumno alumno[CNT];         // Declaramos un arreglo del tipo de la estructura declarada
Alumno *ptrAlumno = alumno; // Declaramos un apuntador al arreglo de estructuras

// Prototipos de funciones
void pedirDatos();
void calcularMejorPromedio(Alumno *);

int main(int argc, char **argv){
    pedirDatos();
    calcularMejorPromedio(ptrAlumno);

    cout << "\n\nPROGRAMA FINALIZADO!" << endl;
    return 0;
}

void pedirDatos(){
    for (int i = 0; i < CNT; i++){
        cout << "\nDigite el nombre del alumno " << (i + 1) << ": ";
        cin.getline((ptrAlumno + i)->nombre, 30, '\n');

        cout << "Digite la edad: ";
        cin >> (ptrAlumno + i)->edad;

        cout << "Digite su promedio: ";
        cin >> (ptrAlumno + i)->promedio;

        cin.clear();           // con estas instrucciones
        cin.ignore(256, '\n'); // limpiamos el buffer de entrada
    }
}

void calcularMejorPromedio(Alumno *ptrAlumno){
    float mayor = 0.0;
    int pos = 0;

    for (int i = 0; i < CNT; i++){
        if ((ptrAlumno + i)->promedio > mayor){
            mayor = (ptrAlumno + i)->promedio;
            pos = i;
        }
    }

    // Imprimir los datos del alumno con mejor promedio
    cout << "\n\n******************************************" << endl;
    cout << "** El alumno con mejor promedio es: ****\n";
    cout << "******************************************" << endl;
    cout << "Nombre: " << (ptrAlumno + pos)->nombre << endl;
    cout << "Edad: " << (ptrAlumno + pos)->edad << endl;
    cout << "Promedio: " << (ptrAlumno + pos)->promedio << endl;
    cout << "******************************************" << endl;
} */

/* // Ejercicio 11: Uso de punteros para llenar la info de un alumno

// Hacer una estructura llamada alumno, en la cual se tendr�n los siguientes campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cu�l
// de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno. NOTA: Usar punteros a estructura.

#include <iostream>
#include <conio.h>
using namespace std;

struct Alumno{
    char nombre[30];
    int edad;
    float promedio;
} alumno[3], *puntero_alumno = &alumno[0];

void pedirDatos();
void comprobarMejorPromedio(Alumno *puntero_alumno);

int main(){
    pedirDatos();
    comprobarMejorPromedio(puntero_alumno);

    getch();
    return 0;
}

void pedirDatos(){
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin); // Limpiar buffer para poder seguir digitando datos
        cout << "Digite su nombre: ";
        cin.getline((puntero_alumno + i)->nombre, 30, '\n');
        cout << "Digite su edad: ";
        cin >> (puntero_alumno + i)->edad;
        cout << "Digite su promedio: ";
        cin >> (puntero_alumno + i)->promedio;
        cout << "\n";
    }
}

void comprobarMejorPromedio(Alumno *puntero_alumno){
    float mayor = 0.0;
    int pos = 0;

    for (int i = 0; i < 3; i++){
        if ((puntero_alumno + i)->promedio > mayor)
        {
            mayor = (puntero_alumno + i)->promedio; // sacamos el mayor promedio
            pos = i;                                // guardamos la posicion del mayor promedio
        }
    }

    // Imprimimos los datos del alumno con el mejor promedio
    cout << "\nAlumno con el mejor promedio: " << endl;
    cout << "Nombre: " << (puntero_alumno + pos)->nombre << endl;
    cout << "Edad: " << (puntero_alumno + pos)->edad << endl;
    cout << "Promedio: " << (puntero_alumno + pos)->promedio << endl;
}
*/

/* // Ejercicio 12: Vueltas de un ciclista

// Defina una estructura que indique el tiempo empleado por un ciclista en  recorrer una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
// Escriba un programa que dado 3 etapas calcule el tiempo total empleado en correr todas las etapas.

#include<iostream>
#include<conio.h>
using namespace std;

struct Etapa{
    int horas,min,seg;
}etapa[3], *puntero_etapa = &etapa[0];

//Prototipos de Funcion
void pedirDatos();
void calcularTiempo(Etapa *);

int main(){
    pedirDatos();
    calcularTiempo(puntero_etapa);

    getch();
    return 0;
}

void pedirDatos(){
    cout<<"Digite los tiempos empleados: \n";
    for(int i=0;i<3;i++)
    {
        cout<<"Horas: "; cin>>(puntero_etapa+i)->horas;
        cout<<"Minutos: "; cin>>(puntero_etapa+i)->min;
        cout<<"Segundos: "; cin>>(puntero_etapa+i)->seg;
        cout<<"\n";
    }
}

void calcularTiempo(Etapa *puntero_etapa){
    int horasT=0,minutosT=0,segundosT=0;

    for(int i=0;i<3;i++){
        horasT += (puntero_etapa+i)->horas; //horasT = horasT + puntero_etapa[i].horas
        minutosT += (puntero_etapa+i)->min;
        if(minutosT >= 60){                 //Si los minutos son mayores a 60, significa que ha pasado

            minutosT -= 60;                 //mas de 1 hora, entonces disminuimos en 60 los minutos
            horasT++;                       //y aumentamos las horas en 1
        }
        segundosT += (puntero_etapa+i)->seg;
        if(segundosT >= 60){                //y lo mismo con los segundos

            segundosT -= 60;
            minutosT++;
        }
    }

    //Por ultimo mostramos los totales de tiempos en pantalla
    cout<<"\nEl tiempo total es: "<<endl;
    cout<<"Horas: "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl;
} */
