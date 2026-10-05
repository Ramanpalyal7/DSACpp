// q You are given an integer N Print all integers from N to 1 in decreasing order.

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    for(int i = n; i>=1; i--)
    {
        cout<<i<<endl;
    }
}