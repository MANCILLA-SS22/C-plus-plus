#include <iostream>
using namespace std;

template <class Tipo>
Tipo maximo (Tipo, Tipo, Tipo);
int aux;
int main()
{
  int a = 15;
  int b = 20;
  int c = 19;
  maximo(a, b, c);
  cin.get();
  return 0;
}

template <class Tipo> 
Tipo maximo (Tipo a, Tipo b, Tipo c) 
{
  int i, j, arr [3]; arr [0] = a; arr [1] = b; arr [2] = c;
  for (i = 1; i < 3; i++) 
  {
    for (j = 0; j<3-i; j++ ) 
    {
      if (arr[j] > arr [j+1]) 
      {
      aux = arr [j];
      arr[j] = arr[j+1];
      arr[j+1] = aux;
      }
    }
  }  

cout << arr[2];
}
