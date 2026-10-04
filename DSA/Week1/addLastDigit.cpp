// Q You are given two integers N and MYour task is to find the sum of the last digits of Nand M
#include<iostream>
using namespace std;

int lastDigit(int x)
{
    int remainder= x %10;
    return remainder;
}
int main()
{
    int N,M;
    cin>>N>>M;
    int sum=0;
  sum += lastDigit(N)+ lastDigit(M);
   cout<<sum;


}