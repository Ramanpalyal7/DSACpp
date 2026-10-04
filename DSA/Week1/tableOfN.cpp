// Q You are given an integer N Your task is to print the multiplication table of Nfrom 1 to 10

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
}