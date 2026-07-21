#include<iostream>
using namespace std;
int main()
{
int n;
long long fact=1;
cout<<"enter n=";
cin>>n;
for(int i=1;i<=n;i++)
  fact*=i;
cout<<"factorial="<<fact;
return 0;
}
