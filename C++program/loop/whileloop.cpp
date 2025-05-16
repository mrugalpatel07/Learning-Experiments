#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int n;
    cout<<"enter n number";
    cin>>n;
    int i=1;
    while(i<=n)
    {
       sum=sum+i;
       i++;
    }
    cout<<"sum"<<sum<<endl;
    return 0;
}