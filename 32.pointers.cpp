#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << &n << endl; // printing out address of variable n

    // Pointers: Stores value and memory location or address
    // must have same type as variable
    int *ptr = &n;
    cout << ptr << endl;
    // Deref the pointer to access the value stored at pointer
    cout << *ptr << endl;
    // Changing value of pointer through deref
    *ptr = 20;
    cout << *ptr << endl;
    // value of variable also changed
    cout << n << endl;

    // The following code wont work because
    // the pointer has no address to store the value
    // int *ptr2
    // *ptr2 = 7;

    // Pointers application:
    // 1- To pass values by reference
    // 2- Return multiple values from function
    // 3- Used in combination with arrays
    // 4- Dynamic memory allocation
    // 5- To access the object of base class in derive class
    // 6- Smart pointers
};