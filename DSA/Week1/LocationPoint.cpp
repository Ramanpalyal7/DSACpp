// q You are given the marks obtained by a student. Based on the marks, display an appropriate performance message according to the following rules

#include<iostream>
using namespace std;
int main()
{
    int X,Y;
    cin>>X>>Y;

    if(X==0 && Y==0)
    {
        cout<<"Origin";
    }
    else if( X==0 && Y !=0)
    {
        cout<<"Y axis";

    }
    else if(Y ==0 && X !=0)
    {
        cout<<"X axis";
    }

    if(X >0 && Y >0)
    {
        cout<<"1st Quadrant";
    }
    else if(X <0 && Y >0)
    {
        cout<<"2nd Quadrant";
    }
    else if(X <0 && Y <0)
    {
        cout<<"3rd Quadrant";
    }
    else if(X >0 && Y <0)
    {
        cout<<"4th Quadrant";
    }


















}