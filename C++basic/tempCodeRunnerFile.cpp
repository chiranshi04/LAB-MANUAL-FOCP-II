#include<iostream>
using namespace std;

void swap(int *a , int *b)
{
    cout<<"a and n before swap"<<a<<b<<endl;
    int temp=*a;
   *a=*b;
  *b=temp;
  cout<<"a and b after swap"<<*a<<*b<<endl;
}