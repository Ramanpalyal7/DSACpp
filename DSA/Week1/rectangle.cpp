// Q you are given the length and breadth of a rectangle. Your task is to calculate its area and perimeter.
#include <iostream>
using namespace std;

int main()
{
    int length,breadth;
    cout<<"enter length and breadth of rectangle "<<endl;
    cin>>length>>breadth;

    cout<<"Area of rectangle is "<<length*breadth<<endl;
    cout<<"Perimeter of rectangle is "<<2*(length+breadth)<<endl;


}