// q You are given an integer N followed by N integers. Count how many of the given numbers are:
#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=1;i<=N;i++)
    {
        cin>>arr[i];
    }

    int pos=0,neg=0,even=0,odd=0;

    for(int i=0;i<N; i++)
    {
        if(arr[i] >0)
        {
            pos++;
        }
        else if(arr[i] < 0)
        {
            neg++;
        }

         if(arr[i] % 2==0)
         {
            even++;
         }
         else{
            odd++;
         }

    }
    cout<<pos<<endl;
    cout<<neg<<endl;
    cout<<even<<endl;
    cout<<odd<<endl;
}