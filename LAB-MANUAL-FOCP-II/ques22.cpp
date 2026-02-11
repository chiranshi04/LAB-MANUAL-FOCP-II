#include <iostream>
using namespace std;
int main()
{
    int a = 8;

    for (int i = 0; i <= a; i++)
    {
        cout << "*";

    }
     cout<<'\n';  
       for (int j = 0; j <= a; j++)
    {
        for (int i = 0; i <= a; i++)
        {
            if (i == 0 || i == a)
            {
                cout << "*";
            }
            else
            {
            cout << " ";
            }
        }
        cout<<'\n';
    }
    
    for (int i = 0; i <= a; i++)
    {
        cout << "*";
    }
    return 0;
}