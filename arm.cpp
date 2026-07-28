#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int n,a,b,sum=0,digit=0;
cout<<"enter n:";
cin>>n;
a=n;
while(a!=0)
{
digit++;
a=a/10;
}
a=n;
while(a!=0)
{
b=a%10;
sum=sum+pow(b,digit);
a=a/10;
}
if(sum==n)
  cout<<n<<"armstrong";
else
  cout<<n<<"not";
return 0;
}
