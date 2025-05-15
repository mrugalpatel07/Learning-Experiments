#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the a=";
    cin>>a;
    cout<<"enter the b=";
    cin>>b;
    cout<<"enter the c=";
    cin>>c;

    if(a>b && a>c)
    {
        cout<<"a is largest number";
    }
    else if(b>c && b>a)
    {
        cout<<"b is largest number";
    }
    else{
        cout<<"c is a largest number";
    }
    return 0;

}