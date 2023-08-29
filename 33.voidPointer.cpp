#include <iostream>
using namespace std;

// Void pointer can point to any datatype
// void pointer cannot be deref directly,
// first we have to caste into specifice datatype
// then we deref it

void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *((int *)ptr) << endl;
        break;
    case 'c':
        cout << *((char *)ptr) << endl;
        break;
    default:
        break;
    }
}

int main()
{
    int number = 5;
    char letter = 'a';
    print(&number, 'i');
    print(&letter, 'c');

    return 0;
}
