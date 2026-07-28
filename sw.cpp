#include<iostream>
using namespace std;
void swap(int a,int b)
{
int n;
n=a;
a=b;
b=n;
cout<<"inside function:"<<a<<" "<<b<<endl;
}
int main()
{
int a,b;
cout<<"enter two numbers=";
cin>>a>>b;
swap(a,b);
cout<<"outside function"<<a<<" "<<b;
return 0;
}
