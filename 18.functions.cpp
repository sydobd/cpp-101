#include <iostream>
using namespace std;

void introduceMe(string name, int age = 12)
{
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old." << endl;
}

int main()
{
    string name;
    int age;
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;

    introduceMe(name, age);
}