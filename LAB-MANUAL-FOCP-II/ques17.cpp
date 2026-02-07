#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    // --------- Perfect Number Check ----------
    int sum = 0;
    for(int i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }

    if(sum == n)
        cout << "Perfect number\n";
    else
        cout << "Not a perfect number\n";


    // --------- Armstrong Number Check ----------
    int temp = n, remainder;
    int armstrongSum = 0, digits = 0;

    while(temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp > 0)
    {
        remainder = temp % 10;
        armstrongSum += pow(remainder, digits);
        temp /= 10;
    }

    if(armstrongSum == n)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";

    return 0;
}
