#include <iostream>
using namespace std;

int firstOccurance(int arr[], int n, int key)
{
    // base case
    if (n == 0)
    {
        return -1;
    }

    // rec case
    if (arr[0] == key)
    {
        return 0;
    }
    else
    {

        int subIndex = firstOccurance(arr + 1, n - 1, key);
        if (subIndex != -1)
        {
            return subIndex + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 5, 6, 2, 11, 21};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << firstOccurance(arr, n, 6) << endl;

    return 0;
}
