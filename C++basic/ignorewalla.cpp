// writing the name using cin.ignore with using another input statement
// and when we have to just write the sentence we will noyt use ignore concept
#include<iostream>
using namespace std;
int main()
{
//   int a=10;
  string s;
  cout<< "enter the value of a and s";
//   cin>>a;
//   cin.ignore();         // it ignore the buffer value of a
  getline(cin,s);
//   cout<<"\n the value of a is = "<<a<<" \n the value of s is="<<s;
    cout<<" \n the value of s is="<<s;
  return 0;

}