#include<iostream>
using namespace std;
class student {
    private :
    int id;
    string name;
    double per;
    public :
    void set()
    {
       cout<<"enter the id = ";
       cin>>id;
       cout<<"enter the name = ";
       cin>>name;
       cout<<"enter the percentage = ";
       cin>>per;

    }
    void get()
    {
     cout<<"id = "<<id<<endl;
     cout<<"name = "<<name<<endl;
     cout<<"percentage = "<<per<<endl;
    }

};
int main()
{
student s1,s2;
s1.set();
s1.get();
s2.set();
s2.get();

return 0;
}
