// Linear Search Algorithm -> Fast and Efficient.
// Complexity => k = O(log n);

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) // When pasing an array to a function array is passed by reference only.
{
    int s = 0, e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }

    return -1;
}

int main()
{
    // In binary search the array should be sorted.or monotonic(increasing or decreasing).
    int arr1[] = {1, 3, 8, 9, 15, 21, 34, 68, 100, 122, 156, 788, 2000, 3234, 4565, 6788, 6789, 8908};
    int n = sizeof(arr1) / sizeof(int);

    int key;
    cout << "Enter the key : ";
    cin >> key;

    int index = binarySearch(arr1, n, key);
    if (index != -1)
    {
        cout << "The Key is present on index : " << index << endl;
    }
    else
    {
        cout << "Key not present in the array. " << endl;
    }

    return 0;
}