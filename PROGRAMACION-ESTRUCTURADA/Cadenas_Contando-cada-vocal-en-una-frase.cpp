#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	char frase[30];
	int i, voc_a=0 ,voc_e=0, voc_i=0, voc_o=0, voc_u=0;
	
	cout<<"Digite una frase: ";
	cin.getline(frase,30,'\n');
	
	for(i=0; i<30; i++)
	{
		switch(frase[i])
		{
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
}
