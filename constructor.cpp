#include <iostream>
using namespace std;

class Rectangle
{
    // Attributes
    float length, width;

public:
    // Default Constructor
    Rectangle()
    {
        length = 0;
        width = 0;
        cout << "Default Constructor called" << endl;
    }

    // Parameterized Constructor
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
        cout << "Parameterized Constructor called" << endl;
    }

    // Member function to calculate area
    float area()
    {
        return length * width;
    }

    // Member function to calculate perimeter
    float perimeter()
    {
        return 2 * (length + width);
    }

    // Destructor
    ~Rectangle()
    {
        cout << "Destructor called" << endl;
    }
};

int main()
{
    float l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    // Creating object using parameterized constructor
    Rectangle r(l, w);

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;

    return 0;
}