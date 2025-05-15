#include <iostream>
using namespace std;

int main() 
{
    int num;

    cout << "Enter a 3-digit number: ";
    cin >> num;
    
    
    int a = num / 100;         
    int b = (num / 10) % 10;   
    int c = num % 10;         
    
    int sum = a*a*a + b*b*b + c*c*c;
    
    if (sum == num)
    {
        cout << num << " is Armstrong!" << endl;
    }
    else
    {
        cout << num << " is not Armstrong." << endl;
    }
    return 0;
}