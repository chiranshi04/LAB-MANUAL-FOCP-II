// applying 20% discount on purchase
#include<iostream>
using namespace std;
int main()
{
    int item_no ,quantity;
    float price ,total_price,discounted_price;

    cout<<"enter the item no ";
    cin>>item_no;
    cout<<"enter the quantity ";
    cin>>quantity;
    cout<<"enter the price ";
    cin>>price;

    total_price = price * quantity;
    discounted_price = total_price - (total_price * 0.2);

    cout<<"the total price is ";
    cout<<total_price<<endl;
    cout<<"the discounted price is ";
    cout<< discounted_price;
return 0;
}