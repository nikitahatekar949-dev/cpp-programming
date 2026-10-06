#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of shape" << endl;
    }
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area() override
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

class Square : public Shape
{
    float side;

public:
    Square(float s)
    {
        side = s;
    }

    void area() override
    {
        cout << "Area of Square = " << side * side << endl;
    }
};

int main()
{
    Shape *ptr;

    Circle c(5);
    Rectangle r(10, 5);
    Square s(4);

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    ptr = &s;
    ptr->area();

    return 0;
}