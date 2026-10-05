// q D. Print from L to R
//You are given two integers L  and R  Print all integers from L to R in increasing order.


#include<iostream>
using namespace std;

int main ()
{
    int min=0,max=0;
        int L,R;
        cin>>L>>R;
            if(L<R)
            {
                min=L;
                max=R;
            }
            else{
                min=R;
                max=L;
            }
        for(int i =min; i<=max; i++)
        {
            cout<<i<<endl;
        }
}















