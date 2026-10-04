// q You are given the marks obtained by a student. Based on the marks, display an appropriate performance message according to the following rules .

#include<iostream>
using namespace std;

int main()
{
    int marks;
    cin>>marks;

    if(marks <= 60)
        {
            cout<<"Below Par";
        }

    else if(marks > 60  && marks <=70 )
    {
        cout<<"Meets Expectataions ";
    }

    else if(marks > 70 && marks <=80)
    {
        cout<<"Fair";
    }

    else if(marks >80 && marks <=90)
    {
        cout<<"Good";
    }
    else{
        cout<<"Excellent";
    }
}