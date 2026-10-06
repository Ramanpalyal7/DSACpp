// Linear Searching

#include<iostream>
using namespace std;

string LinearSearch(int N,int arr[] ,int X)
{
          // Linear search

    for(int i= 0; i< N;i++)
    {
        if(X == arr[i])
        {
            return "YES";
        }
    }
    return "NO";

}


int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i < N;i++)
    {
        cin>>arr[i];
    }

    int X;
    cin>>X;

    string result=LinearSearch(N,arr,X);
  cout<<result;
}