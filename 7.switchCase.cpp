#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char operation;
    cout << "Calculator" << endl;
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    case '-':
        cout << num1 - num2;
        break;
    case '+':
        cout << num1 + num2;
        break;
    case '*':
        cout << num1 * num2;
        break;
    5 case '/':
        cout << num1 / num2;
        break;
    case '%':
        bool isNum1Int, isNum2Int;
        isNum1Int = ((int)num1 == num1);
        isNum2Int = ((int)num2 == num2);

        if (isNum1Int && isNum2Int)
        {
            cout << int(num1) % int(num2);
        }
        else
        {
            cout << "Invalid";
        }
        break;

    default:
        cout << "Not valid operation";
        break;
    }
}