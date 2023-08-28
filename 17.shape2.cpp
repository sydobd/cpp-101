#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Triangle
    int height, width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;

    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
    cout << endl;

    for (int i = height; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << setw(2) << symbol;
        }
        cout << endl;
    }
}