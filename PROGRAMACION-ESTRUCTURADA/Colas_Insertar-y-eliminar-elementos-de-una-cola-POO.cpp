#include<iostream>
#include<locale.h>
#include<cstdlib>
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
 if(frente == NULL){
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
 if(frente == NULL){
  cout << "La cola está vacía" << endl;
 }
 else{
  while(frente != NULL){
   cout << "[" << frente->dato << "]->";
   frente = frente->sig;
  }
 }
 cout <<"\n";
 system("pause");
}

bool buscar(Nodo *frente,int dat){
 if(frente == NULL){
  return false;
 }
 else{
  while(frente != NULL){
   if(frente->dato == dat){
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
 if(buscar(frente,dat) == false){
  cout << "El dato no se encuentra en la lista" << endl;
  system("PAUSE");
 }
 else{
  
  while(frente->dato != dat){
   Nodo *aux = new Nodo();
   aux = frente;
   frente = frente->sig;
   delete aux;  
  }
  Nodo *aux = new Nodo();
  aux = frente;
  if(frente->sig == NULL){
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
 setlocale(LC_ALL,"SPANISH");
 Nodo *frente = NULL;
 Nodo *final = NULL;
 int aux, op;
 
 do{
  system("cls");
  menu();
  
  cin >> op;
  
  switch(op){
   case 1:{
    insertar(frente,final);
    break;
   }
   case 2:{
    ver(frente);
    break;
   }
   case 3:{
    eliminar(frente,final);
    
    break;
   }
   
  }
  
 }while(op != 0);
 

system("PAUSE");
}
