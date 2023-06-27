//13. Hacer un que realize la serie fibonacci -> 1 1 2 3 5 8 13...n

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

using namespace std;
int main()
{
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
}