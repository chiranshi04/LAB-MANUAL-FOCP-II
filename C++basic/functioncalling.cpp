#include<iostream>
using namespace std;

void swap(int &a , int &b)
{
    cout<<"a and n before swap"<<a<<b<<endl;
    int temp=a;
   a=b;
  b=temp;
  cout<<"a and b after swap"<<a<<b<<endl;
}
main()
{
    int x,y;
    cout<<"provide two integer"<<endl;
    cin>>x>>y;
    cout<<"x and y in main before function call  "<<x<<y<<endl;

    swap(x,y);
    cout<<"x and y in main after function call  "<<x<<y<<endl;
    return -1;
}