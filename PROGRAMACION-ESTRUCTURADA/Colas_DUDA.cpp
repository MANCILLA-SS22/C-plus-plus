#include<iostream>
#include<stdlib.h>
#include<string.h>

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
	return (raiz==NULL);
}
void Cola::imprimir(){
	Nodo *recor = raiz;
	if(vacio()){
		cout << "No hay gente en cola" << endl;
	}else{
		int cont = 1;
		while(recor!=NULL){
			cout << cont << "->"<< recor->nombre << endl;
			recor=recor->siguiente;
			cont++;
		}
		cont = 1;
	}
	delete recor;
}


int Cola::insertando(){
	string nom;
	cin.get();
	cout << "Ingresa el nombre: "; getline(cin, nom);
	insertar(nom);
	cout << "------" << nom << " ------ fue aniadido a la cola" << endl;
}

void Cola::insertar(string _nombre){
	Nodo *nuevo = new Nodo;
	nuevo -> nombre = _nombre;
	if(vacio()){
		raiz = nuevo;
	}else{
		fondo->siguiente = nuevo;
	}
	fondo = nuevo;
}


void Cola::contara(){
	int personas=contar();
	cout << "La cantidad de personas en cola son: " << personas << endl;
}

int Cola::contar(){
	Nodo *recor = raiz;
	if(vacio()){
		return -1;
	}else{
		int cont=0;
		while(recor!=NULL){
			recor= recor->siguiente;
			cont++;
		}
		return cont;
		cont = 0;
	}
	delete recor;
}

void Cola::extrayendo(){
	string extrajido=extraer();
	cout << "La persona extraida fue: " << extrajido << endl;
}

string Cola::extraer(){
	if(!vacio()){
		string nom=raiz->nombre;
		Nodo *bor=raiz;
		if(raiz==fondo){
			raiz=NULL;
			fondo=NULL;
		}else{
			raiz=raiz->siguiente;
		}
			delete bor;
			return nom;
	}else{
		return "-1";
	}
}

//-----------------Destructor-------------
Cola::~Cola(){
	Nodo *recor = raiz;
	Nodo *bor;
	while(recor!=NULL){
		bor=recor;
		recor=recor->siguiente;
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
		cout << "Opcion: "; cin >> opc;
		switch(opc){
			case 1:
				system("cls"); insertando(); system("pause"); break;
			case 2:
				system("cls"); imprimir(); system("pause"); break;
			case 3:
				system("cls"); extrayendo(); system("pause"); break;
			case 4:
				system("cls"); contara(); system("pause"); break;
			case 0:
				system("cls");	cout << "Saliste" << endl; break;
			default:
				system("cls");	cout << "Tu opcion es incorrecta" << endl; system("pause"); break;
		}
	}while(opc!=0);
}


int main(){
	Cola cola;
	cola.menu();
	return 0;
}
