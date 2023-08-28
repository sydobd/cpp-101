#include <iostream>
using namespace std;

int main()
{
    // Factorial
    int number;
    cout << "Number: ";
    cin >> number;
    int factorial = 1;

    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    cout << number << "!=" << factorial;
}