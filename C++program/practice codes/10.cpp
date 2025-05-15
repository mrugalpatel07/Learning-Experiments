// write a c++ program to check whether a triangle can formed with the given values for the angles,(addition of all angles should be 180 deg)//
#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;

    cout<<"Enter the n1 = ";
    cin>>n1;
    cout<<"Enter the n2 = ";
    cin>>n2;
    cout<<"Enter the n3 = ";
    cin>>n3;

    int n4 = n1+n2+n3;
    cout<<"Total of all = "<<n4<<endl;

    if(n4 == 180)
    {
        cout<<"This is triangle";
    }
    else
    {
        cout<<"The triangle will not formed";
    }
    return 0;
}