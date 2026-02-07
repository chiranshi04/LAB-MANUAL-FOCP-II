// three player chossing and finding who is the winner
#include<iostream>
using namespace std;
int main()
{
    int p1,p2,p3;
    cout<<"enter the score  of 3 players";
    cin>>p1>>p2>>p3;

    if (p1>p2&&p1>p3)
    cout<<"player 1 is winner";
    else if (p2>p1&&p2>p3)
    cout<<"player 2 is winner";
    else if (p3>p1&&p3>p2)
    cout<<"player 3 is winner";
    else 
    cout<<"it is a tie";
    return 0;
}