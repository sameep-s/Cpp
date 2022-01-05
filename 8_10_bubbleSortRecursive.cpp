#include <iostream>
using namespace std;

void bubbleSort_Recurcive(int arr[], int n)
{
    // base case
    if (n == 1)
    {
        return;
    }

    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }

    // recursive case
    bubbleSort_Recurcive(arr, n - 1);
}

// -------------------------------------------          ----------------------

void bubbleSort_Recurcive2(int arr[], int n, int j)
{
    // base case
    if (n == 1 || n == 0)
    {
        return;
    }

    if (j == n - 1)
    {
        bubbleSort_Recurcive2(arr, n - 1, 0);
        return;
    }

    if (arr[j] > arr[j + 1])
    {
        swap(arr[j], arr[j + 1]);
    }

    bubbleSort_Recurcive2(arr, n, j + 1);
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // bubbleSort_Recurcive(arr, n);
    bubbleSort_Recurcive2(arr, n, 0);

    // print array at the end;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}