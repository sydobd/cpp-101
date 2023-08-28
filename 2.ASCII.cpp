#include <iostream>
using namespace std;

int main()
{
    // getting acii code of character/int using casting operator
    cout << (int)'a' << endl;
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << char(65) << endl;

    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII Message: " << int(c1) << " " << int(c2)
         << " " << int(c3) << " " << int(c4) << " " << int(c5);
}
