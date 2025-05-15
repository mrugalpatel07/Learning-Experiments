#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter the year = "  << endl;
    cin >> year;
    if (year % 400 == 0)
    {
        if (year % 100 == 0)
        {
            cout << "is a leap year = " ;
        }
        
    }
    else
    {
        cout << " is not leap year = " ;
    }
    

    return 0;
}