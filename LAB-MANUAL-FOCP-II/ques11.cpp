//10 % discount onabove 1000
#include<iostream>
using namespace std;
int main()
{
    float price,discounted_price;
    cout<<"enter the price of the item";
    cin>>price;

    if(price>=1000)
    discounted_price=price-(price*0.1);
    else
    discounted_price=price;
     cout<<"the discounted price is: "<<discounted_price;
     return 0;
}