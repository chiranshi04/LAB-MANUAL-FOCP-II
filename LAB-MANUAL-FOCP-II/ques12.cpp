// checkin the triangle 
#include <iostream>
using namespace std;
int main ()
{
    int sid1,sid2,sid3;
    cout<<"enter th 3 sides";
    cin>>sid1>>sid2>>sid3;
    if(sid1==sid2 && sid2==sid3 && sid3==sid1)
    cout<<"equil traingle";
    else if (sid1==sid2||sid2==sid3||sid3==sid1)
    cout<<"isosceles triangle";
    else
    cout<<"scalence traingle";
    return 0;
}