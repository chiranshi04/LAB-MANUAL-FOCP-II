
#include <iostream>

using namespace std;

class Car
{
    string brand;
    int year;
    string colour;

public:
    void input_detail()
    {
        cout << "Enter car brand: ";
        cin >> brand;

        cout << "Enter year: ";
        cin >> year;

        cout << "Enter colour: ";
        cin >> colour;
    }

    void display_detail()
    {
        cout << "\nBrand: " << brand;
        cout << "\nYear: " << year;
        cout << "\nColour: " << colour;
    }
};

int main()
{
    Car c1;

    c1.input_detail();    
    c1.display_detail();  

    return 0;
}