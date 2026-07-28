#include<iostream>
using namespace std;
inline float SI(float p,float r,float t)
{
return(p*r*t)/100;
}
int main()
{
float p,r,t;
cout<<"enter principal,rate and time:";
cin>>p>>r>>t;
cout<<"simple interest="<<SI(p,r,t);
return 0;
}
