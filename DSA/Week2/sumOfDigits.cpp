// q Given an integer N find the sum of its digits.

#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;

    int sum=0;
    while(N!=0)
    {
        int rem= N % 10;
        sum = sum+rem;
        N = N /10;
    }

    cout<<sum;
}

