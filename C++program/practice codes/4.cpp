#include<iostream>
using namespace std;
int main()
{
    int a=10,b=20;

    int temp = a; 
    int copy = b;

    a = copy;
    b = temp;

    cout<<"value of a = "<<a<<endl;
    cout<<"vlaue of b = "<<b<<endl;

    return 0;
}