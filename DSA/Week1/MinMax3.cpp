// q You are given three integers A B and C Your task is to find the minimum and maximum among them

#include<iostream>
using namespace std;

int main()
{
    int A,B,C;
    cin>>A>>B>>C;

    int min=A,max=A;
    if(B < min)
    {
        min=B;
    }
    else if(C < min)
    {
        min=C;
    }

    if(B >max)
    {
        max=B;
    }
    else if(C > max)
    {
        max=C;
    }
    
    cout<<"Min"<<" = "<<min<<endl;
    cout<<"Max"<<" = "<<max<<endl;
}