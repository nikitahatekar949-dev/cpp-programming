#include<iostream>
using namespace std;
void swapRef(int &a,int &b)
{
int n;
n=a;
a=b;
b=n;
}
int main()
{
int a,b;
cout<<"enter two number=";
cin>>a>>b;
swapRef(a,b);
cout<<"after="<<a<<" "<<b;
return 0;
}
