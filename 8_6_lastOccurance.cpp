#include <iostream>
#include <vector>
using namespace std;

int lastOccurance(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }

    // recursive case
    int subIndex = lastOccurance(arr + 1, n - 1, key);
    if (subIndex == -1)
    {
        if (arr[0] == key)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return subIndex + 1;
    }
}

int main()
{

    int arr[] = {1, 3, 5, 7, 5, 6, 2, 7, 11, 21};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << lastOccurance(arr, n, 7) << endl;

    return 0;
}