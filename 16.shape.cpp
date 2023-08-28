#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Rectangle Shape
    int height, width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;

    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << setw(3) << symbol;
        }
        cout << endl;
    }
}