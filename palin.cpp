#include<iostream>
using namespace std;
int main()
{
int n,a,rev=0,b;
cout<<"enter n";
cin>>n;
a=n;
while(n!=0)
{
b=n%10;
rev=rev*10+b;
n=n/10;
}
if(a==rev)
  cout<<"palindrome";
else
cout<<"not";
return 0;
}
