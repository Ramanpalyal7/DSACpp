// q  Reverse Number and Store in a Variable

#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int revNum=0;

    while (N!=0)
    {
        int rem= N % 10;
        revNum =revNum * 10 + rem;
        N = N / 10;

    }
    cout<<revNum;
    
}