// calculating and displaying 3 rectangle area andd permeterr
#include<iostream>
using namespace std;
class rectangle
{
int length;
int widhth;
public:
void setrectangle()
{
 length=widhth=0;
 
}
void setrectangle(int n)
{
    length=widhth=n;
}
void setrectangle(int l,int q)
{
    length=l; widhth=q;
}
int calculate_area()
{
    return length*widhth;
}
int calculate_perimeter()
{
    return 2*(length+widhth);
}
void display()
{
    cout<<"length="<<length<<endl;
    cout<<"widhth="<<widhth<<endl;
    cout<<"area is ="<<calculate_area()<<endl;
    cout<<"perimeter is ="<<calculate_perimeter()<<endl;
}
};
int main()
{
    rectangle r1,r2,r3;
    r1.setrectangle();
    r1.display();
    cout<<endl;
    r2.setrectangle(10);
    r2.display();
    cout<<endl;
    r3.setrectangle(11,16);
     r3.display();
 return 0;


}