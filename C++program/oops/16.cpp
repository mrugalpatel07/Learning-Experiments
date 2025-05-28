#include <iostream>
using namespace std;
int a = 27; // global scope
int main()
{
    int a = 22; // local scope
    cout << "\nValue of a = " << a;
    cout << "\nValue of a = " << ::a;
    return 0;
}