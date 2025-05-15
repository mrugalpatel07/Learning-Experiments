#include<iostream>
using namespace std;
int main()
{
    int roll,n1,n2,n3;
    string name;

    cout<<"Enter the roll =";
    cin>>roll;

    cout<<"Enter the name = ";
    cin>>name;

    cout<<"Enter subject 1 mark = ";
    cin>>n1;
    cout<<"Enter subject 2 mark = ";
    cin>>n2;
    cout<<"Enter subject 3 mark = ";
    cin>>n3;

    int n4 = n1+n2+n3;

    cout<< "roll no = "<<roll<<endl;
    cout<<"Name = "<<name<<endl;

    cout<<"The total Mark = "<<n4<<endl;
    

    float per = n4/3;

    cout<<"Percentage = "<<per<<endl;

    if(per>80)
    {
        cout<<"Grade = A";
    }
    else if(per<=80 && per>45)
    {
        cout<<"Grade = B";
    }
    else
    {
        cout<<"Grade = C";
    }
    return 0;
}