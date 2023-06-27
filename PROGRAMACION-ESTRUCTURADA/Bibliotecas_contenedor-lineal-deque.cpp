#include <iostream>
#include <deque>
using namespace std;

int main()
{
	deque<char> letras;
	letras.push_front('C');//Agregamos un elemento por el principio.
	letras.push_front('B');
	letras.push_front('A');
	
	letras.push_back('D');//Agregamos un elemento por el final.
	letras.push_back('E');
	letras.push_back('F');
	
	for(int i=0; i<letras.size(); i++)
	{
		cout<<letras[i]<<"|";
	}
	
	letras.pop_front();
	letras.pop_back();
	cout<<endl;
	
	for(int i=0; i<letras.size(); i++)
	{
		cout<<letras[i]<<"|";
	}

    return 0;
}
