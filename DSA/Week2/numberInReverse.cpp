//q print numbers in reverse  Given an integer N , print the digits of N in reverse order.

#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N!=0)
    {
        int rem= N % 10;
        cout<<rem;
        N = N /10;
    }
}
