#include<iostream>
using namespace std;

int main()
{
    int i;

    int arr[5] = {2, 4, 6, 3, 5};
    int evensum = 0, oddsum = 0;

    for(i = 0; i < 5; i++)
    {
        if(arr[i] % 2 == 0)
        {
            evensum += arr[i];
        }
        else
        {
            oddsum += arr[i];
        }
    }

    cout << "Sum of even numbers: " << evensum << endl;
    cout << "Sum of odd numbers: " << oddsum << endl;

    return 0;
}