//1.- Crear un nuevo nodo
//2.- Asignar a nuevo_nodo -> dato el elemento que queremos incluir en la lista 
//3.- Crear dos nodos axuiliares y asginar lista al primero de ellos
//4. Insertar elementos a la lista (de forma ordenada y ascendente)

//aux1 nos va ayudar a referenciar la última posición de la fila

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <ios>
using namespace std;

struct Nodo 
{
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

int main()
{   
    menu();
    getch();
    return 0;
}

void menu()
{
	
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

void insertarLista(Nodo *&lista, int n) 
{

    Nodo* nuevo_nodo = new Nodo(); //new Nodo() = Almacenar espacio de memoria

    nuevo_nodo->dato = n;

    Nodo* aux1 = lista;
    Nodo* aux2;

    //Tener siempre ordenada nuestra lista
    while ((aux1 != NULL) && (aux1->dato < n)) 
	{
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1) 
	{
        lista = nuevo_nodo;
    }
    else 
	{
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;

    cout << "Elemento " << n << " insertado a la lista correctamente" << endl << endl ;

}

void mostrarLista(Nodo *lista)
{
	Nodo *actual = new Nodo ();
	actual = lista;
	cout<<setw(20)<<".:LISTA:."<<endl;
	while (actual != NULL)
	{
		cout<<"->"<<actual->dato <<endl;
		actual = actual->siguiente;
	}
}

void buscarLista(Nodo *lista, int n)
{
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while ((actual != NULL) && (actual->dato<= n))
	{
		if(actual->dato == n)
		{
			band = true;
		}
		actual = actual ->siguiente;
	}
	
	if(band == true)
	{
		cout<<"Elemento"<<n<<"Si a sido encontrado en la lista\n";
	}
	else
	{
		cout<<"Elemento"<<n<<"No a sido encontrado en la lista\n";
	}
}

void eliminarNodo(Nodo *&lista,int n) 
{
	if (lista != NULL)
	{
		Nodo *aux_borrar;
	    Nodo *anterior = NULL;
	    
	    aux_borrar = lista;
	    
	    //Recorrer la lista
    	while(aux_borrar!= NULL && aux_borrar->dato != n)
    	{
	    	anterior = aux_borrar;
 	    	aux_borrar = aux_borrar->siguiente;
    	}
    	
    	//El elemento no ha sido encontrado
    	if(aux_borrar == NULL)
	    {
	    	cout<<"\nNo se encontro el dato\n";
     	}
     	
     	//El primer elemento es el que se va a eliminar
     	else if(anterior == lista)
    	{
     		lista=lista->siguiente;
    		delete aux_borrar;
    	}
    	
    	//El elemento esta en la lista pero no es el primero
     	else
     	{
    		anterior->siguiente = aux_borrar->siguiente;
	    	delete aux_borrar;
     	}
    }
}
	
void eliminarLista(Nodo *&lista, int &n)
{
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
	
	while(lista != NULL)
	{
		cout<<dato<<"->";
	}	
}
