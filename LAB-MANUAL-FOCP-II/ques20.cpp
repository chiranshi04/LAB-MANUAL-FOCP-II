#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 3; i++)     // rows
    {
        for(int j = 1; j <= 5; j++) // columns
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}