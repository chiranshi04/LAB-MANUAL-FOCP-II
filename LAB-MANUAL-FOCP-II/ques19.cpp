#include<iostream>
using namespace std;
int main()
{
    int n, i,start,end;
    cout<<"enter the starting number";
    cin>>start;
    cout<<"enter the ending number";
    cin>>end;
    cout<<"prime numbers between "<<start<<" and "<<end<<" are: ";

    for(n=start;n<=end;n++)
    {
        if(n<2)
      continue; // skip the 0 and  1

      int found =1;
      for(int i=2;i<=n/2;i++)
      {
        if(n%i==0)
        {
            found=0;
            break;
        }
      }
      if(found==1)
      cout<<n<<" ";
        
    }
    return 0;
} 