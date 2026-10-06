// Bubble Sort

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


    // Bubble Sort

    for(int i=N-1; i>=1; i--)  // no.of swapps needed
    {

        for(int j=0; j<i; j++)
        {
            if(A[j] > A[j+1])          // compare larger .
            {

                                             // swapp fun
                int temp=A[j];
                A[j] =A[j+1];
                A[j+1] = temp;
            }
        }

    }


    
     for(int i=0;i<N;i++)
     {
        cout<<A[i]<<" ";
     }


}