#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

struct nodo
{
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

int main()
{
	Menu();
	getch();
	return 0;
}

void Menu()
{
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
		
		switch(opcion)
		{
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
			        if(busqueda(arbol, dato) == true)
			        {
			        	cout<<"\nElemento "<<dato<<" a sido encontrado en el arbol ";
			        }
			        else
			        {
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

/*Creamos nuestro primer nodo (raiz), el cual utilizaremos una funcion de tipo nodo, la cual posee los 3 campos que debe tener un 
nodo. Ahora, la variable sera de tipo puntero porque se pasa una copia del valor del parámetro desde la función hacia otro nodo.
Al ser una copia, los cambios realizados directamente en la función sobre el valor del parámetro no serán reflejados al terminar 
la ejecución de la función.*/ 
nodo *crearNodo(int n, nodo *padre)//le pasamos el parametro del cual queremos crear el nodo
{
	nodo *nuevoNodo = new nodo(); //crear espacio en memoria para el primer nodo (hoja), el cual posee los cuatro campos siguientes.
	
	nuevoNodo->dato = n;//Al campo que posee el dato en el nodo, le asignamos n, que es el elemento del cual queremos crear el nodo
	nuevoNodo->der = NULL;//El nodo derecho apunta a NULL porque cuando es creado el nodo, no posee nodos hijos
	nuevoNodo->izq = NULL;//El nodo izquierdo apunta a NULL porque cuando es creado el nodo, no posee nodos hijos
	nuevoNodo->padre = padre;//
	
	return nuevoNodo;//Debemos retornar le nuevo nodo que acabamos de crear
}

//funcion para instertar elementos en el arbol
void insertar(nodo *&arbol, int n, nodo *padre)//Desde la funcion main, le mandamos lo que "arbol", que se definicio al principio que es igual a NULL, y "dato" que tiene un valor que el usuario asigno al inicio del programa. En este punto aun no sabemos cual es el padre y es por eso que anteriormente solo se igualo a si mismo.
{
	if(arbol == NULL)//si el arbol esta vacio, entonces 
	{
		nodo *nuevoNodo = crearNodo(n, padre);//se crea un nuevo nodo, llamando a la funcion "crearNodo", a la cual le mandamos "n", el valor inicial del arbol. Y de esa manera se crea la raiz al nuevo nodo.
		arbol = nuevoNodo;//Una vez que ya tenemos el nuevo nodo, no podemos dejarlo asi nada mas sin ninguna ubicacion. Por eso debemos almacenarlo en lo que vendria siendo, la raiz del arbol o el primer nodo
	}
	
	else //sino, si tiene un nodo o mas, entonces
	{
		int ValorDeRaiz = arbol->dato;//El valor de la raiz es igual a lo que apunta arbol. Es decir, el primer valor (dato) que se le asigno cuando se creo la raiz
		if(n < ValorDeRaiz)//Cuando el Valor es menor va al lado izquierdo. Recordar que "n" es el valor nuevo que queremos insertar
		{
			insertar(arbol->izq, n, arbol);//Mandamos nuevamente a llamar a la funcion "incertar", pero ahora le mandamos el arbol por el lado izquierdo y le incertamos el nuevo dato n para volver a iterar y hacer la comparacion nuevamente. En este punto, se agrega el valor al lado izquierdo. Posteriormente, le mandamos "arbol" a la funcion "insertar" (la cual tiene como referencia la variable "padre") puesto que el nodo despues de la raiz, asi mismo sera un arbol que posea nodos hijos
		}
		
		else
		{
			insertar(arbol->der, n, arbol);//Mandamos nuevamente a llamar a la funcion "incertar", pero ahora le mandamos el arbol por el lado derecho y le incertamos el nuevo dato n para volver a iterar y hacer la comparacion nuevamente. En este punto, se agrega el valor al lado derecho. Posteriormente, le mandamos "arbol" a la funcion "insertar" (la cual tiene como referencia la variable "padre") puesto que el nodo despues de la raiz, asi mismo sera un arbol que posea nodos hijos
		}
	}
}

void mostrarArbol(nodo *arbol, int cont)
{
	if(arbol == NULL)//Si arbol esta vacio, entonces
	{
		return;//retorna a la funcion porque no hay nada que mostrar
	}
	else
	{
		/*Imprimimos primero por el lado derecho, llamando a la funcion nuevamente, pero mandandole el arbol que apunte a la 
		derecha, y el contador que esta inicializado en 0. Dentro del la funcion mostrarArbol, se debe coloca cont+1 porque al 
		momento de imprimir (que por cierto, siempre se inicia desde el lado mas a la izquierda hacia la derecha), debera 
		aparecer la separacion que existe entre el nodo raiz y el nodo izquierdo o derecho. Si no le colocamos el +1, entonces
		los numeros apareceran apilados en el inicio de toda la linea de comandos, es decir, sin ninguna separecion.
		Ahora, dentro del ciclo for se coloca unicamente cont porque los numeros que apareceran en la ventana cmd, iniciaran desde 
		el lado izquierdo hacia la derecha. Si se llega a colocar +1 uno, entonces apareceran todos los numeros pero con una 
		separacion.  Y al momento de que cont vaya aumentado de uno en uno, quiere decir que, por ejemplo, el primer nodo de
		la izquierda tendra un espacio de separacion. Posteriormente, el segundo nodo tendra dos espacios de separacion y asi
		sucesivamente. */
		mostrarArbol(arbol->der, cont+1);
		for(int i=0; i<cont; i++)
		{ 
			cout<<"   ";//Separacion que habra de un nodo a otro y que conforme vaya aumentando cont, entonces las separaciones tambien aumentaran y de esa manera se visualizara de mejor manera el arbol
		}
		cout<<arbol->dato<<endl;//Imprimimos el dato que estara almecenado en el arbol. 
		mostrarArbol(arbol->izq, cont+1);//Una vez que se imprimio todos los valores por el lado derecho, se vuelve a llamar a la funcion pero esta vez le mandamos arbol por el lado izquierdo. El contador en este caso seria 0 otra vez porque ahora estamos en el lado izquierdo..
	}
}

bool busqueda(nodo *arbol, int n)
{
	if (arbol == NULL)
	{
		return false;
	}
	else if (arbol->dato == n)//Si el valor que queremos buscar es el mismo que el de la raiz, 
	{
		return true;//entonces unicametne retorna verdadero y no busca mas.
	}
	else if(n < arbol->dato)//Si el valor es menor al valor de la raiz, entonces ese valor estara del lado izquierdo, por lo cual debemos verifcar todo el subconjunto izquierdo hasta dar con el numero.
	{
		return busqueda(arbol->izq,n); // busca el elemento (n) del nodo (arbol) por el lado izquierdo. Aqui no es necesario poner "return true" porque al momento de llamar a la funcion, unicmanete verificaria si el valor introducido, aparece en el lado izquierdo (ver el proceso de la linea 179), lo cual ya incluye ese return true.
	}
	else
	{
		return busqueda(arbol->der,n); // busca el elemento (n) del nodo (arbol) por el lado derecho. Aqui no es necesario poner "return true" porque al momento de llamar a la funcion, unicmanete verificaria si el valor introducido, aparece en el lado derecho (ver el proceso de la linea 179), lo cual ya incluye ese return true.
	}
}

void preOrden (nodo *arbol)
{
	if(arbol == NULL)
	{
		return;
	}
	else
	{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izq);
		preOrden(arbol->der);
	}
}

void inOrden (nodo *arbol)
{
	if(arbol == NULL)
	{
		return;
	}
	else
	{
		inOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		inOrden(arbol->der);
	}
}

void postOrden (nodo *arbol)
{
	if(arbol == NULL)
	{
		return;
	}
	else
	{
		postOrden(arbol->izq);
		postOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}

//eliminar un nodo del arbol
void eliminar(nodo *arbol, int n)
{
	if(arbol == NULL)
	{
		return;
	}
	
	else if (n < arbol->dato) // si el valor es menor
	{
		eliminar (arbol->izq, n); // entonces buscar por la izq
	}
	
	else if (n > arbol->dato) // si el valor es mayor
	{
		eliminar (arbol->der, n); // entonces buscar por la der
	}
	
	else//cuando el elemento a buscar, no es menor ni mayor ni el arbol esta vacio, entonces es porque ya se encontro el elemento,
	{
		eliminarNodo(arbol);//por lo cual procedemos a mandar a llamar a una funcion que se encargue de eliminar el nodo. Para ello debemos mandarle el arbol el cual posee el nodo en la posicion en la que vamos.
	}
}


void eliminarNodo (nodo *nodoEliminar)//creamos otra varaible de tipo nodo y que sea puntero, a la cual le mandamos el arbol con el nodo que queremos eliminar
{
	if (nodoEliminar->izq && nodoEliminar->der) //verificar que el arbol tenga tanto hijo izquierdo como derecho 
	{
		nodo *menor;//Creamos una varaible de tipo nodo y puntero, que servira para asignarle el nodo mas pequeno que se encuentra en el nodo derecho que buscaremos en seguida.
		
		menor = minimo(nodoEliminar->der);/*se manda a llamar a la funcion minimo, buscando el nodo mas a la izq pero en el 
		                                    hijo que se encuentra del lado derecho*/
		                                         
		nodoEliminar->dato = menor->dato; /*el nodoEliminar apunta al dato que queremos eliminar para de esa manera, sistituirlo 
		                                    con el valor mas a la izq del hijo derecho. Es decir, en la linea anterior "menor" tiene
									        como resultado el nodo mas a la izq del hijo derecho. Y en este caso, apunta al numero 
										    que que es de tipo entero, o sea, el de la variable "dato */
										    
		eliminarNodo(menor);              /*Se vuelve a llamar a la funcion para que elimine el valor que poseia "menor" antes de 
		                                    haber sido cambiado. O sea, menor ya posee un resultado, y al momento de llamar 
											nuevamente a al funcion, estariamos mandando y asignandole*/ 
	}
	 
	
	else if(nodoEliminar->izq)//Revisamos si el nodo tiene unicamente un solo nodo por al izquierda
	{ 
		reemplazar (nodoEliminar, nodoEliminar->izq);//Mandamos a llamar a la funcion y le mandamos el nodo que queremos eliminar, asi como tambien su hijo izquierdo. Recordar que "nodoEliminar" ocupa lo que viene siendo el arbol y sus subconjuntos.
		destruirNodo(nodoEliminar);//Mandamos a llamar a la funcion y le mandamos el nodo que queremos eliminar para que se encargue de eliminarlo por completo, utilizando "delete".
	}
	
	else if(nodoEliminar->der)//Revisamos si el nodo tiene unicamente un solo nodo por la derecha
	{
		reemplazar(nodoEliminar, nodoEliminar->der);//Mandamos a llamar a la funcion y le mandamos el nodo que queremos eliminar, asi como tambien su hijo derecho. Recordar que "nodoEliminar" ocupa lo que viene siendo el arbol y sus subconjuntos.
		destruirNodo(nodoEliminar);//Mandamos a llamar a la funcion y le mandamos el nodo que queremos eliminar para que se encargue de eliminarlo por completo, utilizando "delete".
	}
	
	else
	{
		reemplazar(nodoEliminar, NULL);//Si no tiene ningun subconjunto, es decir, es un nodo hoja, entonces le mandamos el nodo que queremos eliminar y NULL, puesto que no apunta a nada
		destruirNodo(nodoEliminar);//Mandamos a llamar a la funcion y le mandamos el nodo que queremos eliminar para que se encargue de eliminarlo por completo, utilizando "delete".
	}	
}

/*Funcion para determinar el nodo mas izq posible. Es decir,el nodo tiene hijo izquierdo y derecho. Posteriormente, se ira buscando
el por el lado derecho, llegando al nodo derecho, y finalmente, el nodo hijo que se encuentre a la izquierda, ese mismo sera el "mas izq posible"*/

nodo *minimo(nodo *arbol)
{
	if(arbol == NULL)
	{
		return NULL;
	}
	
	else
	{
		if(arbol->izq)//si tiene hijo izquierdo, 
		{
			return minimo(arbol->izq);// entonces buscar la parte mas izq posible, llamando a la funcion nuevamente y que busque por el lado izquierdo
		}
		else //si no tiene
		{
			return arbol; //retornamos el mismo nodo
		}
	}
}


void reemplazar(nodo *arbol, nodo *Actualizar)//Le mandamos el arbol (el cual arriba es nodoEliminar) y el hijo que tiene (ya sea izquierdo o derecho), pero le ponemos "actualizar" para no confundirse con el nombre.
{
	if (arbol->padre) //Verificar si el nodo que le mandamos tiene asi mismo un nodo padre.
	{
		if (arbol->dato == arbol->padre->izq->dato)//Si el valor que hay dentro del nodo que queremos eliminar, es igual al mismo arbol (nodo que queremos eliminar), pero que apunta al nodo padre, posteriormente al nodo hijo (o sea, arbol) y finalmente al dato que hay dentro de el, es exactamente el mismo, entonces...
		{
			arbol->padre->izq = Actualizar;//Actualizar (o bien, el nodo por el lado izquierdo del arbol que queremos eliminar), tomara el lugar ahora del arbol eliminado. Por ejemplo, si tenemos el nodo padre que es 7 y el hijo izquierdo que es 5, entonces simplemente eliminamos el 7 (arbol), y ahora el 5 (hijo izquierdo) tomara su lugar. O sea, se convierte en arbol.
		}
		
		else if (arbol->dato == arbol->padre->der->dato)//Si el valor que hay dentro del nodo que queremos eliminar, es igual al mismo arbol (nodo que queremos eliminar), pero que apunta al nodo padre, posteriormente al nodo hijo (o sea, arbol) y finalmente al dato que hay dentro de el, es exactamente el mismo, entonces...
		{
			arbol->padre->der = Actualizar;//Actualizar (o bien, el nodo por el lado derecho del arbol que queremos eliminar), tomara el lugar ahora del arbol eliminado. Por ejemplo, si tenemos el nodo padre que es 7 y el hijo derecho que es 5, entonces simplemente eliminamos el 7 (arbol), y ahora el 5 (hijo derecho) tomara su lugar. O sea, se convierte en arbol.
		}
	}
	
	if (Actualizar) //Hasta aqui, el nodo que hijo que tomo el valor de su padre, no esta apuntando a nada (o sea, no apunta al padre del nodo que se elimino. Por lo cual si tenemos "Actualizar"...
	{
		Actualizar->padre = arbol->padre;//procedemos a asignarle el nuevo padre. Es decir, arbol (nodo eliminado), que apunta a su padre, sera igual al nodo que esta en "Actualizar" y simplemente decimos que apunta a su nuevo padre
	}
}


//Funcion para destruir un nodo
void destruirNodo(nodo *NodoEliminado)//A esta funcion le mandamos el nodo que queremos eliminar (nodoEliminar) de manera definitiva. Y para no confundirnos, simplemente le cambiamos el nombre por NodoEliminado, el cual tiene exactamente lo mismo que nodoEliminar.
{
	//El nodo que mandamos a esta funcion, lo eliminamos haciendolo de tipo null primero y posteriormente con un delete.
	NodoEliminado->izq = NULL;
	NodoEliminado->der = NULL;	
	
	delete NodoEliminado;
}
