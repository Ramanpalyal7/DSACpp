// Insertion sort 



#include<iostream>
using namespace std;

int main()
{
     int N;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }

// insertion sort 

    for( int i=1; i <N;i++)
    {
        int temp=A[i];
        int j=i-1;

        while(j>=0 && A[j] >temp)   // Shifting largest element  & decreasing j value.
        {
            A[j+1] = A[j];
            j--;
        }

        // swaping current element

        A[j+1] = temp;

    }

     for(int i=0;i<N;i++)
     {
        cout<<A[i]<<" ";
     }









}