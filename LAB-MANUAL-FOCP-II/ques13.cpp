
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    double a, b, c, D, r1, r2;

    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

    D = b*b - 4*a*c;

    if (D > 0) {
        r1 = (-b + sqrt(D)) / (2*a);
        r2 = (-b - sqrt(D)) / (2*a);
        cout << "Roots are real and different\n";
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2;
    }
    else if (D == 0) {
        r1 = -b / (2*a);
        cout << "Roots are real and equal\n";
        cout << "Root = " << r1;
    }
    else {
        cout << "Roots are complex";
    }

    return 0;
}
