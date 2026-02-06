// swaping number
#include<iostream>
using namespace std;
int main()

{
    int  a ,b, temp;
    cout<<"enter the valuue of a and b";
    cin>>a;
    cin>>b;
    cout<<"the value  of a before swaping is ";
    cout<<a<<endl;
    cout<<"the value  of b before swaping is ";
    cout<<b<<endl;
    
    temp = a;
    a = b;
    b = temp;

    cout<<"the value  of a after swaping is ";
    cout<<a<<endl;
    cout<<"the value  of b after swaping is ";
    cout<<b<<endl;
    
      return 0;
}