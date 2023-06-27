/*Ejercicio 10.*/
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void pedirDatos();
void matrizNormal(int **, int, int);
void matrizTranspuesta(int **, int, int);

int **puntMatriz, nFila, nColum;

int main(){
 pedirDatos();
 matrizNormal(puntMatriz, nFila, nColum);
 matrizTranspuesta(puntMatriz, nFila, nColum);
 
 for(int i=0;i<nFila;i++){
  delete[] puntMatriz[i];
 }
 delete puntMatriz;
 
 getch();
 return 0;
}
void pedirDatos(){
 cout<<"Ingrese el numero de filas: ";
 cin>>nFila;
 cout<<"Ingrese el numero de columnas: ";
 cin>>nColum;
 
 puntMatriz = new int*[nFila];
 for(int i=0;i<nFila;i++){
  puntMatriz[i] = new int[nColum];
 }
 
 cout<<"\nIngrese los elementos de la Matriz.\n";
 for(int i=0;i<nFila;i++){
  for(int j=0;j<nColum;j++){
   cout<<"Ingrese un numero en la posicion ["<<i+1<<"]["<<j+1<<"]: ";
   cin>>*(*(puntMatriz+i)+j);
  }
 }
}
void matrizNormal(int **puntMatriz, int nFila, int nColum){
 cout<<"\nMatriz Normal: \n";
 for(int i=0;i<nFila;i++){
  for(int j=0;j<nColum;j++){
   cout<<*(*(puntMatriz+i)+j)<<" ";
  }
  cout<<"\n";
 }
}
void matrizTranspuesta(int **puntMatriz, int nFila, int nColum){
 cout<<"Matriz Transpuesta: \n";
 for(int i=0;i<nFila;i++){
  for(int j=0;j<nColum;j++){
   cout<<*(*(puntMatriz+j)+i)<<" ";
  }
  cout<<"\n";
 }
}
