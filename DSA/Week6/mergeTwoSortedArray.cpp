// Merge two sorted array without using sorting algo



#include<iostream>
using namespace std;

int main()
{
     int N,M;
    cin>>N>>M;
    int A[N];
    int B[M];
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
 
    for(int j=0;j<M;j++)
    {
        cin>>B[j];
    }
    int newSize=N+M;
        int C[newSize];

        // merge algo

    int i=0,j=0,k=0;
                             
    while ( i < N && j< M)     // place smaller elements of two arrays by comparing 
        {

            if(A[i] < B[j])
            {
                C[k] =A[i];
                i++;
            }
            else
            {
                C[k] =B[j] ;
                j++;
            }
            k++;
        }

        // copy the remaining sorted array

        while(i < N)
        {
            C[k] =A[i];
            i++;
            k++;
        }

        while(j < M)
        {
            C[k] = B[j];
            j++;
            k++;
        }

cout<<"End arara"<<endl;

        // end sorted array
      for(int i=0;i<newSize;i++)
     {
        cout<<C[i]<<" ";
     }





}