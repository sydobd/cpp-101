#include <iostream>
using namespace std;

int main()
{
    // Size of array must be known at compile time
    // to solve this we use dynamic array
    int size;
    cin >> size;
    // "new" allocates memory
    int *myArray = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
        // cout << *(myArray+i) << " ";
    }
    // dealocating memory
    delete[] myArray;
    myArray = NULL;
}