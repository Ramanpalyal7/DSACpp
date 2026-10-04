// Q You are given two integers N and MYour task is to compute and print the results of the following operations:
#include<iostream>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;

    cout<<N<<" + "<<M<<" = "<<N+M<<endl;
    cout<<N<<" - "<<M<<" = "<<N-M<<endl;
    cout<<N<<" * "<<M<<" = "<<N*M<<endl;
    cout<<N<<" / "<<M<<" = "<<N/M<<endl;
    cout<<N<<" % "<<M<<" = "<<N%M<<endl;

}