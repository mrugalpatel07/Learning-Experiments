#include <iostream>
#include <cmath>

using namespace std;

class Circle 
{
private:
    double radius;
    const double pi = 3.14;

public:
    void set()
    {
        cout << "Enter the radius: ";
        cin >> radius;
    }

    double getArea()
    {
        return pi * radius * radius;
    }

    double getCircumference()
    {
        return 2 * pi * radius;
    }
};

int main()
{
    Circle s1;
    s1.set();
    
    double area = s1.getArea();
    double circumference = s1.getCircumference();
    
    cout << "The area of the circle is: " << area << endl;
    cout << "The circumference of the circle is: " << circumference << endl;

    return 0;
}