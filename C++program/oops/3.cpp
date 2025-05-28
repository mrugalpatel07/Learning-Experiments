#include<iostream>
using namespace std;
class student {
    private :
    int id;
    string name;
    double per;
    public :
    void set(int a,string b,double c)
    {
        id=a;
        name=b;
        per=c;
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
s1.set(101,"mrugal",98.6);
s1.get();
s2.set(102,"deep",99.99);
s2.get();

return 0;
}
