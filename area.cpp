#include<iostream>
using namespace std;
void circle(float r)
{
cout<<"area="<<3.14*r*r<<endl;
cout<<"circumference="<<2*3.14*r;
}
int main()
{
float r;
cout<<"enter r=";
cin>>r;
circle(r);
return 0;
}
