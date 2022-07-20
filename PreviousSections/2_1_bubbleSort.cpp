// Bubble sort

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool swapped;
    for (int i = 0; i <= (n - 1); i++)
    {
        swapped = false;
        for (int j = 0; j < (n - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // if no elements were swapped in first iteration it means the array is already sorted.
        if (swapped == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    // to print
    for (auto x : arr)
    {
        cout << x << ",";
    }

    return 0;
}