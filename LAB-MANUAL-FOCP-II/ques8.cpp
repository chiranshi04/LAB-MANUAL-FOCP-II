//aplling tags 
#include<iostream>
using namespace std;
int main()
{
    int n1;
    cout<<"enter a number";
    cin>>n1;

    if(n1%3==0 && n1%5==0)
    cout<<"both tag";

    else if (n1%3==0)
    cout<<"bugs";

    else if (n1%5==0)
    cout<<"fuzz";

    else 
    cout<<"none";
    return 0;
}