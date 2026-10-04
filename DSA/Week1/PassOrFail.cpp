// q You are given the marks obtained by a student. Your task is to check whether the student has passed or failed. A student is considered to have passed if the marks obtained are at least 35

#include<iostream>
using namespace std;

int main()
{
    int marks;
    cin>>marks;
    if(marks >= 35 )
    {
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
}