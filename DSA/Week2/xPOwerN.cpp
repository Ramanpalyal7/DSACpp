// q  You are given two integers x and n


#include<iostream>
using namespace std;

int main()
{
    int x,n;
    cin>>x>>n;
    int fact=1;
    while(n!=0)
    {
        fact=fact*x;
        n--;
    }
   
    cout<<fact;
}