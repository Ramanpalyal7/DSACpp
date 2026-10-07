// Sum of digits -> Finding the sumofDigit of N which has value larger than long long .
// int --> 10^9
// long long --> 10^18


#include<iostream>
using namespace std;

int main()
{
  
    string N="10000000000000000000000000000";
    long long sum=0;

    for(int i=0; i<N.length(); i++)
    {               // here we have converted ASCII into Number .
            sum= sum + N[i] - 48;
    }


        cout<<sum;




   
}




// {
//      long long N;
//     cin>>N;
//     int sum=0;
//     while(N!=0)
//     {
//         int rem = N % 10;
//         sum = sum+rem;
//         N = N /10;

//     }
//     cout<<sum;
// }