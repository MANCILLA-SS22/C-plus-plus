#include <iostream>
#include <tr1/unordered_map>
using namespace std;


string to_base(int number,int base)
{
	string bases = "0123456789ABCDEF";
	string result = "";

	while(number > 0)
	{
		result = bases[number % base] + result;
		number /= base;
	}
	return result;
}

int main(int argc, char const *argv[])
{
	tr1::unordered_map<char,int> map;	
	string number;
	int base1,base2;
	int index = 1,integerresult = 0;	
	string result = "";
	string bases = "0123456789ABCDEF";

	map['0'] = 0;
	map['1'] = 1;
	map['2'] = 2;
	map['3'] = 3;
	map['4'] = 4;
	map['5'] = 5;
	map['6'] = 6;
	map['7'] = 7;
	map['8'] = 8;
	map['9'] = 9;
	map['A'] = 10;
	map['B'] = 11;
	map['C'] = 12;
	map['D'] = 13;
	map['E'] = 14;
	map['F'] = 15;	
	
	cout << "Ingresa: [numero] [base 1] [base 2]" << endl;
	cin >> number >> base1 >> base2;

	for(int i=number.size()-1; i>=0; i--)
	{
		integerresult += map[number[i]] * index;
		index *= base1;
	}	
	cout << "Resultado: " << to_base(integerresult,base2) << endl;
	return 0;
}

