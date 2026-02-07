//arthiemetic progession 
#include<iostream>
using namespace std;
int main()
{
    int a,b,result;
    cout<<"enter the value of a  and b";
    cin>>a>>b;
    int choice;
    cout<<"1.addition\n2.subtraction\n3.multiplication\n4.division\n5.modulus\n";
    cout<<"enter your choice";
    cin>>choice;
       
        switch(choice)
        {
            case 1:
            result=a+b;
            cout<<"addition is"<<result;
            break;
            case 2:
            result=a-b;
            cout<<"subtraction is"<<result;
            break;
            case 3:
            result=a*b;
            cout<<"multiplication is"<<result;
            break;
            case 4:
            result=a/b;
            cout<<"division is"<<result;
            break;
            case 5:
            result=a%b;
            cout<<"modulus is"<<result;
            break;
            default:
            cout<<"invalid choice";
        }
        return 0;

}