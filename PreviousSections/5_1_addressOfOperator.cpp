#include <iostream>
using namespace std;

int main()
{
    // '&' = address of operator

    int x = 9;
    int *y = &x;

    // pointers basics
    cout << "value of x: " << x << endl;
    cout << "&x: " << &x << endl;
    cout << "y: " << y << endl;
    cout << "*y: " << *y << endl;

    // important to know
    // NULL pointer

    // ways to initialize
    int *p = 0;
    int *q = NULL;

    cout << "p: " << p << endl;
    cout << "q: " << q << endl;

    return 0;
}