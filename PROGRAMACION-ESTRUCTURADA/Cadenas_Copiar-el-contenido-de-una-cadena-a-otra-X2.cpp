#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
int main(){
 char ptx[100]; //Primer texto [ptx]
 char stx[100]; //Segundo texto [stx]
 
 cout<<"Escriba el texto que desee: ";
 cin.getline(ptx,100,'\n');

 strcpy(stx,ptx);
 
 cout<<"\nSu texto fue: "<<stx<<endl;
 cout<<"\n";
 
 cin.get();
 return 0;
}
