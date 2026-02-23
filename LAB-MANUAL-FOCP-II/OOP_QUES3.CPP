//bank account summary
#include<iostream>
using namespace std;

class bankaccount
{
    string accountholdername;
    int accountnumber;
    double balance;
    public:
    void input_details()
    {
        cout<<"enter the holder name:";
        cin>>accountholdername;

        cout<<"account number:";
        cin>>accountnumber;

        cout<<"balance is:";
        cin>>balance;
    }
    void display_details()
    {
       cout<<" account holder name"<<accountholdername<<endl;
       cout<<"number is "<<accountnumber<<endl;
       cout<< "balance is ="<<balance<<endl;
    }

};
int main()
{
  bankaccount s1;
  s1.input_details();
  s1.display_details();
  
 return 0;

}