#include <iostream>
using namespace std;


int main()
{
    int n,N;
    cout<<"Digite un numero: ";
    cin>>n;

    cout << "\nDigite el numero de veces a muliplicar ese numero: "<< endl;
    cin>>N;

    for (int i = 1; i <= N; i++)
    {
        cout<<n<<" x " <<i<<" = "<<n*i<<endl;
    }

    return 0;
}
