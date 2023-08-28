#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    cout << sum(3, 4) << endl;
    cout << sum(3.3, 4.5) << endl;
    cout << sum(4.5, 45.5, 5.6) << endl;
}

int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}
float sum(float a, float b, float c)
{
    return a + b + c;
}