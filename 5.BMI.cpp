#include <iostream>
using namespace std;

int main()
{
    float height, weight, bmi;
    cout << "Weight(Kg), height(m): ";
    cin >> weight >> height;
    bmi = weight / (height * height);

    if (bmi < 18.5)
    {
        cout << "Underweight" << endl;
    }
    else if (bmi > 25)
    {
        cout << "Overweight" << endl;
    }
    else
    {
        cout << "Normal Weight" << endl;
    }
    cout << "Your bmi is: " << bmi;
}