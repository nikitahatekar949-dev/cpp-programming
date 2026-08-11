#include <iostream>
using namespace std;

class Time
{
    int h, m, s;

public:
    void get()
    {
        cin >> h >> m >> s;
    }

    Time add(Time t)
    {
        Time r;

        r.s = s + t.s;
        r.m = m + t.m + r.s / 60;
        r.s = r.s % 60;

        r.h = h + t.h + r.m / 60;
        r.m = r.m % 60;

        return r;
    }

    void display()
    {
        cout << h << ":" << m << ":" << s << endl;
    }
};

int main()
{
    Time t1, t2, sum;

    cout << "Enter first time (HH MM SS): ";
    t1.get();

    cout << "Enter second time (HH MM SS): ";
    t2.get();

    sum = t1.add(t2);

    cout << "Resultant Time: ";
    sum.display();

    return 0;
}
