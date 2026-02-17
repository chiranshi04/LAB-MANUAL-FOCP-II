#include<iostream>
using namespace std;
int main()
{
    int arr[10]={200,300,457,800,567,987,908,345,678,789};
    int maximum;
    maximum=arr[0];
    for(int i=1;i<=10;i++)
    {
        if(maximum<arr[i])
        {
            maximum=arr[i];
        }
        
    }
    cout<<"the maximum number is="<<maximum;
    return 0;

}