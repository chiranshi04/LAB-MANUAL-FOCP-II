//miinium temp of month
#include<iostream>
using namespace std;
int main()
{
    int i, min;

    int arr[5] = {2, 4, 6, 3, 5};
    min = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Minimum temperature of the month: " << min << endl;

    return 0;
}