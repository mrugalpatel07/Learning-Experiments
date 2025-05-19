#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nMultiplication tables of " << num1 << " and " << num2 << ":\n";

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 2; j++) {
            int num = (j == 1) ? num1 : num2;
            cout << num << " x " << i << " = " << num * i << "\t";
        }
        cout << endl;
    }

    return 0;
}