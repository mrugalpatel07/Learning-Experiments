#include<iostream>
using namespace std;
int main()
{
    char ch;

    cout<<"Enter a character = ";
    cin>>ch;

    cout<<"The ch = "<<ch<<endl;

    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
    {
        cout<<"This is Alphabet";
    }
    else if(ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9' || ch == '0')
    {
        cout<<"This is Digit";
    }
    else
    {
        cout<<"This is a special character";
    }
    return 0;
}