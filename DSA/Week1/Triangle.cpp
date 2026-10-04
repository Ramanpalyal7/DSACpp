// question :Your task is to print a right-angled triangle pattern using asterisks (*).

#include <iostream>
using namespace std;

int main()
{
    int n=5;
    for(int i=1; i<=5;i++)
    {
        for(int j=1; j<=n;j++)
        {
            cout<<" * ";
        }
        n--;
        cout<<endl;
    }
    
}