// n largest number
#include<iostream>
using namespace std;
int main()
{
    int n,largest; 

    cout<<"enter the  how many numbers";
    cin>>n;

    cin>>largest; 
    for (int i=2;i<=n;i++)
    {
        int number;
        cin>>number;

        if(number>largest)
        {
            largest=number;
        }
    }
    cout<<"largest number is "<<largest;
    return 0;
}