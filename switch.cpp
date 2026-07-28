#include<iostream>
using namespace std;
int main()
{
int a,b,n;
cout<<"enter two numbers=";
cin>>a>>b;
cout<<"1.add\n2.sub\n3.multi\n4.div\n";
cout<<"enter n=";
cin>>n;
switch(n)
{
case 1:
   cout<<"sum="<<a+b;
   break;
case 2:
   cout<<"diff="<<a-b;
   break;
case 3:
   cout<<"product"<<a*b;
   break;
case 4:
  cout<<"division"<<a/b;
  break;
default:
  cout<<"invalid n";
  }
return 0;
}
  
   
