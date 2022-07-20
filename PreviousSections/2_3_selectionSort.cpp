#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    // SELECTION-SORT ALGORITHM
    for (int i = 0; i < (n - 1); i++)
    {
        int current = arr[i];
        int min_pos = i;

        for (int j = i; j < (n); j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }
        // Swapping outside loop
        swap(arr[min_pos], arr[i]);
    }
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    // to printArray
    for (auto x : arr)
    {
        cout << x << ",";
    }

    return 0;
}