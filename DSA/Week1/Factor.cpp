//q You are given two integers N and F Your task is to check whether F is a factor of N A number F is said to be a factor of N if N is divisible by F

#include<iostream>
using namespace std;

int main()
{
    int N,F;
    cin>>N>>F;
    if(N % F ==0)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}