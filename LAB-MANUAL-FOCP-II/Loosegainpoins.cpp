#include<iostream>
using namespace std;
class candy
{
    string colour;
    int points;
    public:
    void setcandy(string c,int p)
    {
        colour=c;points=p;
    }
    void displaycandy()
    {
        cout<<"\n colour is="<<colour;
        cout<<"\n points is ="<<points;
    }
    void loose_points()
    {
        points=points-12;
    }
    void gain_points()
    {
        points+=10;
    }
};
int main()
{
    candy c1 ,c2;
    c1.setcandy("blue",20);
    c1.displaycandy();
    c1.loose_points();
     c1.displaycandy();
     c1.gain_points();
     c1.displaycandy(); 
    c2.setcandy("green",30);

}
