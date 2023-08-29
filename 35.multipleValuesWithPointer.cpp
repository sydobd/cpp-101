#include <iostream>
using namespace std;

// Return multiple values with pointers

void getMinAndMax(int numbers[], int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }
        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }
    }
}
int main()
{
    int numbers[5] = {2, 4, -5, 89, 902};
    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max);
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}