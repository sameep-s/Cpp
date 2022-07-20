// INSERTION SORT

#include <iostream>
using namespace std;

// sort the elements in increasing order - Insertion Sort.
void insertionSort(int a[], int n, bool flag)
{

    for (int i = 1; i < n; i++)
    {
        int current = a[i], prev = (i - 1);

        while (prev >= 0 && (flag ? (a[prev] < current) : (a[prev] > current)))
        {
            a[prev + 1] = a[prev];
            prev--;
        }

        a[prev + 1] = current;
    }
}

int main()
{

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n, 0);

    // to printArray
    for (auto x : arr)
    {
        cout << x << ",";
    }

    return 0;
}