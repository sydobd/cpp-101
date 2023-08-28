#include <iostream>
using namespace std;

int recursiveFunction(int m = 2, int n = 6)
{
    // base case, to avoid infinity
    if (m == n)
    {
        return m;
    }
    return m + recursiveFunction(m + 1, n);
}
int main()
{
    int a = 1, b = 4;
    cout << "Sum: " << recursiveFunction(a, b);
}