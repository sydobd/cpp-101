#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    cout << "Guest: ";
    cin >> guestUserNum;

    (hostUserNum == guestUserNum) ? cout << "Correct!" : cout << "Wrong!";
}