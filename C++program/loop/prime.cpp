#include<iostream>
using namespace std;
int main()
{
    int n;
    bool isprime=true;
    cout<<"enter any number = ";
    cin>>n;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==true){
        cout<<"is a prime number";
    }
else{
    cout<<"not prime number";
}

    return 0;
}