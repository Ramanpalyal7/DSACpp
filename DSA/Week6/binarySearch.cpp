// Binary search  -- > The Array  must be sorted to apply Binary Search .

#include<iostream>
using namespace std;

int BinarySearch( int N, int arr[], int X)
{
        int left=0;
        int right=N-1;

        while(left <= right)
        {
                int mid=(left+right)/2;

                if(arr[mid] == X)
                {
                    return mid;
                }
                else if(arr[mid] >X)
                {
                    right=mid-1;
                }
                else{
                    left=mid +1;
                }
        }
        return -1;
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

   int result = BinarySearch(N,arr,X);
    cout<<result;
}