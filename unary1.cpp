#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    Number(int a)
    {
        x = a;
    }

    void operator-()
    {
        x = -x;
    }

    void display()
    {
        cout << "Number = " << x << endl;
    }
};

int main()
{
    Number n(10);

    cout << "Before:" << endl;
    n.display();

    -n;

    cout << "After:" << endl;
    n.display();

    return 0;
}