#include <iostream>
#include <string>
using namespace std;

int main()
{
    string paswd;
    char ch;

    cout << "Enter the pswd: ";
    getline(cin, paswd);

    int isupper=0, islower=0, digit=0, special_char=0;

    for(int i=0; i < paswd.length(); i++)
    {
        ch = paswd[i]; // checking every single individual character of the password

        if(ch >= 'A' && ch <= 'Z')
        {
            isupper = 1;
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            islower = 1;
        }
        else if(ch >= '0' && ch <= '9')
        {
            digit = 1;
        }
        else 
        {
            special_char = 1;
        }
    }

    if(isupper && islower && digit && special_char)
    {
        cout << "Strong Password";
    }
    else
    {
        cout << "Weak Password";
    }

    return 0;
}
