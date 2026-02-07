#include<iostream>
#include<cmath>
using namespace std;              // power function a^b=2^2=4

int main()
{
    int a,b;
    cout<<"the first number is ";
    cin>>a;

     cout<<"the second number is ";
    cin>>b;

    cout<<"the squareroot is the ";
    int result = pow(a,b);
    cout<< result;
    return 0;
    
}