// Bubble sort optimized version :  boolean swapped is added


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

        //Bubble sort

        for( int i =N-1; i>=1; i--)
        {

            bool swap= false;

            for( int j=0 ; j<i ; j++)
            {

                if(A[j] > A[j+1])
                {
                    swap=true;

                    int temp = A[j];
                    A[j]=A[j+1];
                    A[j+1] = temp;
                }
            }

            if(swap == false)
            {
                break;
            }


        }

 
        for(int i=0;i<N;i++)
     {
        cout<<A[i]<<" ";
     }





}