#include <iostream>
using namespace std;
class shape
{
public:
    virtual void draw() = 0;
};
class circle : public shape
{
public:
    void draw()
    {
        cout << "\n this is a circle class";
    }
};
class square : public shape
{
public:
    void draw()
    {
        cout << "\n this is a square class";
    }
};
int main()
{
    shape *s;
    circle c;
    s = &c;
    s->draw();
    square sq;
    s->draw();
    s->draw();
    return 0;
}