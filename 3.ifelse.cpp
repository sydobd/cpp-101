#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter a whole number: ";
    cin >> number;
    if (number % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }

    // Nested ifelse
    // User enters side lengths of a triangle (a, b, c)
    // Program should write out whether that triangle is equilateral, isosceles or scalene
    float a, b, c;
    cout << "Enter lenght of side of triangle: ";
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "Equilateral Triangle";
    }
    else
    {
        if (a != b && b != c && a != c)
        {
            cout << "Scalene Triangle";
        }
        else
        {
            cout << "Isosceles Triangle";
        }
    }
    cout << "Thanks, Bye!" << endl;
}