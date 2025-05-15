#include<iostream>
using namespace std;
int main()
{
    int height;
    cout<<"enetr the height = ";
    cin>>height;
    if(height<+150)
    {
        cout<<"dwarf";
    }
    else if(height>150 && height <=200)
    {
        cout<<"aevrage";
    }
    else 
    {
        cout<<"toller";
    }
    return 0;
}