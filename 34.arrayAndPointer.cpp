#include <iostream>
using namespace std;

int main()
{
    int luckyNumber[5] = {2,
                          3,
                          5,
                          7,
                          9};
    // returns address of the first element of array
    cout << luckyNumber << endl;
    cout << &luckyNumber[0] << endl;

    // To get third element of array
    // square bracket working as deref operator
    cout << luckyNumber[2] << endl;
    // another way, by adding 2 in first address and then deref it
    cout << *(luckyNumber + 2) << endl;

    int numbers[5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Number: ";
        cin >> numbers[i];
    }

    for (int i = 0; i <= 4; i++)
    {
        cout << *(numbers + i) << " ";
    }
}