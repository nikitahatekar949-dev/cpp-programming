#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"enter year=";
cin>>year;
if(year%4==0)
  cout<<"year is leap";
else
  cout<<"not leap";
return 0;
}
