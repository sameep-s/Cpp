#include <iostream>
#include <vector>
using namespace std;

// helper function
void merge(vector<int> &arr, int s, int e)
{
    vector<int> temp;
    int p = s;
    int m = (s + e) / 2;
    int q = m + 1;

    int k = 0;

    // sorting loop
    while (p <= m && q <= e)
    {
        if (arr[p] < arr[q])
        {
            temp.push_back(arr[p]);
            p++;
        }
        else
        {
            temp.push_back(arr[q]);
            q++;
        }
    }

    // sorting remaining elements
    while (p <= m)
    {
        temp.push_back(arr[p]);
        p++;
    }

    while (q <= e)
    {
        temp.push_back(arr[q]);
        q++;
    }

    // copy temp to original
    for (int i = s; i <= e; i++)
    {
        arr[i] = temp[k++];
    }
}

// sorting method
void mergeSort(vector<int> &arr, int s, int e)
{
    // ---
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    merge(arr, s, e);
}

// Merge sort is a very simple divide and conquer algorithm.
int main()
{
    vector<int> arr{10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = arr.size() - 1;

    mergeSort(arr, s, e);
    for (int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}