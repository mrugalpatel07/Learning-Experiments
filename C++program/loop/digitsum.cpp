#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter any number";
    cin>>n;
    int digsum=0;
    while(n>0)
    {
        int lastdigit = n%10;
        digsum=digsum+lastdigit;
        n=n/10;
    }
    cout<< "sum = "<< digsum<<endl;

    return 0;
}