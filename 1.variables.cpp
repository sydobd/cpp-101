#include <iostream>
using namespace std;

int main()
{
    // float annualSalary;
    // cout << "Please enter your monthly salary: ";
    // cin >> annualSalary;
    // float monthlySalary = annualSalary / 12;
    // cout << "Your monthly salary is: " << monthlySalary << endl;
    // cout << "In 10 years you will earn" << annualSalary * 10;

    char gender = 'm';
    int yearOfBirth = 1996;
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 3904399430;

    cout << "Size of int is " << sizeof(int) << " bytes\n";
    cout << "Size of unsigned is " << sizeof(unsigned int) << " bytes\n";
    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(float) << " bytes\n";
    cout << "Size of float is" << sizeof(double) << " bytes\n";

    // -1,-2,-3....-2147483648
    cout << "Int min value is " << INT_MIN << endl;
    // 0,1,2....2147483647
    cout << "Int max value is " << INT_MAX << endl;

    cout << "UInt max value is " << UINT_MAX << "\n";

    // Data overflow
    int intMax = INT_MAX;
    cout << intMax << endl;
    cout << intMax + 1 << endl;

    // Swapping values in variables
    // Using a third variable
    int a = 10;
    int b = 30;

    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << " b = " << b << endl;

    // Without using third variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a = " << a << " b = " << b << endl;
}