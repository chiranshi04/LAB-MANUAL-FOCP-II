// HR net salaray calculator 
#include <iostream>
using namespace std;
int main()
{
    int employess,basic_salary,discount,bonus;
    float net_salary;
      cout<<"enter the number of employess ";
  cin>>employess;
  cout<<"enter the basic salary ";
  cin>>basic_salary;
  cout<<"enter the discount ";
  cin>>discount;
  cout<<"enter the bonus ";
  cin>>bonus;
  
  net_salary = basic_salary + discount + 0.12 * bonus;
  cout<<"net salary is: "<<net_salary<<endl;
  return 0;
}