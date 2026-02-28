#include<iostream>
using namespace std;
class candy
{
  string colour;
  int points;
  public:
  void setcandy(string c,int p)
  {
    colour =c;// hum c ko colour d rahe h 
    points=p;  //points ko p s intialise kraa
  }
    void displaycandy()
    {
    cout<<"\n colour:"<<colour;
    cout<<"\n points:"<<points;
    }

};
int main()
{
  candy c1,c2;
c1.setcandy( "blue",10);
c2.setcandy( "black",1);
c1.displaycandy();
c2.displaycandy();


}

