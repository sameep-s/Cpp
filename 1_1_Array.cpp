/*
Array = elements of same data type and contiguous memory.
Array with dataType 'char' has 1 byte spacing in consecutive cells.

Creating an Array;

int a[100]; // allocate 4x100 = 400 byte

int b[50] = {0}; // all elements 0

int c[100] = {1, 2, 3}; // 1,2,3,0,0,0...

int d[] = {1, 2, 3};

*/

#include <iostream>
using namespace std;

int main()
{
    int marks[100];
    int n;

    cout << "Enter the Number of Students : ";
    cin >> n;

    // input
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
    }

    // output
    cout << "The elements of array are : ";
    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << " ";
    }

    cout << "." << endl;

    return 0;
}