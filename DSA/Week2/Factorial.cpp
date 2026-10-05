// q  You are given an integer N Find the factorial of N by writing a function that takes N as a parameter and returns N

#include<iostream>
using namespace std;

int factorial(int N)
{
    int fact=1;
    for(int i=N;i>=1;i--)
    {
            fact = fact * i;
    }
    return fact;
}

int main()
{
    int N;
    cin>>N;
 int result=factorial(N);
 cout<<result;
}