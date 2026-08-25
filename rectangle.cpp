#include<iostream>
using namespace std;
class Rectangle
{
     float length;
    float breadth;
public:
Rectangle()
{
    length=1;
    breadth=1;
}
Rectangle(float l,float b)
{
    length=l;
    breadth=b;
}
Rectangle(const Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void display()
{
    float area=length*breadth;
    cout<<"Length:"<<length<<endl;
    cout<<"Breadth:"<<breadth<<endl;
    cout<<"Area:"<<area<<endl;    
}
};
int main()
{
    Rectangle r1;
    cout<<"Default Constructor:"<<endl;
    r1.display();
    cout<<"\nParameterized Constructor:"<<endl;
    Rectangle r2(10,5);
    r2.display();
    cout<<"\nCopy Constructor:"<<endl;
    Rectangle r3(r2);
    r3.display();
    return 0;
}
   