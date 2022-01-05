#include <iostream>
#include <vector>
using namespace std;

int binarySearch_recursion(vector<int> &arr, int s, int e, int key)
{
    int m = ((s + e) / 2);

    // base case
    if (s > e)
    {
        return -1;
    }

    // recursive case
    if (s <= e)
    {
        if (arr[m] == key)
        {
            return m;
        }

        else if (arr[m] < key)
        {
            binarySearch_recursion(arr, (m + 1), e, key);
        }
        else
        {
            binarySearch_recursion(arr, s, (m - 1), key);
        }
    }
}

int main()
{
    int key;
    cout << "Enter key: ";
    cin >> key;

    vector<int> arr = {1, 3, 8, 9, 15, 21, 34, 68, 100, 122, 156, 788, 2000, 3234, 4565, 6788, 6789, 8908};
    int e = (arr.size() - 1);

    cout << "The index is: " << binarySearch_recursion(arr, 0, e, key) << endl;

    return 0;
}