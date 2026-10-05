// q N. Palindrome

#include<iostream>
using namespace std;

int main ()
{
     int N;
    cin>>N;
    int M=N;
    int revNum=0;

    while (N!=0)
    {
        int rem= N % 10;
        revNum =revNum * 10 + rem;
        N = N / 10;

    }
    

    if(revNum == M)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}