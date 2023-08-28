#include <iostream>
using namespace std;

int main()
{
    // +, -, *, /, %
    cout << 5 / 2 << endl;   // 2
    cout << 5.0 / 2 << endl; // 2.5
    cout << 5 % 2 << endl;

    // Unirary operator
    // ++, --
    int counter = 5;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl;

    int counter2 = 10;
    cout << counter2++ << endl; // Post increment, first print operation then increment
    cout << counter2 << endl;
    cout << ++counter2 << endl; // Pre increment, first increment then print
    cout << counter2 << endl;

    // Relational operators
    // <, >, <=, >=, ==, !=
    int a = 5, b = 5;
    cout << (a > b) << endl;

    // Logical operators
    // &&, ||, !
    cout << (a == 5 && b == 5) << endl;

    // Order
    //  arithmetic, relational, logical, assigment

    cout << (a == 5 && b == 5 + 3) << endl;

    // Assigment operators
    //  =, +=, -=, *=, /=, %=
    int x = 5;
    x += 7; // x=x+7
    cout << x << endl;
}