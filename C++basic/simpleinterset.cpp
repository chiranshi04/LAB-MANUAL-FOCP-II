#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Enter principal";  // work same as printf in c
    cin>>p;                   // work same as scanf in c but use >> operator instead of<<
    cout<<"Enter rate";
    cin>>r;
    cout<<"Enter time";
    cin>>t;

    si=(p*r*t)/100;
    cout<<"Simple interest is: "<<si;
    return 0;
}