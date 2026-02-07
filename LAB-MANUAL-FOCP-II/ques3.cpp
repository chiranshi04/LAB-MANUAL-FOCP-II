#include<iostream>
using namespace std;

int main()
{
    float fahrenheit, celsius;
    cout<<"the value of fahrenheit is ";
    cin>>fahrenheit;

    celsius = (fahrenheit - 32) * 5/9;

    cout<<"the value of celsius is ";
    cout<<celsius;
    return 0;

}


