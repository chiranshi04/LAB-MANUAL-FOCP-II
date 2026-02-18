 // C++the concept of call by value and call by reference

#include<iostream>
using namespace std;

void swapbyvalue(int a,int b)
{
cout<<"a and b before swap= "<<a<<b<<endl;
 int temp=a;
  a=b;
 b=temp;
cout<<"a and b after swap"<<a<<b<<endl;
}

void swapbyrefernce(int &a,int &b)
{
    cout<<"a and b before swap = "<<a<<b<<endl;
    int temp =a;
    a=b;
    b=temp;
    cout<<"a and b after swap"<<a<<b<<endl;
}
int main()
{
    int x,y;
    cout<<"provide two integer"<<endl;
    cin>>x>>y;
    cout<<"x and y in main before function call  "<<x<<y<<endl;

    swapbyvalue(x,y);
    swapbyrefernce(x,y);
    cout<<"x and y in main after function call  "<<x<<y<<endl;
    return -1;
}