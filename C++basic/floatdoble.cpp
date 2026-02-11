#include<iostream>
using namespace std;
int sum(int a,int b);
float sum(float,float);
double sum(double,double);
 int main()
 {
    cout<<sum(5,6);
    cout<<sum(5.567f,6.782f);
    cout<<sum(5.567,6.782);
    return 0;
}
int sum(int a,int b)
{
    cout<<"int sum";
    return (a+b);
}
int
