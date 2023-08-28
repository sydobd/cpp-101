#include <iostream>
using namespace std;

void showMenu()
{
    cout << "*********MENU*********" << endl;
    cout << "1. Check the balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "**********************" << endl;
}

int main()
{
    // check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    system("cls");

    do
    {
        showMenu();
        cout << "Option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Balance is: $" << balance << endl;
            break;
        case 2:
            cout << "Enter amount to depoit: $" << endl;
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            cout << "Your new balance is: $" << balance << endl;
            break;
        case 3:
            cout << "Enter withdraw to depoit: $" << endl;
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
            {

                balance -= withdrawAmount;
            }
            else
            {
                cout << "Not enough money." << endl;
            }
            cout << "Your new balance is: $" << balance << endl;
            break;
        default:
            break;
        }
    } while (option != 4);
}