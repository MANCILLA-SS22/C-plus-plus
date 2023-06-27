#include <iostream>
#include <conio.h>

using namespace std;

int main()
{

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
	if (ca == fb)
	{
		// Ingreso de valores de la matriz A
		cout << "Introduzca los valores de A: " << endl;
		for (i = 1; i < fa; i++)
		{
			for (j = 0; j < ca; j++)
			{
				cout << "A [" << i << "][" << j << "]: ";
				cin >> A[i][j];
			}
		}

		// Ingreso de valores de la matriz B
		cout << "Introduzca los valores de B: " << endl;
		for (i = 1; i < fb; i++)
		{
			for (j = 0; j < cb; j++)
			{
				cout << "B [" << i << "][" << j << "]: ";
				cin >> B[i][j];
			}
		}

		// Seleccion de la operacion que desea realizar
		cout << "Seleccione la operacion que desea realizar (1-suma, 2-resta, 3-multiplicacion)" << endl;
		cin >> op;
		switch (op)
		{
		case 1:
			// Multiplicacion de matriz

			for (i = 1; i <= fa; i++)
			{
				for (j = 1; j <= cb; j++)
				{
					res[i][j] = 0;
					for (k = 1; k <= ca; k++)
					{
						res[i][j] = res[i][j] + (A[i][k] * B[k][j]);
					}
				}
			}
			break;

		case 2:
			// Resta de matriz
			for (i = 1; i <= fa; i++)
			{
				for (j = 1; j <= cb; j++)
				{
					res[i][j] += A[i][k] - B[k][j];
				}
			}
			break;

		case 3:
			// Suma de matriz
			for (i = 1; i <= fa; i++)
			{
				for (j = 1; j < cb; j++)
				{
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
		for (i = 1; i <= fa; i++)
		{
			for (j = 1; j <= cb; j++)
			{
				cout << res[i][j] << "  ";
			}
			cout << "\n";
		}
	}
	else
		cout << "La operacion no se puede resolver" << endl;

	getch();
	return 0;
}
