#include<iostream>
using namespace std;
int main()
{
    int n ,sum=0,i;

    cout<<"enter the n =";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        sum= sum+i;
    }
    cout<<"sum="<<sum<<endl;


    return 0;
    
}