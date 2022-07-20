// Array Reverse
// Complexity ->time O(n), space = O(1).

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int s = 0, e = n - 1;

    while (s < e)
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 23, 44, 66, 87, 98, 108};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);
    reverseArray(arr, n);
    printArray(arr, n);

    return 0;
}