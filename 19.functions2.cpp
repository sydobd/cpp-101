#include <iostream>

using namespace std;

bool isPrimeNumber(int num)
{

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cout << "Number: ";
    cin >> number;

    bool isPrimeFlag = isPrimeNumber(number);

    if (isPrimeFlag)
    {
        cout << "Prime number" << endl;
    }
    else
    {
        cout << "Is not a prime number" << endl;
    }
}