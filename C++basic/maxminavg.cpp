#include<iostream>
using namespace std;
void computepeformance(int m[],int n)
{
    int max = m[0];
    int min = m[0];
    int average=0;
    for(int i=0;i<n;i++)
    {
        if(m[i]>max)
        {
            max=m[i];
        }
        if(m[i]<min)
        {
            min=m[i];
        }
        average=average+m[i];
    }
    float avg=(float)average/n;
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min<<endl;
    cout<<"Average: "<<avg<<endl;
}
int main()
{
    int marks[]= {85, 92, 78, 90, 88};
    computepeformance(marks, 5);
    return 0;
}