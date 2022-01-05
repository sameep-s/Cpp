#include <iostream>
using namespace std;

void printParis(int arr[], int n)
{
    cout << "Pairs : " << endl; // 2 Nested loops
    for (int i = 0; i < n; i++)
    {
        for (int j = (i); j < n; j++)
        {
            cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);

    // // Print all elements
    // for (int x : arr)
    // {
    //     cout << x << endl;
    // }

    printParis(arr, n);

    return 0;
}