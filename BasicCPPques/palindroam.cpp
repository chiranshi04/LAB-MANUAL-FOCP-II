#include<iostream>
using namespace std;
int main()
{
    string s;
    int n=s.length();
    cout<<"enter the string";
    cin>>s;
    int flag =1;
    for(int i=0,j=n-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag =0;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
    return 0;
}