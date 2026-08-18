#include <iostream>
using namespace std;

class Complex
{
    int r1, i1, r2, i2;
    int addR, addI;
    int subR, subI;

public:

    void getData()
    {
        cout << "Enter real part of first number: ";
        cin >> r1;

        cout << "Enter imaginary part of first number: ";
        cin >> i1;

        cout << "Enter real part of second number: ";
        cin >> r2;

        cout << "Enter imaginary part of second number: ";
        cin >> i2;
    }

    void calculate()
    {
        addR = r1 + r2;
        addI = i1 + i2;

        subR = r1 - r2;
        subI = i1 - i2;
    }

    void display()
    {
        cout << "\nAddition = " << addR << " + " << addI << "i";
        cout << "\nSubtraction = " << subR << " + " << subI << "i";
    }
};

int main()
{
    Complex c;

    c.getData();
    c.calculate();
    c.display();

    return 0;
}
