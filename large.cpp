#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter three numbers=";
cin>>a>>b>>c;
if(a>=b && a>=c)
  cout<<"lagest number="<<a;
else if(b>=a && b>=c)
  cout<<"largest number="<<b;
else
  cout<<"largest number="<<c;
return 0;
}
