#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor to ensure proper cleanup
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "\nThis is a Circle class.";
    }
};

class Square : public Shape
{
public:
    void draw() override
    {
        cout << "\nThis is a Square class.";
    }
};

int main()
{
    Shape* shapes[2]; // Array of pointers to demonstrate polymorphism

    shapes[0] = new Circle(); // Dynamically allocating objects
    shapes[1] = new Square();

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->draw(); // Calls the correct overridden function
    }

    // Cleaning up dynamically allocated memory
    for (int i = 0; i < 2; i++)
    {
        delete shapes[i];
    }

    return 0;
}