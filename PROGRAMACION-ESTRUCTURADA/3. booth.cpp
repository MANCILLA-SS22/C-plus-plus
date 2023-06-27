#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

void binary();
void sum(int num[]);
void arithmetic_shift();
 
int comparison[5] = {1, 0, 0, 0, 0};
int first_number[5] = {0}, second_number[5] = {0}, anumcp[5] = {0};
int compare_num1[5] = {0}, compare_num2[5] = {0}, product[5] = {0}, result[5] = {0};
int num1 = 0, num2 = 0, num3 = 0;
int m = 0, n = 0;
 
int main()
{
      int count, x = 0;
      cout<<"Ingresa 2 numeros a multiplicar \n"<<endl;
      do
      {
            cout<<"Valor ingresado A:\t"<<endl;
            cin>>num1;
            cout<<"Valor ingresado B:\t"<<endl;
            cin>>num2;
      }while(num1 >=16 || num2 >=16);
      
      
      cout<<"\nProducto a realizar de %d * %d = %d"<<num1<<num2<<num1*num2<<endl;
      binary();
      cout<<"\nEquivalentes en binario\n"<<endl;
      cout<<"\nA: "<<endl;
      for(count = 4; count >= 0; count--)
      {
            cout<<first_number[count];
      }
      
      cout<<"\nB: ";
      for(count = 4; count >= 0; count--)
      {
            cout<<second_number[count];
      }
      cout<<"\nB'+ 1 = ";
      for(count = 4; count >= 0; count--)
      {
            cout<<compare_num2[count];
      }
      cout<<"\n";
      
      
      for(count = 0; count < 5; count++)
      {
            if(first_number[count] == x) 
            {
                  cout<<"\n-->";
                  arithmetic_shift();
                  x = first_number[count];
            }
            else if(first_number[count] == 1 && x == 0)
            {
                  cout<<"\n-->";
                  cout<<"\nSUB B: ";
                  sum(compare_num2);
                  arithmetic_shift();
                  x = first_number[count];
            }
            else
            {
                  cout<<"\n-->";
                  cout<<"\nADD B: ";
                  sum(second_number);
                  arithmetic_shift();
                  x = first_number[count];
            }
      }
      cout<<"\nProducto:\t";
      for(count = 4; count >= 0; count--)
      {
            cout<<product[count];
      }
      for(count = 4; count >= 0; count--)
      {
            cout<<anumcp[count];
      }
      cout<<"\n";
      return 0;
}
 
void binary()
{
      m = fabs(num1);
      n = fabs(num2);
      int r2, remainder, count, temp;
      for(count = 0; count < 5; count++)
      {
            remainder = m % 2;
            m = m / 2;
            r2 = n % 2;
            n = n / 2;
            first_number[count] = remainder;
            anumcp[count] = remainder;
            second_number[count] = r2;
            if(r2 == 0)
            {
                  compare_num2[count] = 1;
            }
            if(remainder == 0)
            {
                  compare_num1[count] =1;
            }
      }
      num3 = 0;
      for(count = 0; count < 5; count++)
      {
            result[count] = comparison[count]+ compare_num2[count] + num3;
            if(result[count] >= 2)
            {
                  num3 = 1;
            }
            else
            {
                  num3 = 0;
            }
            result[count] = result[count] % 2;
      }
      for(count = 4; count >= 0; count--)
      {
            compare_num2[count] = result[count];
      }
      if(num1 < 0)
      {
            num3 = 0;
            for(count = 4; count >= 0; count--)
            {
                  result[count] = 0;
            }
            for(count = 0; count < 5; count++)
            {
                  result[count] = comparison[count] + compare_num1[count] + num3;
                  if(result[count] >= 2)
                  {
                        num3 = 1;
                  }
                  else
                  {
                        num3 = 0;
                  }
                  result[count] = result[count] % 2;
            }
            for(count = 4; count >= 0; count--)
            {
                  first_number[count] = result[count];
                  anumcp[count] = result[count];
            }
      }
      if(num2 < 0)
      {
            for(count = 0; count < 5; count++)
            {
                  temp = second_number[count];
                  second_number[count] = compare_num2[count];
                  compare_num2[count] = temp;
            }
      }
}
 
void sum(int num[])
{
      int count;
      num3 = 0;
      for(count = 0; count < 5; count++)
      {
            result[count] = product[count] + num[count] + num3;
            if(result[count] >= 2)
            {
                  num3 = 1;
            }
            else
            {
                  num3 = 0;
            } 
            result[count] = result[count] % 2;
      }
      for(count = 4; count >= 0; count--)
      {
            product[count] = result[count];
            cout<<"%d"<<product[count];
      }
      cout<<":";
      for(count = 4; count >= 0; count--)
      {
            cout<<"%d"<<anumcp[count];
      }
}
 
void arithmetic_shift()
{
      int x = product[4], y = product[0], count;
      for(count = 1; count < 5  ; count++)
      {
            product[count - 1] = product[count];
      }
      product[4] = x;
      for(count = 1; count < 5; count++)
      {
            anumcp[count - 1] = anumcp[count];
      }
      anumcp[4] = y;
      cout<<"\nShift aritmetico";
      for(count = 4; count >= 0; count--)
      {
            cout<<"%d"<<product[count];
      }
      cout<<":";
      for(count = 4; count >= 0; count--)
      {
            cout<<"%d"<<anumcp[count];
      }
}

