// q You are given two integers N and M Your task is to check whether M is a multiple of N

#include<iostream>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;

    if(M % N==0)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}