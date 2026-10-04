// q You are given two integers A and B Your task is to find the minimum and maximum among them

#include <iostream>
using namespace std;

int main()
{
    int A,B;
    cin>>A>>B;
  
    if(A < B)
    {
        cout<<"Min = "<<A<<endl;
        cout<<"Max = "<<B<<endl;
    }
    else
    {
         cout<<"Min = "<<B<<endl;
        cout<<"Max = "<<A<<endl;
    }
}