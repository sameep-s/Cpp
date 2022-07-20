#include <iostream>
#include <vector>
using namespace std;

bool arrayCheck(int arr[], int n)
{

    // base case
    if (n == 1 || n == 0)
    {
        return true;
    }

    // recursive case
    if (arr[0] > arr[1] and arrayCheck(arr + 1, n - 1))
    {
        return true;
    }

    return false;
}

bool isSorted(vector<int> arr)
{
    int n = arr.size();

    // base case
    if (n == 1 || n == 0)
    {
        return true;
    }

    // recursive case
    if (arr[0] > arr[1] and isSorted(arr.begin() + 1))
    {
        return true;
    }

    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 5, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << arrayCheck(arr, n);

    return 0;
}