#include<iostream>
using namespace std;
template <typename T>
void swapping(T&n1,T&n2)
{
    T temp;
    temp=n1;
    n1=n2;
    n2=temp;
}
int main()
{
    int a=10;
    int b=20;
    cout<<"\nValue of a before swapping = "<<a;
    cout<<"\nValue of b before swapping = "<<b;
    swapping(a,b);
    cout<<"\nValue of a after swapping = "<<a;
    cout<<"\nValue of b after swapping = "<<b;

char ch1='m';
char ch2='n';
       cout<<"\nValue of ch1 before swapping = "<<ch1;
    cout<<"\nValue of ch2 before swapping = "<<ch2;
    swapping(ch1,ch2);
    cout<<"\nValue of ch1 after swapping = "<<ch1;
    cout<<"\nValue of ch2 after swapping = "<<ch2;

    float a1=99.99;
    float b2=77.22;
    cout<<"\nValue of a1 before swapping = "<<a1;
    cout<<"\nValue of b2 before swapping = "<<b2;
    swapping(a1,b2);
    cout<<"\nValue of a1 after swapping = "<<a1;
    cout<<"\nValue of b2 after swapping = "<<b2;

    string s1 = "mrugal";
    string s2 = "patel";
    cout<<"\nValue of a before swapping = "<<s1;
    cout<<"\nValue of b before swapping = "<<s2;
    swapping(s1,s2);
    cout<<"\nValue of s1 after swapping = "<<s1;
    cout<<"\nValue of s2 after swapping = "<<s2;


    return 0;
}