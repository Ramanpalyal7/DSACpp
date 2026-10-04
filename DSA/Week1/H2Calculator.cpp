// Q You are given two integers N and M Your task is to compute and print the results of the following operations:


#include<iostream>
using namespace std;

int main()
{
    long long N,M;
    cin>>N>>M;

    cout<<N<<" + "<<M<<" = "<<N+M<<endl;
    cout<<N<<" - "<<M<<" = "<<N-M<<endl;
    cout<<N<<" * "<<M<<" = "<<N*M<<endl;
    cout<<N<<" / "<<M<<" = "<<N/M<<endl;
    cout<<N<<" % "<<M<<" = "<<N%M<<endl;

}