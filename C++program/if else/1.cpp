#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter any number="<<endl;
    cin>>n;

    if(n>0)
    {
        cout<<"positive number";
    }
    else if(n<0)
    {
        cout<<"negative number";
    }
    else
    {
        cout<<"not postive not negtive its symbolick present";
    }
    return 0;
}