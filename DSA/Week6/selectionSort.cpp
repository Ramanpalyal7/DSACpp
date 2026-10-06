// Selection sort

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

     //  Selection sort

     for( int i=0 ; i<N-1; i++) // considering first element as min
     {

        
        int min=A[i];
        int loc=i;

   
        for( int j=i+1; j<N; j++)      // actual founding min element
        {

            if(A[j] < min)
            {
                min=A[j];
                loc=j;
            
            }
        }


        int temp=A[i];      // Swapping function
        A[i]=A[loc];
        A[loc]=temp;


     }


     for(int i=0;i<N;i++)
     {
        cout<<A[i]<<" ";
     }

}