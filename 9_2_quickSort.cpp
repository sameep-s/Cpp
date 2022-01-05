// Quick sort is a divide and conquer algo similar to merge sort.
// 1. choose pivot point.(last element always)
// 2. partition step(most imp. step in quick sort).
// 3. recursively left and right.

#include <iostream>
#include <vector>
using namespace std;

// helper function
int partition(vector<int> &arr, int s, int e)
{
    // code
    int pivot = arr[e];
    int i = s - 1;

    for (int j = s; j < e; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[e]);

    return i + 1;
}

// main method
void quickSort(vector<int> &arr, int s, int e)
{
    // code
    // base case
    if (s >= e)
    {
        return;
    }

    // recrsive case
    int p = partition(arr, s, e);

    // recursion coming to play
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int main()
{
    vector<int> arr{10, 5, 0, 2, 7, 6, 4};
    int n = arr.size();

    quickSort(arr, 0, n - 1);

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}