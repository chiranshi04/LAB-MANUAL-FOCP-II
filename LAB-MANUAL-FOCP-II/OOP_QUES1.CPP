// student record system using class and object
#include<iostream>
using namespace std;

    class student
{        string name;
        int rollno;
        int marks1;
        int marks2;
        int marks3;
        public:
        void input_detail()
        {
            cout<<"enter the name of student=";
            cin>>name;
            cout<<"enter the roll number of student=";
            cin>>rollno;
            cout<<"enter the marks of subject 1=";
            cin>>marks1;
            cout<<"enter the marks of subject 2=";
            cin>>marks2;
            cout<<"enter the marks of subject 3=";
            cin>>marks3;
        }

        void calculate_total()
        {
            int total;
            total=marks1+marks2+marks3;
            cout<<"the total marks of student="<<total;
        }
        void display_detail() // getter function
        {
            cout<<"\nname of student="<<name;
            cout<<"\nroll number of student="<<rollno;
            cout<<"\nmarks of subject 1="<<marks1;
            cout<<"\nmarks of subject 2="<<marks2;
            cout<<"\nmarks of subject 3="<<marks3;
        }
    
    };
    int main()
    {
        student s1;  //s1 is an object of class student
        s1.input_detail();
        s1.calculate_total();
        s1.display_detail();

        return 0;
    }